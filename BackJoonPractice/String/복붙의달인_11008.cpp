//
//  복붙의달인_11008.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 04/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 복붙의 달인_11008

#include <string>
#include <iostream>
using namespace std;

void masterOfDuplicationAndPaste() {
    int T; cin>>T;
    while(T--) {
        int Ans=0;
        string str="", dup=""; cin>>str>>dup;
        while(str.length()!=0) {
            if(str.length() < dup.length()) {
                Ans+=str.length();
                break;
            }
            else {
                if(dup==str.substr(0,dup.length())) str = str.substr(dup.length());
                else str = str.substr(1);
                Ans++;
            }
        }
        printf("%d\n",Ans);
    }
    return;
}

//int main() {
//    ios_base :: sync_with_stdio(0); cin.tie(0);
//    masterOfDuplicationAndPaste();
//    return 0;
//}
