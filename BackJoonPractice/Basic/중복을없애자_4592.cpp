//
//  중복을없애자_4592.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 21/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 중복을 없애자_4592
#if 0
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void removeTheDuplicate() {
    while(1) {
        int N; cin>>N;
        vector<int> V(N,0);
        if(N==0) break;
        for(int i=0; i<N; i++) cin>>V[i];
        V.erase(unique(V.begin(), V.end()),V.end());
        for(auto v: V) printf("%d ",v);
        printf("$\n");
    }
    return;
}

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    removeTheDuplicate();
    return 0;
}
#endif
