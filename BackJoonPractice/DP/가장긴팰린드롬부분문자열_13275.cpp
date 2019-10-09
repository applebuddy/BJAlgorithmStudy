//
//  가장긴팰린드롬부분문자열_13275.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 09/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

#include <iostream>
#include <vector>
#include <string>
#include <cmath>
using namespace std;

vector<int> PC(200003,0);

void manachersAlgorithm(string S) {
    int r=0,p=0;
    for(int i=0; i<(int)S.length(); i++) {
        if(i<=r) PC[i]=min(PC[2*p-i],r-i);
        else PC[i]=0;
        while(i-PC[i]-1>=0 && i+PC[i]+1<(int)S.length() && S[i-PC[i]-1]==S[i+PC[i]+1]) PC[i]++;
        if(r<i+PC[i]) {
            r=i+PC[i];
            p=i;
        }
    }
    return;
}

void theLongestPelindrom() {
    string str; cin>>str;
    string S="";
    
    for(int i=0; i<(int)str.length(); i++) {
        S+='@';
        S+=str[i];
    }
    S+='@';
    
    int Ans=0;
    manachersAlgorithm(S);
    for(int i=0; i<(int)S.length(); i++) Ans=Ans<PC[i] ? PC[i] : Ans;
    printf("%d\n",Ans);
    return;
}

//int main() {
//    ios_base :: sync_with_stdio(0); cin.tie(0);
//    theLongestPelindrom();
//    return 0;
//}
