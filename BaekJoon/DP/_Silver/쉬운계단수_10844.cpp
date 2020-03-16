//
//  쉬운계단수_10844.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2019/12/10.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

// MARK: - 쉬운계단수_10844

#if 0
#include <iostream>
#include <vector>
using namespace std;

vector<vector<long long>> DP(101,vector<long long>(10,0));

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    for(int i=1; i<=9; i++) DP[1][i] = 1;
    int N; cin>>N;
    long long Ans = 0;
    
    for(int i=2; i<=N; i++) {
        for(int j=0; j<=9; j++) {
            if(j!=0) DP[i][j] += (DP[i-1][j-1]) % (int)(1e9);
            if(j!=9) DP[i][j] += (DP[i-1][j+1]) % (int)(1e9);
        }
    }
    
    for(int i=0; i<=9; i++) Ans += DP[N][i];
    
    printf("%lld\n",(Ans) % (int)(1e9));
    return 0;
}
#endif
