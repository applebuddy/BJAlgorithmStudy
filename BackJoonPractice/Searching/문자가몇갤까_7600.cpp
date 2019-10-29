//
//  문자가몇갤까_7600.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 29/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 문자가 몇갤까_7600
#if 0
#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    string S;
    while(1) {
        getline(cin,S,'\n');
        unordered_map<char, int> UMP;
        if(S=="#") break;
        for(int i=0; i<S.length(); i++) {
            if(S[i]<97) S[i] = tolower(S[i]);
            if(S[i]-'a'>=0 && S[i]-'a'<=26) UMP[S[i]]++;
        }
        printf("%d\n",(int)UMP.size());
    }
    return 0;
}
#endif
