//
//  프린터큐_1966.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 15/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 프린터큐_1966
#if 0
#include <queue>
#include <iostream>
using namespace std;
typedef pair<int,int> Pair;

void thePrinterQueue() {
    int T; cin>>T;
    while(T--) {
        int N,I,Ans=0; cin>>N>>I;
        priority_queue<int> PQ;
        queue<Pair> printerQ;
        for(int i=0; i<N; i++) {
            int num; cin>>num;
            PQ.push(num);
            printerQ.push({i,num});
        }
        
        int CNT = 0;
        while(!printerQ.empty()) {
            Pair P = printerQ.front();
            if(P.second == PQ.top()) {
                CNT++;
                if(P.first==I) {
                    Ans = CNT;
                    break;
                }
                printerQ.pop();
                PQ.pop();
            } else {
                printerQ.pop();
                printerQ.push(P);
            }
        }
        printf("%d\n",Ans);
    }
    return;
}

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    thePrinterQueue();
    return 0;
}
#endif
