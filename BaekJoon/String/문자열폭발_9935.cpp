//
//  문자열폭발_9935.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/03/04.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: - 문자열폭발 9935
// MARK: string & stack 활용 C++ 문제풀이

#if 0
#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    string S; cin>>S;
    string key; cin>>key;
    int kLen = (int)key.length();
    string now = "";
    for(int i=0; i<S.length(); i++) {
        now += S[i];
        if((int)now.length() >= kLen) {
            int idx = 0;
            bool flag = true;
            int lLen = (int)now.length();
            for(int j=lLen-kLen; j<lLen; j++) {
                if(key[idx] != now[j]) {
                    flag = false;
                    break;
                }
                idx++;
            }
            if(flag) {
                for(int i=0; i<kLen; i++) now.pop_back();
            }
        }
    }
    
    if(now=="") printf("FRULA\n");
    else printf("%s\n",now.c_str());
    return 0;
}
#endif
