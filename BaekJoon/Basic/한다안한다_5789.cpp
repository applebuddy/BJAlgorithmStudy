//
//  한다안한다_5789.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 22/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 한다 안한다_5789
#if 0
#include <iostream>
#include <string>
using namespace std;

void doingOrNot() {
    int T; cin>>T;
    while(T--) {
        string S; cin>>S;
        if(S[S.length()/2]==S[S.length()/2-1]) printf("Do-it\n");
        else printf("Do-it-Not\n");
    }
    return;
}

int main() {
    doingOrNot();
    return 0;
}
#endif
