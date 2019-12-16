//
//  Tautogram_5698.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2019/12/16.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

// MARK: Tautogram_5698

#if 0
#include <iostream>
#include <string>
using namespace std;

char prefix = ' ';

bool checkPrefix(string &S) {
    if(S.front()!=toupper(prefix) && S.front()!=tolower(prefix))
    {
        return false;
    }
    else return true;
}

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    while(1) {
        string S="";
        getline(cin, S);
        if(S=="*") break;
        prefix = S.front();
        
        int idx=0;
        bool flag=true;
        while(!S.empty()) {
            if(S.length() == idx) break;
            if(S[idx]==' ') {
                string temp = S.substr(0,idx);
                if(!checkPrefix(temp)) {
                    flag=false;
                    break;
                }
                S = S.substr(idx+1);
                idx=0;
            }
            
            if(!flag) break;
            idx++;
        }
        
        if(!checkPrefix(S)) flag=false;
        
        printf("%s\n", flag ? "Y" : "N");
    }
    return 0;
}
#endif
