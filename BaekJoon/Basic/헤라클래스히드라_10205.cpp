//
//  헤라클래스히드라_10205.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 29/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 헤라클레스와히드라_10205
#if 0
#include <iostream>
#include <string>
using namespace std;

void heraclassWithHydra() {
    int T; cin>>T;
    for(int i=0; i<T; i++ ) {
        int neck; cin>>neck;
        string S; cin>>S;
        int cnt=0;
        for(int i=0; i<S.length(); i++) {
            if(S[i]=='c') cnt++;
            else if(S[i]=='b') cnt--;
        }
        printf("Data S et %d:\n%d\n",i+1,neck+cnt);
        puts("");
    }
    return;
}

int main() {
    heraclassWithHydra();
    return 0;
}
#endif
