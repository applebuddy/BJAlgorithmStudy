//
//  패리티_4597.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2019/12/13.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

// MARK: 패리티_4597

#if 0
#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    while(1) {
        string S = "";
        getline(cin, S);
        if(S=="#") break;
        int cnt = 0;
        for(int i=0; i<S.length()-1; i++) {
            if(S[i] == '1') cnt++;
        }
        if(S.back()=='e') S.back() = cnt%2==0 ? '0' : '1';
        else S.back() = cnt%2==1 ? '0' : '1';
        printf("%s\n",S.c_str());
    }
    return 0;
}
#endif
