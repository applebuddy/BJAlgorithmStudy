//
//  대충더해_8949.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 22/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 대충더해
#if 0
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void passinglySum() {
    int A,B; cin>>A>>B;
    string strA = to_string(A);
    string strB = to_string(B);
    if(strA.length() < strB.length()) swap(strA,strB);
    int lenDif = (int)(strA.length()-strB.length());
    for(int i=0; i<lenDif; i++) printf("%c",strA[i]);
    strA = strA.substr(lenDif);
    for(int i=0; i<strA.length(); i++) {
        int a = strA[i]-'0';
        int b = strB[i]-'0';
        printf("%d",a+b);
    }
    puts("");
    return;
}

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    passinglySum();
    return 0;
}
#endif
