//
//  덱_10866.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 06/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - Deque_10866 : Deque Structure Implementation Problem

#include <iostream>
#include <deque>
using namespace std;

void theDequeImplementation() {
    deque<int> DQ;
    int T; cin>>T;
    while(T--) {
        string S; cin>>S;
        if(S=="push_back") {
            int N; cin>>N;
            DQ.push_back(N);
        } else if(S=="push_front") {
            int N; cin>>N;
            DQ.push_front(N);
        } else if(S=="front") {
            if(DQ.empty()) printf("%d\n",-1);
            else {
                printf("%d\n",DQ.front());
            }
        } else if(S=="back") {
            if(DQ.empty()) printf("%d\n",-1);
            else {
                printf("%d\n",DQ.back());
            }
        } else if(S=="size") {
            printf("%d\n",(int)DQ.size());
        } else if(S=="pop_front") {
            if(DQ.empty()) printf("%d\n",-1);
            else {
                printf("%d\n",DQ.front());
                DQ.pop_front();
            }
        } else if(S=="pop_back") {
            if(DQ.empty()) printf("%d\n",-1);
            else {
                printf("%d\n",DQ.back());
                DQ.pop_back();
            }
        } else if(S=="empty") {
            printf("%d\n",DQ.empty());
        }
    }
    return;
}

//int main() {
//    ios_base :: sync_with_stdio(0); cin.tie(0);
//    theDequeImplementation();
//    return 0;
//}
