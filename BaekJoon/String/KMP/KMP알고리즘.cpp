
//
//  KMP알고리즘.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/03/04.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: - KMP알고리즘
// MARK: 부분문자열 검색 알고리즘
/// ★ KMP알고리즘은 공통 접미/접두 문자열 길이를 사전 기록하여 활용, O(N*M)의 시간복잡도를 O(N)으로 향상시켜줄 수 있는 알고리즘입니다. 

#if 0
#include <vector>
#include <iostream>
#include <string>
using namespace std;

// MARK: - KMP알고리즘에 활용 할 실패 테이블을 작성한다.
vector<int> makeTable(string pattern) {
    int patternSize = (int)pattern.size();
    vector<int> table(patternSize, 0);
    int j = 0;
    for(int i = 1; i < patternSize; i++) {
        while(j > 0 && pattern[i] != pattern[j]) {
            j = table[j - 1];
        }
        if(pattern[i] == pattern[j]) {
            table[i] = ++j;
        }
    }
    return table;
}

// MARK: - KMP 알고리즘
void KMP(string parent, string pattern) {
    vector<int> table = makeTable(pattern);
    int parentSize = (int)parent.size();
    int patternSize = (int)pattern.size();
    int j = 0;
    for(int i=0; i<parentSize; i++) {
        while(j > 0 && parent[i] != pattern[j]) {
            j = table[j-1];
        }
        
        if(parent[i] == pattern[j]) {
            if(j == patternSize - 1) {
                // 특정 문자열을 찾았다면, 찾았음을 알지고, j를 table[j]로 초기화
                printf("%d번째에서 %s 문자열을 찾았습니다.\n",i - patternSize+2, pattern.c_str());
                // 문자열 일치 후에는 최장 공통 접미사 부분 인덱스로 다시 위치 후 문자열 매칭을 시작한다.
                printf("j를 %d로 이동합니다.\n",table[j]);
                j = table[j];
            } else {
                // 아직 매칭 문자열 길이에 도달하지 않았으면, j 커서만 한칸 증가
                j++;
            }
        }
    }
}

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    /// * parent : 부분문자열을 검색할 전체문자열
    /// * pattern : 탐색하고자 하는 부분문자열
    string parent = "ababacabacaabacaaba";
    string pattern = "abacaaba";
    KMP(parent, pattern);
    puts("");
    return 0;
}
#endif
