//
//  조세퍼스문제0_11866.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 30/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 조세퍼스문제0_11866
#if 0
#include <iostream>
#include <queue>
using namespace std;

void jhoesepusProblem() {
    int N,K; cin>>N>>K;
    queue<int> Q;
    for(int i=1; i<=N; i++) Q.push(i);
    printf("<");
    while(!Q.empty()) {
        for(int i=0; i<K-1; i++) {
            if(Q.size()==1) break;
            int temp = Q.front();
            Q.pop();
            Q.push(temp);
        }
        printf("%d",Q.front());
        Q.pop();
        if(!Q.empty()) printf(", ");
    }
    printf(">\n");
    return;
}

int main() {
    jhoesepusProblem();
    return 0;
}
#endif
