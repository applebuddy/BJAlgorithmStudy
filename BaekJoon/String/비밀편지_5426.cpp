//
//  비밀편지_5426.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2019/12/13.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

// MARK: 비밀편지_5426

#if 0
#include <string>
#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    int T; cin>>T;
    while(T--) {
        string S; cin>>S;
        string Ans="";
        int rCnt = (int)sqrt(S.length());
        vector<string> SV;
        vector<string> rSV(rCnt,string(" ",rCnt));
        for(int i=0; i<rCnt; i++) {
            SV.push_back(S.substr(0,rCnt));
            S = S.substr(rCnt);
        }

        for(int i=0; i<rCnt; i++) {
            for(int j=0; j<rCnt; j++) {
                rSV[i][j] = SV[j][SV.size()-i-1];
            }
        }
        
        for(int i=0; i<rCnt; i++) Ans += rSV[i];
        printf("%s\n",Ans.c_str());
    }
    
    return 0;
}
#endif
