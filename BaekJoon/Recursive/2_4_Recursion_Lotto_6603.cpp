//
//  2_4_Recursion_Lotto_6603.cpp
//  BackJoonPractice
//
//  Created by Min Kyeong Tae on 28/04/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

// 뽑은 Lotto값을 저장할 벡터데이터변수
vector<int> lotto;
void getLottoNum(vector<int> &preLotto, int length, int index) {
    
    // 1) 로또를 완성했을 경우 => length == 6
    // *로또배열은 따로 설정한다.
    if(lotto.size() == 6) {
        for(int i=0; i<lotto.size(); i++) {
            cout << lotto[i] << " ";
        }
        cout << "\n";
        return;
    }
    
    // 2) 문제가 생긴 경우 작업종료 => index >= length
    if(index >= preLotto.size()) {
        return;
    }
    
    // 3) 추가 작업이 필요한경우 => 뽑거나 안뽑고 다음인덱스를 확인한다.
    //  1.로또번호를 뽑고나서
    lotto.push_back(preLotto[index]);
    // 탐색인덱스, 로또번호 길이를 늘려보고
    getLottoNum(preLotto, length+1, index+1);
    // 2.아니면 로또번호를 뽑지 말고, 다음 인덱스탐색을 이어간다.
    lotto.pop_back();
    getLottoNum(preLotto, length, index+1);
    
    
    return;
}

int main() {
    
    int k;
    
    while(1){
        // k 개의 로또번호를 뽑는다.
        scanf("%d",&k);
        
        // k 값이 0이라면, 종료한다.
        if(k==0) break;
        
        vector<int> preLotto(k);
        
        // K 개의 로또번호를 입력받는다. 이 번호들을 토대로 6자리 번호의 경우를 판단한다.
        for(int i=0; i<k; i++){
            scanf("%d", &preLotto[i]);
        }
        
        // 재귀ㅣ함수 getLottoNum을 사용하여 LottoNum을 출력한다.
        // 1.후보로또, 2.현재로또의길이 3.현재인덱스
        getLottoNum(preLotto, 0, 0);
        puts("");
    }
    return 0;
}
