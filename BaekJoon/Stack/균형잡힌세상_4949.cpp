//
//  균형잡힌세상_4949.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 03/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 균형잡힌세상_4949

#include <iostream>
#include <string>
#include <stack>
#include <unordered_map>
using namespace std;

void balancedWorld() {
    unordered_map<char,char> UMP;
    UMP[')']='(';
    UMP[']']='[';
    while(1) {
        string S;
        getline(cin,S,'\n');
        bool isBalanced=true;
        stack<char> STK;
        
        if(S.front()=='.') break;
        
        for(int i=0; i<S.length(); i++) {
            if(S[i]=='(' || S[i]=='[') STK.push(S[i]);
            else {
                if(S[i]==')' || S[i]==']') {
                    if(STK.empty()) {
                        isBalanced=false;
                        break;
                    } else {
                        if(STK.top()==UMP[S[i]]) STK.pop();
                        else {
                            isBalanced=false;
                            break;
                        }
                    }
                }
            }
        }
        printf("%s\n",isBalanced && STK.empty() ? "yes" : "no");
    }
    return;
}

//int main() {
//    ios_base :: sync_with_stdio(0); cin.tie(0);
//    balancedWorld();
//    return 0;
//}
