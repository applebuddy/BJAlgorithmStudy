//
//  더하기3_11023.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 07/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 더하기3_11023

#include <iostream>
#include <sstream>
#include <string>
using namespace std;

void thePlus3() {
    string S,temp="";
    int Ans=0;
    getline(cin,S,'\n');
    for(stringstream ss(S); ss>>temp;) Ans+=stoi(temp);
    printf("%d\n",Ans);
    return;
}

//int main() {
//    ios_base :: sync_with_stdio(0); cin.tie(0);
//    thePlus3();
//    return 0;
//}
