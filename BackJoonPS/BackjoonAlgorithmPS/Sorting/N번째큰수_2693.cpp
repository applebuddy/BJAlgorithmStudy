//
//  N번째큰수_2693.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2019/12/15.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

// MARK: N번째큰수_2693

#if 0
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    vector<int> V(10,0);
    int T; cin>>T;
    while(T--) {
        for(int i=0; i<10; i++) cin>>V[i];
        sort(V.begin(), V.end());
        printf("%d\n",V[7]);
    }
    return 0;
}
#endif
