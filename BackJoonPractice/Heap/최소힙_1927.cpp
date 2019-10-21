//
//  최소힙_1927.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 21/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 최소힙_1927
#if 0
#include <iostream>
#include <queue>
using namespace std;

void theMinimumHeap() {
    priority_queue<int, vector<int>, greater<int>> PQ;
    int T; cin>>T;
    while(T--) {
        int N; cin>>N;
        if(N==0) {
            if(PQ.empty()) printf("%d\n",0);
            else {
                printf("%d\n",PQ.top());
                PQ.pop();
            }
        }
        else PQ.push(N);
    }
    return;
}

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    theMinimumHeap();
    return 0;
}
#endif
