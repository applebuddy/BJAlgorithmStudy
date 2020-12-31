//
//  IBM빼기1_6321.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 27/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - IBM빼기1_6321

#include <iostream>
using namespace std;

void subtractingIBMOne() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    int T; cin>>T;
    for(int i=0; i<T; i++) {
        string S; cin>>S;
        printf("String #%d\n",i+1);
        for(int i=0; i<S.length(); i++) {
            if(S[i]==90) printf("%c",'A');
            else printf("%c",S[i]+1);
        }
        printf("\n\n");
    }
    return;
}

//int main() {
//    subtractingIBMOne();
//    return 0;
//}
