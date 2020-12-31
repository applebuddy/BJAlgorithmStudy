//
//  저금_4998.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2019/12/17.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

// MARK: 저금_4998

#if 0
#include <iostream>
using namespace std;

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    double N,M,B;
    while(cin>>N>>B>>M) {
        int Ans=0;
        while(N<M) {
            Ans++;
            N *= (1+B/100.0);
        }
        printf("%d\n",Ans);
    }
    return 0;
}
#endif
