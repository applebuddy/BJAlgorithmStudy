//
//  창영이의일기장_2954.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 09/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 창영이의 일기장_2954

#include <iostream>
#include <string>
using namespace std;

void changYoungsDiary() {
    string S; getline(cin,S,'\n');
    string Ans="";
    while(S.length()!=0) {
        if(S.length()<3) {
            Ans+=S;
            break;
        }
        
        if(S[0]==S[2] && S[1]=='p' && (S[0]=='a' || S[0]=='i' || S[0]=='u' || S[0]=='e' || S[0]=='o')) {
            Ans+=S[0];
            S = S.substr(3);
        } else {
            Ans+=S[0];
            S = S.substr(1);
        }
    }
    
    printf("%s\n",Ans.c_str());
    return;
}

//int main() {
//    ios_base :: sync_with_stdio(0); cin.tie(0);
//    changYoungsDiary();
//    return 0;
//}
