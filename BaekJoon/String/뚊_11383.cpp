//
//  뚊_11383.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 06/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 뚊_11383 : Basic String Handling Problem

#include <string>
#include <vector>
#include <iostream>
using namespace std;

void ttyorymb() {
    int N,M; cin>>N>>M;
    bool flag = true;
    vector<string> SV;
    vector<string> Ans;
    for(int i=0; i<N; i++) {
        string before,ansStr=""; cin>>before;
        SV.push_back(before);

        for(int j=0; j<SV[i].length(); j++) {
            ansStr += string(2, SV[i][j]);
        }
        Ans.push_back(ansStr);
    }
    
    for(int i=0; i<N; i++) {
        string result; cin>>result;
        if(Ans[i]!=result) {
            flag=false;
            break;
        }
    }
    printf(flag ? "Eyfa\n" : "Not Eyfa\n");
    return;
}

//int main() {
//    ios_base :: sync_with_stdio(0); cin.tie(0);
//    return 0;
//}
