//
//  가장긴감소하는부분수열_11722.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2019/12/13.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

// MARK: - 가장 긴 감소하는 부분수열_11722

#if 0
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    int N; cin>>N;
    vector<int> V(N,0);
    vector<int> Ans;
    vector<int>::iterator iter = Ans.begin();
    for(int i=0; i<N; i++) cin>>V[i];
    reverse(V.begin(), V.end());
    for(int i=0; i<N; i++) {
        iter = lower_bound(Ans.begin(), Ans.end(), V[i]);
        if(iter == Ans.end()) Ans.push_back(V[i]);
        else Ans[iter-Ans.begin()] = V[i];
    }
    
    printf("%d\n",(int)Ans.size());
    return 0;
}
#endif
