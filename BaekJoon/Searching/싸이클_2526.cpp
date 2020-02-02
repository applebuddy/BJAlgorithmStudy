//
//  싸이클_2526.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/02/03.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: 싸이클
// MARK: - Map 사용 문제풀이
#if 0
#include <iostream>
#include <unordered_map>
using namespace std;
typedef long long ll;
unordered_map<ll,ll> MP;
int Ans=0;

int main() {
    ll N,P; cin>>N>>P;
    ll num = N, cnt=0;
    while(MP[num]<2) {
        MP[num]++;
        num *= N;
        num %= P;
        cnt++;
        if(MP[num]>=2) break;
    }
    
    for(auto m: MP) if(m.second>=2) Ans++;
    printf("%d\n",Ans);
    return 0;
}
#endif
