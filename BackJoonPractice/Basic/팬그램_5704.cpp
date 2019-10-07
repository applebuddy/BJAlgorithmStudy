//
//  팬그램_5704.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 07/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 팬그램_5704

#include <iostream>
#include <string>
#include <map>
using namespace std;

void panGram() {
    while(1) {
        string S;
        map<char,int> MP;
        getline(cin,S,'\n');
        if(S.front()=='*') break;
        for(int i=0; i<S.length(); i++) MP[S[i]]++;
        
        bool flag=true;
        for(int i=97; i<=122; i++) {
            if(MP[char(i)]==0) {
                flag=false;
                break;
            }
        }
        printf(flag ? "Y\n" : "N\n");
    }
    return;
}

//int main() {
//    ios_base :: sync_with_stdio(0); cin.tie(0);
//    panGram();
//    return 0;
//}
