//
//  AffineCihper_11575.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 04/11/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - AffineCihper_11575
#if 0
#include <iostream>
#include <string>
using namespace std;

int main() {
    int T; cin>>T;
    while(T--) {
        int A,B; cin>>A>>B;
        string S; cin>>S;
        for(int i=0; i<S.length(); i++) S[i] = char((A * ( S[i] - 'A') + B) % 26 + 65);
        printf("%s\n",S.c_str());
    }
    return 0;
}
#endif
