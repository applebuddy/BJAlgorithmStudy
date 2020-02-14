//
//  ROT13_11655.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/02/02.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: ROT13 11655

// MARK: - Char ASCII 활용 문제풀이
#if 0
#include <iostream>
#include <string>
using namespace std;

int main() {
    string S;
    getline(cin, S);
    for(int i=0; i<S.length(); i++) {
        if(S[i]>=97 && S[i]<=122) {
            int code = (int)S[i];
            if(code+13>122) S[i]=(char)(code-13);
            else S[i]+=13;
        }
        else if(S[i]>=65 && S[i]<=90) {
            S[i]+=13;
            if(S[i]>90) S[i]-=26;
        }
    }
    printf("%s\n",S.c_str());
    return 0;
}
#endif
