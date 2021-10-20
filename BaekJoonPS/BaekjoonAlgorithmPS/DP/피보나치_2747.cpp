//
//  피보나치_2747.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 07/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 피보나치수_2747

#include <iostream>
#include <vector>
using namespace std;

vector<long long> Chk(46,0);

long long getFibonarchi(const int &N) {
    if(N==0) return 0;
    if(N==1 || N==2) return 1;
    if(Chk[N]>0) return Chk[N];
    
    Chk[N] = getFibonarchi(N-1)+getFibonarchi(N-2);
    return Chk[N];
}

void theFibonarchiNumber() {
    int N; cin>>N;
    long long Ans = getFibonarchi(N);
    printf("%lld\n",Ans);
    return;
}

//int main() {
//    ios_base :: sync_with_stdio(0); cin.tie(0);
//    theFibonarchiNumber();
//    return 0;
//}
