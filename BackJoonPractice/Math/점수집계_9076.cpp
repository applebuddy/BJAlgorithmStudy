//
//  점수집계_9076.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2019/12/15.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

// MARK: 점수집계_9076

#if 0
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    int T; cin>>T;
    vector<int> V(5,0);
    while(T--) {
        int sum=0;
        for(int i=0; i<5; i++) {
            cin>>V[i];
            sum+=V[i];
        }
        sort(V.begin(), V.end());
        if(V[3]-V[1]>=4) printf("%s\n","KIN");
        else printf("%d\n",sum-(V.front()+V.back()));
    }
    return 0;
}
#endif
