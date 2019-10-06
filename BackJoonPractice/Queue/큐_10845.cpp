//
//  큐_10845.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 06/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 큐_10845 : Queue Basic Implementation Problem
#include <iostream>
#include <queue>
#include <string>
using namespace std;

void theQueueOperation() {
    queue<int> Q;
    int T; cin>>T;
    while(T--) {
        string S; cin>>S;
        if(S=="push") {
            int N; cin>>N;
            Q.push(N);
        } else if(S=="front") {
            if(Q.empty()) printf("%d\n",-1);
            else printf("%d\n",(int)Q.front());
        } else if(S=="back") {
            if(Q.empty()) printf("%d\n",-1);
            else printf("%d\n",(int)Q.back());
        } else if(S=="size") {
            printf("%d\n",(int)Q.size());
        } else if(S=="empty") {
            printf("%d\n",(int)Q.empty());
        } else if(S=="pop") {
            if(Q.empty()) printf("%d\n",-1);
            else {
                printf("%d\n",(int)Q.front());
                Q.pop();
            }
        }
    }
    return;
}

//int main() {
//    ios_base :: sync_with_stdio(0); cin.tie(0);
//    theQueueOperation();
//    return 0;
//}
