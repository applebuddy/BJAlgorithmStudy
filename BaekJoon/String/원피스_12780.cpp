//
//  원피스_12780.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 10/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 원피스_12780

#include <iostream>
#include <string>
using namespace std;

void theOnePiece() {
    string S="",str="";
    int Ans=0;;
    cin>>S;
    cin>>str;
    while(1) {
        auto cur = S.find(str);
        if(cur != string::npos) Ans++;
        else break;
        S = S.substr(cur+1);
    }
    printf("%d\n",Ans);
    return;
}

//int main() {
//    ios_base :: sync_with_stdio(0); cin.tie(0);
//    theOnePiece();
//    return 0;
//}
