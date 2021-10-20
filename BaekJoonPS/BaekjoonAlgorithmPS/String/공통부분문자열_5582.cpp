//
//  공통부분문자열_5582.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 05/11/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 공통부분문자열_5582 : ✭CSS DP Problem
#if 0
#include <iostream>
#include <string>
using namespace std;

int DP[401][401]={0};

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    string S,S2; cin>>S>>S2;
    int Ans = 0;
    for(int i=1; i<=S.length(); i++) {
        for(int j=1; j<=S2.length(); j++) {
            if(S[i-1]==S2[j-1]) {
                DP[i][j] = DP[i-1][j-1]+1;
                Ans = Ans<DP[i][j] ? DP[i][j] : Ans;
            }
        }
    }
    printf("%d\n",Ans);
    return 0;
}
#endif
