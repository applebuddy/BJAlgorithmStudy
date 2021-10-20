//
//  회전하는큐_1021.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/02/02.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: 회전하는큐

// MARK: - 벡터 사용 문제풀이

#if 0
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    vector<int> V;
    int N,M; cin>>N>>M;
    int Ans = 0;
    for(int i=0; i<N; i++) V.push_back(i);
    while(M--) {
        if(V.size() <= 1) break;
        int num; cin>>num;
        num--;
        int idx = (int)(find(V.begin(), V.end(), num) - V.begin());
        if(idx < V.size()-idx) {
            Ans += idx;
            V.insert(V.end(), V.begin(), V.begin()+idx);
            V.erase(V.begin(), V.begin()+idx+1);
        } else {
            int nowIdx = (int)V.size()-idx;
            Ans += nowIdx;
            vector<int> temp = vector<int>(V.end()-nowIdx+1, V.end());
            V.erase(V.end()-nowIdx, V.end());
            V.insert(V.begin(), temp.begin(), temp.end());
        }
    }
    printf("%d\n",Ans);
    
    return 0;
}
#endif
