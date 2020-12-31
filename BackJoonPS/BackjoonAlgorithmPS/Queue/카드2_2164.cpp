//
//  카드2_2164.cpp
//  Back;Practice
//
//  Created by MinKyeongTae on 27/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 카드2_2164
#if 0
#include <iostream>
#include <queue>
using namespace std;

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    int N; cin>>N;
    queue<int> Q;
    for(int i=1; i<=N; i++) Q.push(i);
    while(Q.size()>1) {
        Q.pop();
        if(Q.size()>1) {
            int temp = Q.front();
            Q.pop();
            Q.push(temp);
        }
    }
    
    printf("%d\n",Q.front());
    return 0;
}
#endif
