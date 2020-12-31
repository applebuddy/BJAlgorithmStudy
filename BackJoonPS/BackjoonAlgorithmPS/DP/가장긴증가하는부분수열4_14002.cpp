//
//  가장긴증가하는부분수열4_14002.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 22/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: 가장 긴 증가하는 부분수열4_14002

// MARK: - 살짝 보완 버전 통과 답안 '19. 12. 12.

#if 0
#include <vector>
#include <stack>
#include <iostream>
using namespace std;

vector<int> V(1001,0);
vector<int> DP(1001,0);
vector<int> RV(1001,-1);

void DFS(int node) {
    if(node == -1) return;
    DFS(RV[node]);
    printf("%d ", V[node]);
    return;
}

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    int N; cin>>N;
    int Ans = -1, lgtIdx = 0;
    for(int i=0; i<N; i++) cin>>V[i];

    for(int i=0; i<N; i++) {
        DP[i] = 1;
        for(int j=0; j<i; j++) {
            if(V[j] < V[i] && DP[i] < DP[j]+1) {
                DP[i] = DP[j]+1;
                RV[i] = j;
            }
        }
        if(Ans < DP[i]) {
            Ans = DP[i];
            lgtIdx = i;
        }
    }

    printf("%d\n",Ans);
    DFS(RV[lgtIdx]);
    printf("%d\n", V[lgtIdx]);
    return 0;
}
#endif

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
