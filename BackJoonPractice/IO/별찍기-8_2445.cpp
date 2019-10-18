//
//  별찍기-8_2445.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 18/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 별찍기-8_2445
#if 0
#include <iostream>
#include <string>
using namespace std;

void theDottingStars_8() {
    int N; cin>>N;
    for(int i=0; i<N; i++) {
        string S = "";
        for(int j=0; j<i+1; j++) S += '*';
        for(int j=0; j<N*2-(i+1)*2; j++) S+=' ';
        for(int j=0; j<i+1; j++) S += '*';
        printf("%s\n",S.c_str());
    }
    
    for(int i=N-2; i>=0; i--) {
        string S = "";
        for(int j=0; j<i+1; j++) S += '*';
        for(int j=0; j<N*2-(i+1)*2; j++) S+=' ';
        for(int j=0; j<i+1; j++) S += '*';
        printf("%s\n",S.c_str());
    }
    return;
}

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    theDottingStars_8();
    return 0;
}
#endif
