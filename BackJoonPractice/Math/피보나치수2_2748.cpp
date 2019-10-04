//
//  피보나치수2_2748.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 04/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 피보나치수2_2748

#include <iostream>
#include <vector>
using namespace std;

vector<long long> Cache(101,0);

long long getFibonachiNumber(long long n) {
    if(n==1 || n==2) return 1;
    if(Cache[n]>0) return Cache[n];
    Cache[n] = getFibonachiNumber(n-1) + getFibonachiNumber(n-2);
    return Cache[n];
}

//int main() {
//    long long N; cin>>N;
//    long long Ans = getFibonachiNumber(N);
//    printf("%lld\n",Ans);
//    return 0;
//}
