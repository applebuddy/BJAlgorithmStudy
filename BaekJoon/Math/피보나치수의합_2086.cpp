
//
//  피보나치수의합_2086.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/02/26.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: TLE

#if 0
#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    ll A, B; cin>>A>>B;
    ll Ans = 0;
    ll prev = 1, pprev = 1;
    if(A==B && A<=2) return !printf("%d\n",1);
    else if(A==1 && B==2) return !printf("%d\n",2);
    if(A<=1) Ans+=1;
    if(A<=2) Ans+=1;
    for(int i=3; i<=B; i++) {
        ll now = (prev + pprev) % 1000000000;
        pprev = prev;
        prev = now;
        if(A<=i) {
            Ans += (now % 1000000000);
            Ans %= 1000000000;
        }
    }
    printf("%lld\n",Ans);
    return 0;
}
#endif
