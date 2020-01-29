//
//  공유기설치_2110.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/01/29.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: 공유기 설치_2110

#if 0
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    int N,C; cin>>N>>C;
    vector<ll> V(N,0);
    for(int i=0; i<N; i++) cin>>V[i];
    sort(V.begin(), V.end());
    ll left = 1, right = V.back();
    ll Ans = right;
    while(left <= right) {
        ll mid = (left + right) / 2;
        int i=1, cnt = 1;
        ll start = V[0];
        while(i<V.size()) {
            if(V[i] - start > mid) {
                cnt++;
                start = V[i];
            }
            i++;
        }
        
        if(cnt >= C) {
            left = mid + 1;
        } else {
            Ans = Ans > mid ? mid : Ans;
            right = mid - 1;
        }
    }
    
    printf("%lld\n",Ans);
    return 0;
}
#endif
