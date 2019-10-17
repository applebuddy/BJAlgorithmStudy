//
//  01타일_1904.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 18/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 01타일
#if 0
#include <iostream>
#include <string.h>
using namespace std;

int *C;
int TDP(int N, int C[]) {
    if(N==1) return 1;
    if(N==2) return 2;
    if(C[N]>0) return C[N];
    return C[N] = (TDP(N-1,C) + TDP(N-2,C))%15746;
}

void theZeroOneTile() {
    int N; cin>>N;
    C = new int[N+1];
    int Ans = TDP(N,C)%15746;
    printf("%d\n",Ans);
    return;
}

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    theZeroOneTile();
    return 0;
}
#endif
