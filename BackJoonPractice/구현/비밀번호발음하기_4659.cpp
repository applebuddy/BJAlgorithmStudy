//
//  비밀번호발음하기_4659.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 29/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 비밀번호 발음하기
//. * 특정 비밀번호 요건을 충족하는지 체크하는 문제

#include <iostream>
#include <vector>
#include <string>
using namespace std;

/// MARK: 통과답인
void passwordChecking() {
    while(1) {
        string S; cin>>S;
        if(S=="end") break;
        bool isAcceptable = true;
        bool isMoja = false;
        int dupCnt = 1;

        for(int i=0; i<S.length(); i++) {
            if((isMoja==false) &&
               (S[i]=='a' || S[i]=='e' || S[i]=='i' || S[i]=='o' || S[i]=='u')) isMoja=true;
            if(i!=S.length()-1 && S[i]==S[i+1]) {
                if(S[i]!='e' && S[i]!='o') {
                    isAcceptable = false;
                    break;
                }
            }

            if(i!=S.length()-1 &&
               (((S[i]=='a' || S[i]=='e' || S[i]=='i' || S[i]=='o' || S[i]=='u')
                 && (S[i+1]=='a' || S[i+1]=='e' || S[i+1]=='i' || S[i+1]=='o' || S[i+1]=='u'))
                || ((S[i]!='a' && S[i]!='e' && S[i]!='i' && S[i]!='o' && S[i]!='u')
                && (S[i+1]!='a' && S[i+1]!='e' && S[i+1]!='i' && S[i+1]!='o' && S[i+1]!='u')))) {
                dupCnt++;
            }
            else dupCnt=1;
            if(dupCnt>=3) {
                isAcceptable=false;
                break;
            }
        }

        if(isMoja==true && isAcceptable==true) printf("<%s> is acceptable.\n", S.c_str());
        else printf("<%s> is not acceptable.\n", S.c_str());
    }
    return;
}

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    passwordChecking();
    return 0;
}
