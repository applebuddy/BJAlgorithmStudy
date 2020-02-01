//
//  !밀비급일_11365.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/02/02.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: !일비급일_11365

// MARK: - 문자열, reverse() 활용 문제풀이
#if 0
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    string S;
    while(1) {
        getline(cin, S, '\n');
        if(S=="END") break;
        reverse(S.begin(), S.end());
        printf("%s\n",S.c_str());
    }
    return 0;
}
#endif
