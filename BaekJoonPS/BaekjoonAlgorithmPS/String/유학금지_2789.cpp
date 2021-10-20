//
//  유학금지_2789.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 30/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 유학 금지_2789 : Basic String Algorithm Problem

#include <iostream>
#include <string>
using namespace std;

bool isCambridge(char ch) {
    string cStr = "CAMBRIDGE";
    for(int i=0; i<cStr.length(); i++) {
        if(ch==cStr[i]) return true;
    }
    return false;
}

void prohibitionOfStudyAbroad() {
    string str; cin>>str;
    string Ans="";
    for(auto s : str) if(!isCambridge(s)) Ans+=s;
    printf("%s\n",Ans.c_str());
}

//int main() {
//    ios_base::sync_with_stdio(0); cin.tie(0);
//    prohibitionOfStudyAbroad();
//    return 0;
//}
