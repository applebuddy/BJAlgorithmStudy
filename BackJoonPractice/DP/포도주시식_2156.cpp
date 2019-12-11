//
//  포도주시식_2156.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2019/12/11.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

// MARK: - 포도주 시식

#if 0
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

vector<vector<int>> DP(10001, vector<int>(3,0));

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    int N; cin>>N;
    vector<int> Grape(N+1, 0);
    for(int i=1; i<=N; i++) cin>>Grape[i];
    DP[1][1] = Grape[1];
    
    for(int i=2; i<=N; i++) {
        DP[i][0] = max(DP[i-1][0], max(DP[i-1][1], DP[i-1][2]));
        DP[i][1] = DP[i-1][0] + Grape[i];
        DP[i][2] = DP[i-1][1] + Grape[i];
    }
    
    printf("%d\n",*max_element(DP[N].begin(), DP[N].end()));
    
    return 0;
}
#endif
