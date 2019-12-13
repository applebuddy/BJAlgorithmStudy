//
//  니모를찾아서_10173.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2019/12/13.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

// MARK: 니모를 찾아서

#if 0
#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    while(1) {
        string S=""; getline(cin, S);
        if(S=="EOI") break;
        for(int i=0; i<S.length(); i++) S[i] = tolower(S[i]);
        auto idx = S.find("nemo");
        if(idx==string::npos) printf("Missing\n");
        else printf("Found\n");
    }
    return 0;
}
#endif
