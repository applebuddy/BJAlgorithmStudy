//
//  팰린드롬_10174.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 06/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 팰린드롭_10174

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void thePelindrop() {
    int T; cin>>T;
    cin.ignore();
    while(T--) {
        string S="";
        getline(cin,S,'\n');
        
        for(int i=0; i<(int)S.length(); i++) S[i] = tolower(S[i]);
        string compStr=S;
        reverse(S.begin(),S.end());
        if(S==compStr) printf("Yes\n");
        else printf("No\n");
    }
    return;
}

//int main() {
//    ios_base :: sync_with_stdio(0); cin.tie(0);
//    thePelindrop();
//    return 0;
//}
