//
//  피보나치수5_10870.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 10/11/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

#if 0
#include <iostream>
#include <vector>
using namespace std;

int DP[21]={0,};

int getFibonarchi(int N) {
    if(N==0) return DP[N]=0;
    else if(N<=2) return DP[N]=1;
    return DP[N] = getFibonarchi(N-1) + getFibonarchi(N-2);
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int N; cin>>N;
    int Ans = getFibonarchi(N);
    printf("%d\n",Ans);
    return 0;
}
#endif
