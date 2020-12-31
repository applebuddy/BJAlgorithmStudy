//
//  에디터_1406.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/02/27.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: 단순 String 처리 시 TLE 답안
#if 0
#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    string S; cin>>S;
    int N; cin>>N;
    int cur = (int)S.length();
    while(N--) {
        string ms; cin>>ms;
        if(ms=="P") {
            string temp; cin>>temp;
            if(cur == (int)S.length()) {
                cur += temp.length();
                S += temp;
            } else {
                S.insert(cur, temp);
                cur += temp.length();
            }
            
        } else if(ms=="D" && cur < S.length()) {
            cur++;
        } else if(ms=="L" && cur > 0) {
            cur--;
        } else if(ms=="B") {
            if(cur<=0) continue;
            S.erase(S.begin()+cur-1);
            cur--;
        }
    }
    printf("%s\n",S.c_str());
    
    return 0;
}
#endif
