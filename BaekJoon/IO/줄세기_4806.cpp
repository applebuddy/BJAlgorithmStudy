//
//  줄세기_4806.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/01/11.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: 줄세기_4806 문제풀이
 
#if 0
#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    string S;
    int Ans=0;
    while(getline(cin, S, '\n')) {
        if(S!="") Ans++;
    }
    
    printf("%d\n",Ans);
    return 0;
}
#endif
