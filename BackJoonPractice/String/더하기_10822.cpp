//
//  더하기_10822.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 07/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

void thePlus() {
    string S,temp=""; cin>>S;
    int Ans=0;
    for(int i=0; i<(int)S.length(); i++) if(S[i]==',') S[i] = ' ';
    for(stringstream ss(S); ss>>temp;) Ans+=stoi(temp);
    printf("%d\n",Ans);
    return;
}

//int main() {
//    ios_base :: sync_with_stdio(0); cin.tie(0);
//    thePlus();
//    return 0;
//}
