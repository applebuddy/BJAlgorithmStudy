//
//  파인만_5724.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 30/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 파인만_5724
#if 0
#include <iostream>
#include <vector>
using namespace std;

vector<int> DP(101,0);

int main() {
    while(1) {
        int N; cin>>N;
        if(N==0) break;
        DP[1]=1;
        if(DP[N]>0) printf("%d\n",DP[N]);
        else {
            for(int i=2; i<=N; i++) {
                if(DP[i]>0) continue;
                DP[i] = DP[i-1] + i*i;
            }
            printf("%d\n",DP[N]);
        }
    }
    return 0;
}
#endif
