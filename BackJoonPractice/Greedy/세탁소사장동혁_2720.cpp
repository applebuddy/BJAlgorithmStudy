//
//  세탁소사장동혁_2720.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 04/11/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 세탁소사장동혁_2720
#if 0
#include <iostream>
using namespace std;
int Coin[] = {25,10,5,1};

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    int T; cin>>T;
    while(T--) {
        int C; cin>>C;
        for(int i=0; i<4; i++) {
            printf("%d",C/Coin[i]);
            C%=Coin[i];
            if(i!=3) printf(" ");
        }
        puts("");
    }
    
    return 0;
}
#endif
