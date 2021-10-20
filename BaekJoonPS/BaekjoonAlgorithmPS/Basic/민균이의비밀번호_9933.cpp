//
//  민균이의비밀번호_9933.cpp
//  BaekjoonAlgorithmPS
//
//  Created by MinKyeongTae on 2021/10/21.
//  Copyright © 2021 MungGu. All rights reserved.
//

#if 0
#include <iostream>
#include <algorithm>
#include <string>
#include <unordered_map>
using namespace std;

int main() {
    ios_base :: sync_with_stdio(); cin.tie(0);
    unordered_map<string, bool> UMP;
    int N; cin>>N;
    string ans = "";
    for(int i=0; i<N; i++) {
        string str; cin>>str;
        if(!ans.empty()) continue;
        string rstr = str;
        UMP[str] = true;
        reverse(rstr.begin(), rstr.end());
        if(UMP[rstr] && UMP[str]) ans = str;
        UMP[rstr] = true;
    }
    
    printf("%d %c\n", (int)ans.length(), ans[(int)ans.length()/2]);
}
#endif
