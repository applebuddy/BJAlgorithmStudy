//
//  박사과정_5026.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 07/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 박사과정_5026

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void doctorCurriculum() {
    int T; cin>>T;
    while(T--) {
        string S; cin>>S;
        if(S=="P=NP") printf("skipped\n");
        else {
            auto idx = S.find('+');
            int Ans = stoi(S.substr(0,idx)) + stoi(S.substr(idx+1,(int)S.length()-(idx+1)));
            printf("%d\n",Ans);
        }
    }
    return;
}

//int main() {
//    ios_base :: sync_with_stdio(0); cin.tie(0);
//    doctorCurriculum();
//    return 0;
//}
