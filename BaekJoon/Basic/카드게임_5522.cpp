//
//  카드게임_5522.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 20/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 카드게임
#if 0
#include <iostream>
using namespace std;

void theCardGameScoreSum() {
    int Ans=0;
    for(int i=0; i<5; i++) {
        int num; cin>>num; Ans+=num;
    }
    printf("%d\n",Ans);
    return;
}

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    theCardGameScoreSum();
    return 0;
}
#endif
