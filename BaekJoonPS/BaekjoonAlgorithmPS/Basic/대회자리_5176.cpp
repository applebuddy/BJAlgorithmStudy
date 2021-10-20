//
//  대회자리_5176.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2019/12/15.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

// MARK: 대회자리_5176

#if 0
#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    int T; cin>>T;
    while(T--) {
        int P,M; cin>>P>>M;
        int Ans=0;
        vector<int> V(P+1,0);
        for(int i=0; i<P; i++) {
            int idx; cin>>idx;
            if(V[idx]==1) Ans++;
            else V[idx]++;
        }
        printf("%d\n",Ans);
    }
    return 0;
}
#endif
