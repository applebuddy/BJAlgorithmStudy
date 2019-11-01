//
//  바구니뒤집기_10811.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 02/11/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 바구니뒤집기_10811
#if 0
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void flipTheBasketProblem() {
    int N,T; cin>>N>>T;
    vector<int> V(N,0);
    for(int i=1; i<=N; i++) V[i-1]=i;
    for(int i=0; i<T; i++) {
        int from,to; cin>>from>>to;
        reverse(V.begin()+from-1,V.begin()+to);
    }
    for(int i=0; i<V.size(); i++) {
        printf("%d",V[i]);
        if(i!=V.size()-1) printf(" ");
    }
    puts("");
}

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    flipTheBasketProblem();
    return 0;
}
#endif
