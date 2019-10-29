//
//  좋은놈나쁜놈_4447.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 29/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 좋은놈나쁜놈_4447
#if 0
#include <iostream>
#include <string>
using namespace std;

typedef pair<int,int> Pair;

void goodBuddyBaddyGuy() {
    int T; cin>>T;
    cin.ignore();
    while(T--) {
        string S;
        Pair cp = {0,0};
        getline(cin,S,'\n');
        for(int i=0; i<S.length(); i++) {
            if(S[i]=='g' || S[i]=='G') cp.first++;
            else if(S[i]=='b' || S[i]=='B') cp.second++;
        }
        printf("%s is %s\n",S.c_str(),cp.first==cp.second ? "NEUTRAL" : cp.first>cp.second ? "GOOD" : "A BADDY");
    }
    return;
}

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    goodBuddyBaddyGuy();
    return 0;
}
#endif
