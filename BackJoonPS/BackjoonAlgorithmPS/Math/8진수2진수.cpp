//
//  8진수2진수.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 08/11/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 8진수2진수_1212
#if 0
#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    string nStr = ""; cin>>nStr;
    if(nStr=="0") return !printf("0\n");
    for(int i=0; i<nStr.length(); i++) {
        string S="";
        int temp = nStr[i]-'0';
        if(temp==0) S = "000";
        while(temp>0) {
            S = to_string(temp%2) + S;
            temp/=2;
        }
        if(i!=0) while(S.length()%3!=0) S = '0' + S;
        printf("%s",S.c_str());
    }
    
    return 0;
}
#endif
