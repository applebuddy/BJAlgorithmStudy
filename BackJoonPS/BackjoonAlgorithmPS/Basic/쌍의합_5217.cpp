//
//  쌍의합_5217.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 22/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//
#if 0
#include <iostream>
using namespace std;

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    int T; cin>>T;
    while(T--) {
        int N; cin>>N;
        printf("Pairs for %d: ",N);
        int cnt=0;
        for(int i=1; i<=N/2; i++) {
            if(!(N%2==0 && i==N/2)) {
                if(cnt!=0) printf(", ");
                printf("%d %d",i,N-i);
                cnt++;
            }
        }
        puts("");
    }
    return 0;
}
#endif
