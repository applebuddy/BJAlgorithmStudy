//
//  이친수_2193.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2019/12/11.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

// MARK: - 이친수_2193

#if 0
#include <iostream>
#include <vector>
using namespace std;

vector<long long> DP(91,0);

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    int N; cin>>N;
    DP[1] = 1;
    DP[2] = 1;
    
    for(int i=3; i<=N; i++) {
        DP[i] = DP[i-1] + DP[i-2];
    }
    
    printf("%lld\n", DP[N]);
    return 0;
}
#endif
