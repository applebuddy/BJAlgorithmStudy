//
//  7종경기_8932.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2019/12/13.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

// MARK: 7종경기_8932

#if 0
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    vector<vector<double>> SV = {
        {9.23076, 26.7, 1.835, 0, 0},
        {1.84523, 75, 1.348, 0, 1},
        {56.0211, 1.5, 1.05, 0, 1},
        {4.99087, 42.5, 1.81, 0, 0},
        {0.188807, 210, 1.41, 0, 1},
        {15.9803, 3.8, 1.04, 0, 1},
        {0.11193, 254, 1.88, 0, 0}
    };
    
    int T; cin>>T;
    while(T--) {
        int Ans=0;
        for(int i=0; i<SV.size(); i++) {
            cin>>SV[i][3];
            if(SV[i][4]==0) Ans += SV[i][0] * pow((SV[i][1]-SV[i][3]),SV[i][2]);
            else Ans += SV[i][0] * pow((SV[i][3]-SV[i][1]),SV[i][2]);
        }
        printf("%d\n",Ans);
    }
    return 0;
}
#endif
