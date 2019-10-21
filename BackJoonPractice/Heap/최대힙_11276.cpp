//
//  최대힙_11276.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 18/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 최대힙_11279
#if 0
#include <iostream>
#include <queue>
#define endl '\n'
using namespace std;

void theMaximumHeap() {
    priority_queue<long long> PQ;
    int T; cin>>T;
    while(T--) {
        long long N; cin>>N;
        if(N!=0) PQ.push(N);
        else {
            if(PQ.empty()) cout << 0 << endl;
            else {
                cout << PQ.top() << endl;
                PQ.pop();
            }
        }
    }
    return;
}

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
    theMaximumHeap();
    return 0;
}
#endif
