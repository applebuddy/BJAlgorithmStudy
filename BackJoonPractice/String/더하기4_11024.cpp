//
//  더하기4_11024.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 07/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 더하기4_11024

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

void thePlus4() {
    int T; cin>>T;
    cin.ignore();
    while(T--) {
        string S,temp="";
        int Ans=0;
        getline(cin,S,'\n');
        for(stringstream ss(S); ss>>temp;) Ans+=stoi(temp);
        printf("%d\n",Ans);
    }
    return;
}

//int main() {
//    ios_base :: sync_with_stdio(0); cin.tie(0);
//    thePlus4();
//    return 0;
//}
