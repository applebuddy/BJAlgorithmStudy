//
//  거리의합_2399.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 30/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 거리의 합_2399

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

void sumOfTheDistance() {
    int T; cin>>T;
    vector<int> V(T,0);
    long long Ans=0;
    for(int i=0; i<T; i++) cin>>V[i];
    
    for(int i=0; i<T; i++) {
        for(int j=0; j<T; j++) {
            if(i==j) continue;
            Ans+=abs(V[i]-V[j]);
        }
    }
    printf("%lld\n",Ans);
    return;
}

//int main() {
//    ios_base::sync_with_stdio(0); cin.tie(0);
//    sumOfTheDistance();
//    return 0;
//}
