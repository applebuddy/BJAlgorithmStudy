//
//  문자열폭발_9935.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/02/26.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

#if 0
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string S; cin>>S;
    string key; cin>>key;
    string comp = "";
    int kLen = (int)key.length();
    for(int i=0; i<S.length(); i++) {
        comp += S[i];
        if(comp.length()>=kLen && comp.find(key)!=string::npos) {
            for(int i=0; i<kLen; i++) comp.pop_back();
        }
    }
    
    if(comp=="") printf("FRULA\n");
    else printf("%s\n",comp.c_str());
    return 0;
}
#endif
