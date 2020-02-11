//
//  1학년_5557.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/02/11.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: 1학년 5559
// MARK: - DP(Top-Down) 문제풀이
#if 0
#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;

vector<ll> G(101,0);
vector<vector<ll>> DP(101, vector<ll>(21,-1));
ll Ans = 0, Len = 0;

ll DFS(ll idx, ll sum) {
    if(idx == Len-1) return sum == G[Len-1] ? 1 : 0;
    if(DP[idx][sum]!=-1) return DP[idx][sum];
    DP[idx][sum] = 0;
    
    if(sum + G[idx] <= 20) DP[idx][sum] += DFS(idx+1, sum+G[idx]);
    if(sum - G[idx] >= 0) DP[idx][sum] += DFS(idx+1, sum-G[idx]);
    return DP[idx][sum];
}

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    int N; cin>>N;
    Len = N;
    for(int i=0; i<N; i++) cin>>G[i];
    Ans = DFS(1,G[0]);
    printf("%lld\n",Ans);
    return 0;
}
#endif
