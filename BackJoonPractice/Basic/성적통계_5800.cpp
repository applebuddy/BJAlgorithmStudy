//
//  성적통계_5800.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2019/12/15.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

// MARK: 성적통계_5800

#if 0
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    int T; cin>>T;
    for(int i=1; i<=T; i++) {
        printf("Class %d\n",i);
        int N,mGap=0; cin>>N;
        vector<int> V(N,0);
        for(int i=0; i<N; i++) cin>>V[i];
        sort(V.begin(), V.end());
        for(int i=1; i<N; i++) mGap = V[i]-V[i-1] > mGap ? V[i]-V[i-1] : mGap;
        printf("Max %d, Min %d, Largest gap %d\n",V.back(),V.front(),mGap);
    }
    return 0;
}
#endif
