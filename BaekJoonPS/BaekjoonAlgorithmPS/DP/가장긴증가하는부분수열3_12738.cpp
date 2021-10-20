//
//  가장긴증가하는부분수열3_12738.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 22/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 가장 긴 증가하는 부분수열3_12738
#if 0
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void theLongestIncreasingSubSequence() {
    int N; cin>>N;
    vector<int> V(N,0);
    for(int i=0; i<N; i++) cin>>V[i];
    vector<int> Ans;
    for(int i=0; i<(int)V.size(); i++) {
        int IDX = (int)(lower_bound(Ans.begin(), Ans.end(), V[i])-Ans.begin());
        if(IDX==(int)Ans.size()) Ans.push_back(V[i]);
        else Ans[IDX]=V[i];
    }
    printf("%d\n",(int)Ans.size());
    return;
}

int main() {
    theLongestIncreasingSubSequence();
    return 0;
}
#endif
