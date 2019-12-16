//
//  2진수8진수_1373.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 08/11/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 2진수8진수_1373
#if 0
#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    string S; cin>>S;
    while(S.length()%3!=0) {
        S = '0' + S;
    }
    
    for(int i=0; i<S.length(); i+=3) {
        string temp = S.substr(i,3);
        int N = (temp[0]-'0')*4 + (temp[1]-'0')*2 + (temp[2]-'0');
        printf("%d",N);
    }
    
    puts("");
    return 0;
}
#endif
