//
//  2진수뒤집기_11179.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 03/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 2진수 뒤집기_11179

#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

string convertToBinary(int n) {
    string binary="";
    while(n>0) {
        binary=to_string(n%2)+binary;
        n/=2;
    }
    return binary;
}

int convertToDecimal(const string &binary) {
    int decimal=0;
    for(int i=0; i<binary.length(); i++) {
        if(binary[i]-'0'==1) decimal+=pow(2,binary.length()-1-i);
    }
    return decimal;
}

void flipTheBinaryNumber() {
    int N; cin>>N;
    string S = convertToBinary(N);
    reverse(S.begin(),S.end());
    int Ans = convertToDecimal(S);
    printf("%d\n",Ans);
    return;
}

//int main() {
//    ios_base :: sync_with_stdio(0); cin.tie(0);
//    flipTheBinaryNumber();
//    return 0;
//}
