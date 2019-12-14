//
//  2xn타일링_11726.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2019/12/14.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

// MARK: 2xn 타일링 11726

#if 0
#include <iostream>
#include <vector>
using namespace std;

vector<int> DPV(1001,0);

int DP(int N) {
    if(N<=1) return 1;
    if(DPV[N]>0) return DPV[N];
    DPV[N] = DP(N-1) + DP(N-2);
    return DPV[N] % 10007;
}

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    int N; cin>>N;
    printf("%d\n",DP(N));
    return 0;
}
#endif
