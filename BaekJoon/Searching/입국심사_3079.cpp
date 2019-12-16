//
//  입국심사_3079.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 10/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

void theEnteringJudge() {
    int T,N; cin>>T>>N;
    vector<int> V(T,0);
    long long mx=0, left, right, mid, total, Ans;
    for(int i=0; i<T; i++) {
        cin>>V[i];
        mx = mx<V[i] ? V[i] : mx;
    }
    
    left=1;
    right=mx*N;
    Ans=right;
    
    while(left <= right) {
        total=0;
        mid=(left+right)/2;
        for(auto v: V) total+=mid/v;
        if(total < N) left = mid+1;
        else {
            if(Ans > mid) Ans=mid;
            right = mid-1;
        }
    }
    
    printf("%lld\n",Ans);
    return;
}

//int main() {
//    ios_base :: sync_with_stdio(0); cin.tie(0);
//    theEnteringJudge();
//    return 0;
//}
