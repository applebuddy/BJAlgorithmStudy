//
//  파도반수열_9461.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 18/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 파도반 수열_9461
#if 0
#include <iostream>
using namespace std;

void padobanSequence() {
    long long C[101] = {0,};
    C[1]=1;
    C[2]=1;
    C[3]=1;
    C[4]=2;
    C[5]=2;
    int T; cin>>T;
    while(T--) {
        int num; cin>>num;
        if(C[num]>0) printf("%lld\n",C[num]);
        else {
            for(int i=6; i<=num; i++) C[i] = C[i-1]+C[i-5];
            printf("%lld\n",C[num]);
        }
    }
    return;
}

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    padobanSequence();
    return 0;
}
#endif
