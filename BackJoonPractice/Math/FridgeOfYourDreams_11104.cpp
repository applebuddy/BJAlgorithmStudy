//
//  FridgeOfYourDreams_11104.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 27/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 숫자카드놀이_4564
#if 0
#include <string>
#include <iostream>
using namespace std;

int newPow(int N, int R) {
    if(R==0) return 1;
    int mul=N;
    int result=1;
    while(R>0) {
        if(R%2==0) {
            mul*=mul;
            R/=2;
        } else {
            result*=mul;
            R--;
        }
    }
    return result;
}

void theNumberCardGame() {
    int T; cin>>T;
    while(T--) {
        string S; cin>>S;
        int Ans = 0;
        for(int i=0; i<S.length(); i++) {
            if(S[i]-'0'==1) Ans += newPow(2,(int)S.length()-1-i);
        }
        printf("%d\n",Ans);
    }
    return;
}

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    theNumberCardGame();
    return 0;
}
#endif
