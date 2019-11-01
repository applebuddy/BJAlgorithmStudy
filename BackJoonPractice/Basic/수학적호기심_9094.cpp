//
//  수학적호기심_9094.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 01/11/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 수학적호기심_9094
#if 0
#include <iostream>
using namespace std;

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    int T; cin>>T;
    while(T--) {
        int N,M; cin>>N>>M;
        int Ans=0;
        for(int a=1; a<N; a++) {
            for(int b=a+1; b<N; b++) {
                if((a*a+b*b+M)%(a*b)==0) Ans++;
            }
        }
        printf("%d\n",Ans);
    }
    return 0;
}
#endif
