//
//  카드1_2161.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 27/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 카드1_2161
#if 0
#include <iostream>
#include <queue>
using namespace std;

void theCard1() {
    int N; cin>>N;
    queue<int> Q;
    for(int i=1; i<=N; i++) Q.push(i);
    while(Q.size()>1) {
        printf("%d",Q.front());
        printf(" ");
        Q.pop();
        if(Q.size()>1) {
            int temp = Q.front();
            Q.pop();
            Q.push(temp);
            
        }
        else break;
        
        
    }
    printf("%d\n",Q.front());
    return;
}

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    theCard1();
    return 0;
}
#endif
