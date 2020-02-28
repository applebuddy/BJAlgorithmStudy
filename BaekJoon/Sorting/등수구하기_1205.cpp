//
//  등수구하기_1205.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/02/04.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: - 등수구하기 1205
// MARK: C++ 문제풀이

#if 0
#include <iostream>
#include <vector>
#include <queue>
using namespace std;
typedef long long ll;
int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    ll N, S, P; cin>>N>>S>>P;
    priority_queue<ll, vector<ll>, greater<ll>> PQ;
    for(int i=0; i<N; i++) {
        int num; cin>>num;
        if(PQ.size()>=P){
            if(PQ.top() >= num) {
                continue;
            } else {
                PQ.pop();
                PQ.push(num);
            }
        } else {
            PQ.push(num);
        }
    }
    
    if(PQ.size()==P && PQ.top()>=S) return !printf("%d\n",-1);
    
    while(!PQ.empty() && PQ.top() <= S) {
        PQ.pop();
    }
    
    int Ans = (int)PQ.size();
    printf("%d\n",Ans == 0 ? 1 : Ans+1);
}
#endif
