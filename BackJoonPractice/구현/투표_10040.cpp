//
//  투표_10040.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 06/11/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 투표_10040
#if 0
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int N,M; cin>>N>>M;
    priority_queue<int> PQ;
    int Ans=0;
    int MAX=0;
    vector<int> V(N,0);
    for(int i=0; i<N; i++) cin>>V[i];
    for(int i=0; i<M; i++) {
        int n; cin>>n;
        PQ.push(n);
    }
    
    for(int i=0; i<N; i++) {
        int cnt=0;
        while(1) {
            if(!PQ.empty() && PQ.top()>=V[i]) {
                cnt++;
                PQ.pop();
            } else break;
            
            if(MAX<cnt) {
                MAX=cnt;
                Ans=i+1;
            }
            if(PQ.empty()) break;
        }
    }
    
    printf("%d\n",Ans);
    return 0;
}
#endif
