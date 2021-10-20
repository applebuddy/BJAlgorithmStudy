//
//  첫글자를대문자로_4458.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/02/02.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: 첫 글자를 대문자로 4458
// MARK: - 문자열 ASCII 활용 문제풀이
#if 0
#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    int T; cin>>T;
    cin.ignore();
    string S;
    while(T--) {
        getline(cin, S, '\n');
        if(S[0] >= 97) S[0]=S[0]-32;
        printf("%s\n",S.c_str());
    }
    return 0;
}
#endif
