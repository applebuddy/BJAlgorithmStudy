//
//  감소하는수_1038.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/03/08.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: - 감소하는수
// MARK: Queue C++ 문제풀이

#if 0
#include <iostream>
#include <queue>
using namespace std;
typedef long long ll;

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    int K; cin>>K;
    queue<ll> Q;
    int Cnt = 10;
    
    for(int i=1; i<=9; i++) Q.push(i);
    if(K<=10) return !printf("%d\n",K);
    
    while(Cnt <= K && !Q.empty()) {
        ll nowNum = Q.front();
        ll target = nowNum % 10;
        Q.pop();
        ll temp = 0;
        for(int i=0; i<target; i++) {
            temp = nowNum*10 + i;
            Cnt++;
            if(Cnt == K+1) return !printf("%lld\n",temp);
            Q.push(temp);
        }
        
        if(nowNum == 9876543210 && Cnt < K) {
            return !printf("-1\n");
        }
        if(nowNum % 10 == 0) continue;
    }
    
    printf("-1\n");
    
    return 0;
}
#endif
