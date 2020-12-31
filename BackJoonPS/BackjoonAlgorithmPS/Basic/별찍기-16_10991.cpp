//
//  별찍기-16_10991.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 13/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 별찍기-16_10991
#if 0
#include <iostream>
#include <string>
using namespace std;

void dottingStars_16() {
    int N; cin>>N;
    for(int i=1; i<=N; i++) {
        string S = "";
        S += string(N-i,' ');
        S += '*';
        for(int j=0; j<i-1; j++) S += " *";
        printf("%s\n",S.c_str());
    }
    return;
}

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    dottingStars_16();
    return 0;
}
#endif
