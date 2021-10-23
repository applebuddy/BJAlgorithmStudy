//
//  숨바꼭질3_13549.cpp
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
int ans;

struct Info {
    int x;
    int time;
    
    Info(int x, int time) {
        this->x = x;
        this->time = time;
    }
};

void BFS() {
    queue<Info> Q;
    vector<int> chk(100001, 100001);
    Q.push(Info(N, 0));
    while(!Q.empty()) {
        Info node = Q.front();
        int x = node.x;
        int time = node.time;
        Q.pop();
    
        if(x==K) {
            ans = ans > time ? time : ans;
            continue;
        }
        
        if(ans > time && x*2<=100000 && chk[x*2]>time) {
            chk[x*2]=time;
            Q.push(Info(x*2, time));
        }

        if(ans > time+1 && x-1>=0 && chk[x-1]>time+1) {
            chk[x-1]=time+1;
            Q.push(Info(x-1, time+1));
        }
        
        if(ans > time+1 && x+1<=100000 && chk[x+1]>time+1) {
            chk[x+1]=time+1;
            Q.push(Info(x+1, time+1));
        }
    }
    return;
}

int main() {
    ios_base :: sync_with_stdio(); cin.tie(0);
    cin>>N>>K;
    ans=abs(K-N);
    BFS();
    printf("%d\n", ans);
}
#endif
