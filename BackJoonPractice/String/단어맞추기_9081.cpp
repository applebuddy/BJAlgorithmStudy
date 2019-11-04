//
//  단어맞추기_9081.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 05/11/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 단어맞추기_9081
#if 0
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    int T; cin>>T;
    while(T--) {
        string S; cin>>S;
        string temp = S;
        
        if(!next_permutation(S.begin(), S.end())) printf("%s\n",temp.c_str());
        else printf("%s\n",S.c_str());
    }
    return 0;
}
#endif
