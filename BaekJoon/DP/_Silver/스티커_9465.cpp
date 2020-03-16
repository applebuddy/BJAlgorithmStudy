//
//  스티커_9465.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2019/12/11.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

// MARK: - 스티커_9465

#if 0
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

vector<vector<int>> DP(100001, vector<int>(3,0));
int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    int T; cin>>T;
    while(T--) {
        int N; cin>>N;
        vector<vector<int>> Sticker(2, vector<int>(N+1,0));
        for(int i=0; i<=1; i++) {
            for(int j=1; j<=N; j++) {
                cin >> Sticker[i][j];
            }
        }
        
        DP[1][0] = 0;
        DP[1][1] = Sticker[0][1];
        DP[1][2] = Sticker[1][1];
        
        for(int i=2; i<=N; i++) {
            DP[i][0] = max(DP[i-1][0], max(DP[i-1][1], DP[i-1][2]));
            DP[i][1] = max(DP[i-1][0], DP[i-1][2]) + Sticker[0][i];
            DP[i][2] = max(DP[i-1][0], DP[i-1][1]) + Sticker[1][i];
        }
        
        printf("%d\n",max(DP[N][0], max(DP[N][1], DP[N][2])));
    }
    
    return 0;
}
#endif
