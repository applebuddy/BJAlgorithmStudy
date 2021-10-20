//
//  남욱이의닭장_11006.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 07/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 남욱이의 닭장_11006

#include <iostream>
using namespace std;

void namWooksChickenCage() {
    int N; cin>>N;
    while(N--) {
        int A,B; cin>>A>>B;
        int U=B*2-A;
        int T=B-U;
        printf("%d %d\n",U,T);
    }
    return;
}

//int main() {
//    ios_base :: sync_with_stdio(0); cin.tie(0);
//    namWooksChickenCage();
//    return 0;
//}
