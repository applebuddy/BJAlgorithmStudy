//
//  24_1408.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 13/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 24_1408
#if 0
#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<int> gettingTime(const string &S) {
    int hour = stoi(S.substr(0,2));
    int min = stoi(S.substr(3,2));
    int sec = stoi(S.substr(6,2));
    return {hour, min, sec};
}

void theTwentyFour() {
    string NT, GT;  cin>>NT>>GT;
    vector<int> NV = gettingTime(NT);
    vector<int> TV = gettingTime(GT);
    vector<int> Ans(3,0);
    if(TV[2] < NV[2]) {
        TV[1]--;
        TV[2]+=60;
    }
    
    Ans[2] = TV[2]-NV[2];
    if(TV[1] < NV[1]) {
        TV[0]--;
        TV[1]+=60;
    }
    
    Ans[1] = TV[1]-NV[1];
    Ans[0] = TV[0]-NV[0];
    if(Ans[0]<0) {
        Ans[0] += 24;
    }

    printf("%02d:%02d:%02d\n",Ans[0],Ans[1],Ans[2]);
    return;
}

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    theTwentyFour();
    return 0;
}
#endif
