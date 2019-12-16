//
//  그릇_7567.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 04/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

void bowl() {
    string S=""; cin>>S;

    int Ans=10;
    for(int i=1; i<(int)S.length(); i++) {
        if(S[i-1]!=S[i]) Ans+=10;
        else Ans+=5;
    }
    
    printf("%d\n",Ans);
    return;
}

//int main() {
//    ios_base :: sync_with_stdio(0); cin.tie(0);
//    bowl();
//    return 0;
//}
