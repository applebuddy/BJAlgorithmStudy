//
//  이항계수2_11051.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 16/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 이항계수2_11051
#if 0
#include <iostream>
#include <vector>
using namespace std;

vector<vector<long long>> BCA(1001,vector<long long>(1001));

long long getBinomialCoefficient(long long N, long long R) {
    if(BCA[N][R]>0) return BCA[N][R];
    if(N==R || R==0) return 1;
    return BCA[N][R] = (getBinomialCoefficient(N-1,R-1)+getBinomialCoefficient(N-1, R))%10007;
}

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    int N,R; cin>>N>>R;
    long long Ans = getBinomialCoefficient(N,R);
    printf("%lld\n",Ans);
    return 0;
}
#endif
