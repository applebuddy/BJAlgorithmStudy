//
//  잃어버린괄호_1541.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 30/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 잃어버린 괄호_1541

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void lostBrace() {
    string str;
    int strIdx=0, strCnt=1;
    vector<int> NV;
    vector<char> UV;
    getline(cin,str,'\n');
    for(int i=0; i<str.length(); i++) {
        if(str[i]=='-') UV.push_back('-');
        else if(str[i]=='+') UV.push_back('+');
        else {
            if(i==str.length()-1 || str[i+1]=='+' || str[i+1]=='-') {
                NV.push_back(stoi(str.substr(strIdx,strCnt)));
                strIdx += strCnt+1;
                strCnt=1;
            } else {
                strCnt++;
            }
        }
    }

    int Ans = NV[0];
    int pSum=0;
    bool flag = false;
    for(int i=1; i<NV.size(); i++) {
        if(i==NV.size()-1) {
            if(UV[i-1]=='-') Ans -= (pSum+NV[i]);
            else {
                if(flag == false) {
                Ans -= pSum;
                Ans += NV[i];
                } else {
                    Ans -= (pSum+NV[i]);
                }
            }
            break;
        }
        
        if(UV[i-1]=='+') {
            if(flag==false) {
                Ans+=NV[i];
            }
            else {
                pSum+=NV[i];
            }
        } else {
            if(flag == false) {
                flag = true;
                pSum+=NV[i];
            } else {
                Ans-=pSum;
                pSum = NV[i];
            }
        }
    }
    printf("%d\n",Ans);
    return;
}

//int main() {
//    ios_base :: sync_with_stdio(0); cin.tie(0);
//    lostBrace();
//    return 0;
//}
