//
//  오르막수_11057.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2019/12/11.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

// MARK: - 오르막수_11057
#if 0
#include <iostream>
#include <vector>
using namespace std;

vector<vector<long long>> DP(1001, vector<long long>(10,0));
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int N; cin>>N;
    long long Ans = 0;
    for(int i=0; i<=9; i++) DP[1][i] = 1;
    for(int i=2; i<=N; i++) {
        for(int j=0; j<=9; j++) {
            for(int k=0; k<=j; k++) {
                DP[i][j] += DP[i-1][k];
                DP[i][j] %= 10007;
            }
         }
    }
    
    for(int i=0; i<=9; i++) {
        Ans += DP[N][i];
        Ans %= 10007;
    }
    printf("%lld\n",Ans);
    
    return 0;
}
#endif
