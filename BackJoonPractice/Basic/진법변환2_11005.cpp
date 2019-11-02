//
//  진법변환2_11005.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 03/11/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 진법변환2_11005
#if 0
#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    int N,B; cin>>N>>B;
    string Ans="";
    while(N>0) {
        int temp = N%B;
        char ch=' ';
        if(temp>=10) ch = char(temp+55);
        else ch = temp + '0';
        Ans = ch + Ans;
        N/=B;
    }
    printf("%s\n",Ans.c_str());
    return 0;
}
#endif
