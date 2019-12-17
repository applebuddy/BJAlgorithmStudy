//
//  이중우선순위큐_7662.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2019/12/17.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

// MARK: 이중우선순위큐_7662

#if 0
#include <iostream>
#include <queue>
#include <map>
using namespace std;

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    int T; cin>>T;
    
    while(T--) {
        int N; cin>>N;
        priority_queue<int> maxPQ;
        priority_queue<int, vector<int>, greater<int>> minPQ;
        map<int,int> MP;
        while(N--) {
            string S;
            int flag;
            cin>>S>>flag;
            if(S=="I") {
                MP[flag]++;
                minPQ.push(flag);
                maxPQ.push(flag);
            } else {
                
                if(flag==1 && !maxPQ.empty()) {
                    MP[maxPQ.top()]--;
                    maxPQ.pop();
                }
                
                if(flag==-1 && !minPQ.empty()) {
                    MP[minPQ.top()]--;
                    minPQ.pop();
                }
            }
            
            while(!minPQ.empty()) {
                if(MP[minPQ.top()]==0) minPQ.pop();
                else break;
            }
            
            while(!maxPQ.empty()) {
                if(MP[maxPQ.top()]==0) maxPQ.pop();
                else break;
            }
        }
        
        if(maxPQ.empty()) printf("EMPTY\n");
        else printf("%d %d\n",maxPQ.top(), minPQ.top());
    }
    
    return 0;
}

#endif
