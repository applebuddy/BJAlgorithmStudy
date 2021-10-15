//
//  뱀과사다리게임_10451.cpp
//  BackjoonAlgorithmPS
//
//  Created by MinKyeongTae on 2021/10/16.
//  Copyright © 2021 MungGu. All rights reserved.
//

#if 0
#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;
typedef pair<int, int> Pair;

vector<int> G(101, 0);
vector<bool> chk(101, false);
int ans = 2147483647;

int BFS(int pos, int cnt) {
    queue<Pair> Q;
    Q.push({pos, cnt});

    while(!Q.empty()) {
        int pos = Q.front().first;
        int cnt = Q.front().second;
        Q.pop();
        for(int i=1; i<=6; i++) {
            int nextPos = G[pos+i] == 0 ? pos+i : G[pos+i];
            if(chk[nextPos] || nextPos > 100) continue;
            chk[nextPos] = true;
            if(nextPos==100) return cnt+1;
            Q.push({nextPos, cnt+1});
        }
    }
    return -1;
}

int main() {
    ios_base :: sync_with_stdio(); cin.tie(0);
    int a, b; cin>>a>>b;
    
    for(int i=0; i<a+b; i++) {
        int from, to; cin>>from>>to;
        G[from] = to;
    }
    
    chk[1] = true;
    printf("%d\n", BFS(1, 0));
}
#endif
