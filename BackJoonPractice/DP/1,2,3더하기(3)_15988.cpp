//
//  1,2,3더하기(3)_15988.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2019/12/09.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

// MARK: - 1,2,3더하기_15988

#include <iostream>
#include <vector>
using namespace std;

vector<int> DP(1000001,0);
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int T; cin>>T;
    
    DP[0] = 1;
    DP[1] = 1;
    DP[2] = 2;
    DP[3] = 4;
    for(int i=4; i<=1e6; i++) DP[i] = ((long long)DP[i-1] + DP[i-2] + DP[i-3]) % (int)(1e9+9);
    
    while(T--) {
        int num; cin>>num;
        printf("%d\n",DP[num]);
    }
    
    return 0;
}
