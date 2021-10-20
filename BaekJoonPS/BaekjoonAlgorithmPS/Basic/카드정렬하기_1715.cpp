//
//  카드정렬하기_1715.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/02/06.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: 카드정렬하기 1715
// MARK: - Heap 사용 문제풀이

#if 0
#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
typedef long long ll;

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    ll N, Ans=0, Sum=0; cin>>N;
    priority_queue<ll, vector<ll>, greater<ll>> PQ;
    for(int i=0; i<N; i++) {
        int num; cin>>num;
        PQ.push(num);
    }
    
    while(PQ.size() > 1) {
        Sum = PQ.top();
        PQ.pop();
        Sum += PQ.top();
        PQ.pop();
        Ans += Sum;
        PQ.push(Sum);
    }
    printf("%lld\n",Ans);
    return 0;
}
#endif
