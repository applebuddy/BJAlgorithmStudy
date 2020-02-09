//
//  등수구하기_1205.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/02/04.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

#if 0
#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
using namespace std;
typedef long long ll;
int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    ll N, S, P; cin>>N>>S>>P;
    priority_queue<ll, vector<ll>, greater<ll>> PQ;
    PQ.push(S);
    for(int i=0; i<N; i++) {
        int num; cin>>num;
        if(PQ.size()>=P){
            if(PQ.top() >= num) {
                continue;
            } else {
                PQ.push(num);
                PQ.pop();
            }
        } else {
            PQ.push(num);
        }
    }
    
    if(PQ.size()>=P && PQ.top() >= S) printf("%d\n",-1);
    else {
        stack<ll> STK;
        while(!PQ.empty()) {
            STK.push(PQ.top());
            PQ.pop();
        }
        
        ll cnt=0, flag = 0;
        while(!STK.empty()) {
            if(flag != STK.top()) {
                cnt++;
                flag = STK.top();
            }
            if(STK.top()==S) break;
            STK.pop();
        }
        printf("%lld\n",cnt);
    }
    return 0;
}
#endif
