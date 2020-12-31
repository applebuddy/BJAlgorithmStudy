//
//  더하기_9085.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 20/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 더하기
#if 0
#include <iostream>
using namespace std;

void thePlusCalculation() {
    int T; cin>>T;
    while(T--) {
        int N; cin>>N;
        int Ans=0;
        for(int i=0; i<N; i++) {
            int num; cin>>num;
            Ans+=num;
        }
        printf("%d\n",Ans);
    }
}

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    return 0;
}
#endif
