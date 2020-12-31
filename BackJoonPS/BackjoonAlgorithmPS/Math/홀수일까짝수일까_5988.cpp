//
//  홀수일까짝수일까_5988.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 29/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 홀수일까 짝수일까_5988
#if 0
#include <iostream>
#include <string>
using namespace std;

void isTheOddOrEven() {
    int T; cin>>T;
    while(T--) {
        string S; cin>>S;
        printf("%s\n",(S.back()-'0')%2==0 ? "even" : "odd");
    }
    return;
}

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    isTeOddOrEven();
    return 0;
}
#endif
