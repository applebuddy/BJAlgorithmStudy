//
//  줄임말만들기_3181.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 06/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 줄임말만들기_3181

#include <iostream>
#include <string>
#include <sstream>
#include <unordered_map>
using namespace std;

void makeAbbreviation() {
    unordered_map<string,int> MP = {{"i",-1},{"pa",-1},{"te",-1},{"ni",-1},{"niti",-1},{"a",-1},{"ali",-1},{"nego",-1},{"no",-1},{"ili",-1}};
    
    string S; getline(cin,S,'\n');
    string keyword="";
    string Ans="";
    for(stringstream ss(S); ss>>keyword;) {
        if(MP[keyword]==0) Ans += toupper(keyword[0]);
        else if(Ans=="") Ans += toupper(keyword[0]);
    }
    printf("%s\n",Ans.c_str());
    return;
}

//int main() {
//    ios_base :: sync_with_stdio(0); cin.tie(0);
//    makeAbbreviation();
//    return 0;
//}
