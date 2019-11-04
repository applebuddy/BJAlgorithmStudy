//
//  도깨비말_9226.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 05/11/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 도깨비말_9226
#if 0
#include <iostream>
#include <string>
using namespace std;

int main() {
    while(1) {
        string S; cin>>S;
        if(S=="#") break;
        string Ans = "";
        for(int i=0; i<S.length(); i++) {
            if(S[i]=='a' || S[i]=='e' || S[i]=='i' || S[i]=='o' || S[i]=='u') {
                if(i!=0) Ans = S.substr(i,S.length()-i) + S.substr(0,i);
                else Ans = S;
                break;
            }
        }
        
        if(Ans=="") Ans=S;
        printf("%say\n",Ans.c_str());
    }
    return 0;
}
#endif
