//
//  1,2,3더하기_9095.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2019/12/09.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

// MARK: - 1,2,3더하기_9095
#if 0
#include <iostream>
#include <vector>
using namespace std;

vector<int> DP(12,0);

int go(int target) {
    if(target == 1) return 1;
    else if(target == 2) return 2;
    else if(target == 3) return 4;
    else if(DP[target]>0) return DP[target];
    DP[target] = go(target-1) + go(target-2) + go(target-3);
    return DP[target];
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int T; cin>>T;
    while(T--) {
        int num; cin>>num;
        printf("%d\n",go(num));
    }
    return 0;
}
#endif
