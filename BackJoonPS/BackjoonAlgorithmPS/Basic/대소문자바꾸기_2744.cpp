//
//  대소문자바꾸기_2744.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 03/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 대소문자바꾸기_2744

#include <iostream>
#include <string>
using namespace std;

void replaceLowerUpperCaseAlphabet() {
    string S; cin>>S;
    for(int i=0; i<S.length(); i++) S[i] = S[i]<97 ? tolower(S[i]) : toupper(S[i]);
    printf("%s\n",S.c_str());
    return;
}

//int main() {
//    ios_base :: sync_with_stdio(0); cin.tie(0);
//    replaceLowerUpperCaseAlphabet();
//    return 0;
//}
