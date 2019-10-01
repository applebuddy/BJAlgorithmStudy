//
//  8진수_2998.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 01/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

void octalNumber() {
    string str; cin>>str;
    string Ans="";
    
    for(; (int)str.length()%3!=0;) str = '0' + str;
    for(int i=0; i<str.length(); i+=3) {
        string comp = str.substr(i,3);
        int num=0;
        if(comp=="000") num=0;
        else if(comp=="001") num=1;
        else if(comp=="010") num=2;
        else if(comp=="011") num=3;
        else if(comp=="100") num=4;
        else if(comp=="101") num=5;
        else if(comp=="110") num=6;
        else if(comp=="111") num=7;
        Ans += num==0 ? "0" : to_string(num);
    }
    printf("%s\n", Ans.c_str());
    return;
}

//int main() {
//    ios_base :: sync_with_stdio(0); cin.tie(0);
//    octalNumber();
//    return 0;
//}
