//
//  절댓값힙_11286.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 21/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 절댓값 힙_11286
#if 0
#include <iostream>
#include <queue>
#include <cmath>
using namespace std;

class Compare {
public:
    template <class T = vector<int>>
    bool operator() (T &a, T &b) const {
        if(abs(a) < abs(b)) return false;
        else if(abs(a) == abs(b)) {
            return a > b;
        }
        return true;
    }
};

void theAbsoluteValueHeap() {
    priority_queue<int, vector<int>, Compare> PQ;
    int T; cin>>T;
    while(T--) {
        int N; cin>>N;
        if(N==0) {
            if(PQ.empty()) printf("%d\n",0);
            else {
                printf("%d\n",PQ.top());
                PQ.pop();
            }
        } else PQ.push(N);
    }
    return;
}
    
int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    theAbsoluteValueHeap();
    return 0;
}
#endif
