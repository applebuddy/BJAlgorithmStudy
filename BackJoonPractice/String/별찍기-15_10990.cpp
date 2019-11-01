//
//  별찍기-15_10990.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 02/11/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 별찍기-15_10990
#if 0
#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    int N; cin>>N;
    for(int i=0; i<N; i++) {
        string S;
        for(int j=0; j<N-i-1; j++) S+=' ';
        for(int j=0; j<1+i*2; j++) {
            if(j==0 || j==i*2) S+='*';
            else S+=' ';
        }
        printf("%s\n",S.c_str());
    }
    return 0;
}
#endif
