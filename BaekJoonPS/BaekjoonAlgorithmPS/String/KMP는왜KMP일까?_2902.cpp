//
//  KMP는왜KMP일까?_2902.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 03/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - KMP는 왜 KMP일까?

#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

void whyIsThatNamedKMP() {
    string S=""; cin>>S;
    string Ans="";
    Ans+=S[0];
    int prevCur=0;
    while(1) {
        auto cur = S.find('-');
        if(cur==string::npos) break;
        else {
            S = S.substr(cur+1);
            Ans+=S[0];
        }
        prevCur = (int)cur;
    }
    printf("%s\n",Ans.c_str());
    return;
}

//int main() {
//    ios_base :: sync_with_stdio(0); cin.tie(0);
//    whyIsThatNamedKMP();
//    return 0;
//}
