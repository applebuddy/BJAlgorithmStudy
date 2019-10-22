//
//  가장긴감소하는부분수열_11722.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 22/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 가장긴감소하는부분수열_11722
#if 0
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void theLongestDecreasingSubSequence() {
    int T; cin>>T;
    vector<int> V(T,0);
    for(int i=0; i<T; i++) cin>>V[i];
    reverse(V.begin(), V.end());
    vector<int> Ans;
    for(int i=0; i<V.size(); i++) {
        int IDX = (int)(lower_bound(Ans.begin(), Ans.end(), V[i])-Ans.begin());
        if(IDX==Ans.size()) Ans.push_back(V[i]);
        else Ans[IDX]=V[i];
    }
    printf("%d\n",(int)Ans.size());
    return;
}

int main() {
    theLongestDecreasingSubSequence();
    return 0;
}
#endif
