//
//  모음의개수_10987.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 30/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 모음의 개수_10987 : String Basic Problem

#include <string>
#include <iostream>
using namespace std;

void amountOfVowel() {
    string str; cin>>str;
    int Ans=0;
    for(int i=0; i<str.length(); i++) {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u') Ans++;
    }
    printf("%d\n",Ans);
    return;
}

//int main() {
//    ios_base::sync_with_stdio(0); cin.tie(0);
//    amountOfVowel();
//    return 0;
//}
