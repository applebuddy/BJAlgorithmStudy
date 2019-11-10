//
//  소수단어_2153.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 10/11/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 소수단어_2153
#if 0
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int getLowerUpperValue(char ch) {
    if(ch>='A' && ch<='Z') {
        return ch-'A'+27;
    }
    else {
        return ch-'a'+1;
    }
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    string S; cin>>S;
    vector<int> Prime(1050,false);
    for(int i=2; i*i<Prime.size(); i++) {
        if(Prime[i]==false)
        for(int j=i+i; j<Prime.size(); j+=i) {
            Prime[j]=true;
        }
    }
    int Ans=0;
    for(int i=0; i<S.length(); i++) Ans+=getLowerUpperValue(S[i]);
    if(!Prime[Ans]) printf("It is a prime word.\n");
    else printf("It is not a prime word.\n");
    return 0;
}
#endif
