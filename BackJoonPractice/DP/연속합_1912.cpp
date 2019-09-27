//
//  연속합_1912.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 27/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 연속합 : Dynamic Algorithm Problem

#include <iostream>
#include <vector>

using namespace std;

void consecutiveSum() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    int N,Ans = -2000000000; cin >> N;
    vector<int> V(N,0);
    for(int i=0; i<N; i++) cin >> V[i];
    Ans = V[0];
    for(int i=1; i<N; i++) {
        if(V[i]+V[i-1]>0 && V[i-1]>0) V[i] += V[i-1];
        Ans = Ans<V[i] ? V[i] : Ans;
    }
    printf("%d\n",Ans);
    return;
}

//int main() {
//    consecutiveSum();
//    return 0;
//}
