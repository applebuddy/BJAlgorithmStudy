//
//  입실관리_5524.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 03/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 입실관리_5524

#include <iostream>
#include <string>
using namespace std;

void managingCheckInRoom() {
    int T; cin>>T;
    while(T--) {
        string S; cin>>S;
        for(int i=0; i<S.length(); i++) if(S[i]<97) S[i] = tolower(S[i]);
        printf("%s\n",S.c_str());
    }
    
    return;
}

//int main() {
//    ios_base :: sync_with_stdio(0); cin.tie(0);
//    managingCheckInRoom();
//    return 0;
//}
