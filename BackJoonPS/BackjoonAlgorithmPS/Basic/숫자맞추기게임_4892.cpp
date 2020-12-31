//
//  숫자맞추기게임_4892.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 17/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 숫자 맞추기 게임_4892
#if 0
#include <iostream>
using namespace std;

void numberSolvingGame() {
    int cnt=0;
    while(1) {
        cnt++;
        int N; cin>>N;
        if(N==0) break;
        N*=3;
        if(N%2==0) {
            printf("%d. even ",cnt);
            N/=2;
        }
        else {
            printf("%d. odd ",cnt);
            N = (N+1)/2;
        }
        printf("%d\n",N/3);
    }
    return;
}

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    numberSolvingGame();
    return 0;
}
#endif
