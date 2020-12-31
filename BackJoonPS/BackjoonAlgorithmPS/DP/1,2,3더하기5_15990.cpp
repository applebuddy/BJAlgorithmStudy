//
//  1,2,3더하기5_15990.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2019/12/10.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

// MARK: - 1,2,3더하기5_15990
#if 0
#include <iostream>
#include <vector>
using namespace std;

vector<vector<long long>> DP(100001,vector<long long>(4,0));

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int T; cin>>T;
    DP[1] = {0,1,0,0};
    DP[2] = {0,0,1,0};
    DP[3] = {0,1,1,1};
    for(int i=4; i<=100000; i++) {
        DP[i][1] = (DP[i-1][2] + DP[i-1][3]) % int(1e9+9);
        DP[i][2] = (DP[i-2][1] + DP[i-2][3]) % int(1e9+9);
        DP[i][3] = (DP[i-3][1] + DP[i-3][2]) % int(1e9+9);
    }
    
    while(T--) {
        int num; cin>>num;
        printf("%lld\n",(DP[num][1] + DP[num][2] + DP[num][3]) % int(1e9+9));
    }
    return 0;
}
#endif
