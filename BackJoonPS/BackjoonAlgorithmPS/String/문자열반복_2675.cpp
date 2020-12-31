//
//  문자열반복_2675.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 03/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 문자열 반복_2675

#include <iostream>
#include <string>
using namespace std;

void repeatationOfString() {
    int T; cin>>T;
    while(T--) {
    int N; string S; cin>>N>>S;
        for(int i=0; i<S.length(); i++) {
            for(int j=0; j<N; j++) {
                printf("%c",S[i]);
            }
        }
        printf("\n");
    }
    return;
}

//int main() {
//    ios_base :: sync_with_stdio(0); cin.tie(0);
//    repeatationOfString();
//    return 0;
//}
