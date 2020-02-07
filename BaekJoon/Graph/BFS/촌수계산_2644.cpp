//
//  촌수계산_2644.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/02/07.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: 촌수계산 2644
// MARK: - BFS 문제풀이

#if 0
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<int> G[101];
vector<int> C(101,0);
int Ans = -1;

void BFS(const int &node, const int &dest) {
    queue<int> Q;
    Q.push(node);
    while(!Q.empty()) {
        int node = Q.front();
        Q.pop();
        for(int i=0; i<G[node].size(); i++) {
            int nextNode = G[node][i];
            if(C[nextNode]!=0) continue;
            C[nextNode] = C[node] + 1;
            if(nextNode == dest) {
                Ans = C[nextNode];
                break;
            }
            Q.push(nextNode);
        }
        if(Ans>0) break;
    }
}

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    int N; cin>>N;
    int A,B; cin>>A>>B;
    int T; cin>>T;
    for(int i=0; i<T; i++) {
        int a,b; cin>>a>>b;
        G[a].push_back(b);
        G[b].push_back(a);
    }
    
    BFS(A,B);
    printf("%d\n",Ans);
    return 0;
}
#endif
