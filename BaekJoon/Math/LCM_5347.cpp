//
//  LCM_5347.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 03/11/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

#if 0
/// MARK: - LCM
#include <iostream>
using namespace std;

long long getGCD(long long a, long long b) {
    if(b==0) return a;
    return getGCD(b, a%b);
}

long long getLCD(const long long &a, const long long &b) {
    return a*b/getGCD(a,b);
}

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    int T; cin>>T;
    while(T--) {
        long long A,B; cin>>A>>B;
        printf("%lld\n",getLCD(A,B));
    }
    return 0;
}
#endif
