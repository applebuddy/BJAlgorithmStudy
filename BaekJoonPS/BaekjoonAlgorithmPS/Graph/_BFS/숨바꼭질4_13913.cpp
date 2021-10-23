//
//  숨바꼭질4_13913.cpp
//  BaekjoonAlgorithmPS
//
//  Created by MinKyeongTae on 2021/10/23.
//  Copyright © 2021 MungGu. All rights reserved.
//

#if 0
#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;
vector<int> G;
int N, K;
int ans=100001;
vector<int> ansRoute;

struct Info {
    int x;
    int time;
    vector<int> route;
    
    Info(int x, int time, vector<int> route) {
        this->x = x;
        this->time = time;
        this->route = route;
    }
};

void BFS() {
    queue<Info> Q;
    vector<bool> chk(100001, false);
    Q.push(Info(N, 0, {N}));
    while(!Q.empty()) {
        Info node = Q.front();
        int x = node.x;
        int time = node.time;
        vector<int> route = node.route;
        Q.pop();
        if(x > K && time+x-K >= ans) continue;
        
        if (x==K) {
            ans = time;
            ansRoute = route;
            continue;
        }
        
        if(x+1<=100000 && chk[x+1]==false && ans > time+1) {
            chk[x+1]=true;
            vector<int> nextRoute = route;
            nextRoute.push_back(x+1);
            Q.push(Info(x+1, time+1, nextRoute));
        }
        
        if(x-1>=0 && chk[x-1]==false && ans > time+1) {
            chk[x-1]=true;
            vector<int> nextRoute = route;
            nextRoute.push_back(x-1);
            Q.push(Info(x-1, time+1, nextRoute));
        }
        
        if(x*2<=100000 && chk[x*2]==false && ans > time+1) {
            chk[x*2]=true;
            vector<int> nextRoute = route;
            nextRoute.push_back(x*2);
            Q.push(Info(x*2, time+1, nextRoute));
        }
    }
    return;
}

int main() {
    ios_base :: sync_with_stdio(); cin.tie(0);
    cin>>N>>K;
    ans = abs(N-K);
    if(N<=K) for(int i=N; i<=K; i++) ansRoute.push_back(i);
    else for(int i=N; i>=K; i--) ansRoute.push_back(i);
    BFS();
    printf("%d\n", ans);
    for(int i=0; i<ansRoute.size(); i++) printf("%d ", ansRoute[i]);
}
#endif
