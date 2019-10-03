//
//  HexCode_11784.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 03/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - HexCode_11784

#include <string>
#include <string.h>
#include <iostream>
#include <stdlib.h>
using namespace std;

/// MARK: - string, strtol() 사용 버전)
//void convertHexCode() {
//    string S;
//    int cnt=0;
//    while(cnt<=1000) {
//        cin>>S;
//        cnt+=S.length();
//        string Ans="";
//        while(S.length()!=0) {
//            string temp = "0x" + S.substr(0,2);
//            long num = strtol(temp.c_str(),NULL,16);
//            Ans += char(num);
//            S = S.substr(2);
//        }
//        printf("%s\n",Ans.c_str());
//    }
//    return;
//}

/// MARK: - char 문자열 + hex to dec 커스텀 변환함수 사용 버전
int convertHexToDec(const char &ch) {
    if(ch-'0' >= 0 && ch-'0' <= 9) return ch-'0';
    else return ch-'A'+10;
}

char convertDecToChar(const char &a, const char &b) {
    return a * 16 + b;
}

void convertHexCode2() {
    char S[251];
    while(scanf("%s",S)!=EOF) {
        int len = (int)strlen(S);
        string Ans="";
        for(int i=0; i<len; i+=2) {
            printf("%c",convertDecToChar(convertHexToDec(S[i]), convertHexToDec(S[i+1])));
        }
        printf("%s\n",Ans.c_str());
    }
    return;
}

//int main() {
//    convertHexCode2();
//    return 0;
//}
