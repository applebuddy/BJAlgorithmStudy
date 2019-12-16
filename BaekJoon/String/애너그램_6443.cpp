//
//  애너그램_6443.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2019/12/17.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

// MARK: 애너그램_6443

#if 0
#include <iostream>
#include <string>
#include <set>
#include <algorithm>
using namespace std;

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    int T; cin>>T;
    while(T--) {
        string S; cin>>S;
        set<string> ST;
        sort(S.begin(), S.end());
        
        do {
            int stSize = (int)ST.size();
            ST.insert(S);
            if((int)ST.size() != (int)stSize) printf("%s\n",S.c_str());
        }while(next_permutation(S.begin(), S.end()));
    }
    return 0;
}
#endif
