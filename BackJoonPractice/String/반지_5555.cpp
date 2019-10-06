//
//  반지_5555.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 06/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 반지_5555

#include <iostream>
#include <string>
using namespace std;

void theLing() {
    string S; cin>>S;
    int T,Ans=0; cin>>T;
    while(T--) {
        string temp; cin>>temp;
        temp+=temp;
        if(temp.find(S)!=string::npos) Ans++;
    }
    printf("%d\n",Ans);
    return;
}

//int main() {
//    ios_base :: sync_with_stdio(0); cin.tie(0);
//    theLing();
//    return 0;
//}
