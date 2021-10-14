//
//  카드합체놀이_15903.cpp
//  BackjoonAlgorithmPS
//
//  Created by MinKyeongTae on 2021/10/15.
//  Copyright © 2021 MungGu. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>
using namespace std;
typedef long long ll;

class Compare {
public:
    template<class T = ll>
    bool operator () (T &a, T &b) {
        return a > b;
    }
};

void boj15903() {
    priority_queue<ll, vector<ll>, Compare> PQ;
    int n, m; cin>>n>>m;
    for(int i=0; i<n; i++) {
        int num; cin>>num;
        PQ.push(num);
    }

    while(m--) {
        ll first = PQ.top();
        PQ.pop();
        ll second = PQ.top();
        PQ.pop();
        ll sum = first + second;
        PQ.push(sum);
        PQ.push(sum);
    }
    
    ll ans = 0;
    while(!PQ.empty()) {
        ans += PQ.top();
        PQ.pop();
    }
    
    printf("%lld\n", ans);
}
