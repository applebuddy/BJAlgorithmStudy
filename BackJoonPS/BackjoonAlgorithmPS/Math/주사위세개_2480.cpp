//
//  주사위세개_2480.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 02/11/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 주사위 세개_2480
#if 0
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    int A,B,C; cin>>A>>B>>C;
    int Ans=0;
    if(A!=B && A!=C && C!=B) Ans = 100 * max(A,max(B,C));
    else if(A==B && B==C && A==C) Ans = 1000 * A + 10000;
    else {
        if(A==B || A==C) Ans = 100 * A + 1000;
        else Ans = 100 * B + 1000;
    }
    printf("%d\n",Ans);
    return 0;
}
#endif
