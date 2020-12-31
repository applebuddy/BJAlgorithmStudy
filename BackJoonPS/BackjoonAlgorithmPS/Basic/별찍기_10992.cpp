//
//  별찍기_10992.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 08/11/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 별찍기_10982
#if 0
#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int N; cin>>N;
    for(int i=1; i<N; i++) {
        string S = "";
        for(int j=0; j<N-i; j++) {
            S += " ";
        }
        S+="*";
        if(i!=1) {
            S+=string(i*2-3,' ');
            S+="*";
        }
        printf("%s\n",S.c_str());
    }
    string S(N*2-1,'*');
    printf("%s\n",S.c_str());
    return 0;
}
#endif
