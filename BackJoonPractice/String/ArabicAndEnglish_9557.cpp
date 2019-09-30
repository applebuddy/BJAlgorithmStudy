//
//  ArabicAndEnglish_9557.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 30/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: ArabicAndEnglish_9557 : String Algorithm Problem

#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

void arabicAndEnglish() {
    int T; cin>>T;
    while(T--) {
        vector<string> Ans;
        int N; cin>>N;
        bool isEng = false;
        string S,str;
        getline(cin,S,'\n');
        getline(cin,S,'\n');
        int cnt=0;
        for(stringstream ss(S); ss >> str;) {

            if(str[0]=='#') {
                if(isEng==false) Ans.push_back(str);
                else {
                    Ans.insert(Ans.begin()+cnt,str);
                    cnt++;
                }
            }
            else {
                Ans.insert(Ans.begin()+cnt, str);
                isEng=true;
            }
        }

        for(auto v : Ans) printf("%s ",v.c_str());
        printf("\n");
    }
    return;
}

//int main() {
//    ios_base :: sync_with_stdio(0); cin.tie(0);
//    arabicAndEnglish();
//    return 0;
//}
