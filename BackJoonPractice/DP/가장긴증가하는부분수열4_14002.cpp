//
//  가장긴증가하는부분수열4_14002.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 22/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 가장 긴 증가하는 부분수열4_14002
#if 0
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> V(1001,0);
vector<int> L(1001,0);
vector<int> P(1001,-1);

void recursiveCheck(int node) {
    if(node==-1) return;
    int newNode = P[node];
    recursiveCheck(newNode);
    printf("%d ",V[node]);
}

int main() {
    int N; cin>>N;
    
    for(int i=0; i<N; i++) cin>>V[i];
    for(int i=0; i<N; i++) {
        L[i]=1;
        for(int j=0; j<i; j++) {
            if(V[i]>V[j] && L[i]<L[j]+1) {
                L[i] = L[j]+1;
                P[i] = j;
            }
        }
    }
    
    int MAX = -1;
    for(int i=0; i<N; i++) if(MAX < L[i]) MAX=L[i];
    printf("%d\n",MAX);
    for(int i=0; i<N; i++) {
        if(L[i]==MAX) {
            recursiveCheck(P[i]);
            printf("%d\n",V[i]);
            break;
        }
    }
    return 0;
}
#endif
