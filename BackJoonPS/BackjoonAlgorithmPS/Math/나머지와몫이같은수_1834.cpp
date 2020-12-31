//
//  나머지와몫이같은수_1834.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/02/02.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: 나머지와몫이같은수_1834
#if 0
#include <iostream>
using namespace std;
typedef long long ll;

int main() {
    ll N; cin>>N;
    ll target = N+1;
    ll endIdx = N*N;
    ll Ans = 0;
    for(ll i=target; i<endIdx; i+=target) Ans+=i;
    printf("%lld\n",Ans);
    return 0;
}
#endif
