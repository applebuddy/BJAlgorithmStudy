//
//  가장긴증가하는부분수열5_14003.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 22/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 가장 긴 증가하는 부분 수열_14003
#if 0
#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
using namespace std;

void theLongestIncreasingSubSequence() {
    int N; cin>>N;
    
    vector<int> V(N,0);
    vector<int> L(N,0);
    vector<int> Ans;
    
    for(int i=0; i<N; i++) cin>>V[i];
    for(int i=0; i<V.size(); i++) {
        int IDX = (int)(lower_bound(Ans.begin(), Ans.end(), V[i])-Ans.begin());
        if(Ans.size()==IDX) {
            Ans.push_back(V[i]);
            L[i]=(int)Ans.size();
        }
        else {
            Ans[IDX]=V[i];
            L[i]=IDX+1;
        }
    }
    
    int MAX = (int)Ans.size();
    printf("%d\n",MAX);
    int CNT=MAX;
    stack<int> STK;
    for(int i=N; i>=0; i--) {
        if(L[i]==CNT) {
            STK.push(V[i]);
            CNT--;
            if(CNT==0) break;
        }
    }
    
    while(!STK.empty()) {
        printf("%d",STK.top());
        STK.pop();
        if(!STK.empty()) printf(" ");
    }
    puts("");
    return;
}

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    theLongestIncreasingSubSequence();
    return 0;
}
#endif
