//
//  줄세우기_2605.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 13/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 줄세우기_2605
#if 0
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void theLining() {
    int N; cin>>N;
    vector<int> Order(N,0);
    for(int i=0; i<N; i++) cin>>Order[i];
    vector<int> V;
    V.push_back(1);
    for(int i=1; i<N; i++) V.insert(V.begin()+Order[i],i+1);
    reverse(V.begin(), V.end());
    for(auto v: V) printf("%d ",v);
    printf("\n");
    return;
}
int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    theLining();
    return 0;
}
#endif
