//
//  도미노_2921.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 13/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
// 1+2(1~2) / 2+3+4 / 3+4+5+6

/// MARK: - 도미노_2921
#if 0
#include <iostream>
#include <vector>
using namespace std;

void theDomino() {
    int N; cin>>N;
    vector<int> SV((N+1)*2,0);
    int Ans=0;
    for(int i=1; i<=N*2; i++) SV[i] = SV[i-1]+i;
    for(int i=1; i<=N; i++) Ans += (SV[i+i]-SV[i-1]);
    printf("%d\n",Ans);
    return;
}

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    theDomino();
    return 0;
}
#endif
