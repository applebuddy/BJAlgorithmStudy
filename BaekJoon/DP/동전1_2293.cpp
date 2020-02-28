//
//  동전1_2293.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/02/28.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: - 동전1 2293
// MARK: DP 문제풀이

#if 0
#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;

vector<ll> DP(200000, 0);

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    ll N, K; cin>>N>>K;
    vector<ll> Coin;
    for(int i=0; i<N; i++) {
        ll num; cin>>num;
        if(num > K) continue;
        Coin.push_back(num);
    }
    
    int len = (int)Coin.size();
    if(len==0) return !printf("%d\n",0);
    for(int i=0; i<=K; i++) DP[i] = i % Coin[0] == 0 ? 1 : 0;
    for(int i=1; i<len; i++) {
        for(ll j=Coin[i]; j<=K; j++) {
            DP[j] += DP[j-Coin[i]];
        }
    }
    
    printf("%lld\n",DP[K]);
    return 0;
}
#endif
