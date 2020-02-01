//
//  놀라운문자열_1972.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/02/02.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: 놀라운문자열_1972

// MARK: - 놀라운문자열 문자열 활용 문제풀이
#if 0
#include <string>
#include <iostream>
#include <map>
using namespace std;

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    while(1) {
        string S; cin>>S;
        bool isSurprising = true;
        if(S=="*") break;
        
        if(S.length() > 2)
            for(int D=1; D<=S.length()-2; D++) {
                map<string,int> MP;
                for(int i=0; i<S.length()-D; i++) {
                    string str = "";
                    str += S[i];
                    str += S[i+D];
                    if(MP[str]>0) {
                        isSurprising = false;
                        break;
                    }
                    MP[str]++;
                    if(!isSurprising) break;
                }
                if(!isSurprising) break;
            }
        printf("%s is %s\n", S.c_str(), isSurprising ? "surprising." : "NOT surprising.");
    }
    return 0;
}
#endif
