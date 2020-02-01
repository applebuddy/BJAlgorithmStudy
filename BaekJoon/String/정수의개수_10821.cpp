//
//  정수의개수_10821.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/02/02.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: 정수의개수_10821

// MARK: - 문제풀이
#if 0
#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    string S; cin>>S;
    int Ans = 0;
    string temp="";
    for(int i=0; i<S.length(); i++) {
        if(S[i]==',') Ans++;
    }
    Ans++;
    printf("%d\n",Ans);
    return 0;
}
#endif
