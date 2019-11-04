//
//  좋은자동차번호판_1871.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 04/11/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 좋은자동차번호판_1871
#if 0
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    int T; cin>>T;
    while(T--) {
        string S; cin>>S;
        string Astr = S.substr(0,3);
        int A=0;
        for(int i=0; i<3; i++) {
            A += (Astr[i]-'A')*pow(26,3-i-1);
        }
        int B = stoi(S.substr(4,4));
        printf("%s\n",abs(A-B) <= 100 ? "nice" : "not nice");
    }
    return 0;
}
#endif
