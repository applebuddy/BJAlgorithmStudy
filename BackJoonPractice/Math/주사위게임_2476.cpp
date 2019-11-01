//
//  주사위게임_2476.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 02/11/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 주사위게임_2476
#if 0
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    int T; cin>>T;
    int ANS=0;
    while(T--) {
        int A,B,C; cin>>A>>B>>C;
        int Ans=0;
        if(A!=B && A!=C && C!=B) Ans = 100 * max(A,max(B,C));
        else if(A==B && B==C && A==C) Ans = 1000 * A + 10000;
        else {
            if(A==B || A==C) Ans = 100 * A + 1000;
            else Ans = 100 * B + 1000;
        }
        ANS = ANS < Ans ? Ans : ANS;
    }
    printf("%d\n",ANS);
    return 0;
}
#endif
