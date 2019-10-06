//
//  8진수,10진수,16진수_11816.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 06/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

void octalAndDecimalAnsHexaDecimal() {
    string S; cin>>S;
    long Ans=0;
    if(S[0]=='0') {
        if(S[1]=='x') Ans = strtol(S.c_str(), NULL, 16);
        else Ans = strtol(S.c_str(), NULL, 8);
    } else Ans=stoi(S);
    printf("%ld\n",Ans);
    return;
}

//int main() {
//    ios_base :: sync_with_stdio(0); cin.tie(0);
//    octalAndDecimalAnsHexaDecimal();
//    return 0;
//}
