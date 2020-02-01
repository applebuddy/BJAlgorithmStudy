//
//  라운드로빈스케줄러_12016.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/01/31.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: - 시간초과 답안..
#if 0
#include <iostream>
#include <vector>
#include <queue>
using namespace std;
typedef pair<int,int> Pair;

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    int N; cin>>N;
    vector<int> Ans(N,0);
    queue<Pair> Q;
    for(int i=0; i<N; i++) {
        int task; cin>>task;
        Q.push({i,task});
    }

    int time = 1;
    while(!Q.empty()) {
        Pair queue = Q.front();
        queue.second--;
        if(queue.second==0) {
            Ans[queue.first]=time;
        }
        else {
            Q.push(queue);
        }
        Q.pop();
        time++;
    }
    
    for(int i=0; i<N; i++) printf("%d\n",Ans[i]);
    return 0;
}
#endif
