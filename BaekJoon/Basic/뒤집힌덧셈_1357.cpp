//
//  뒤집힌덧셈_1357.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/02/02.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: 뒤집힌덧셈 1357

// MARK: - String, stoi(), to_String(), reverse() 활용 문제풀이
#if 0
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    int X,Y; cin>>X>>Y;
    string sX = to_string(X), sY = to_string(Y);
    reverse(sX.begin(), sX.end());
    reverse(sY.begin(), sY.end());
    string result = to_string(stoi(sY)+stoi(sX));
    reverse(result.begin(), result.end());
    printf("%d\n",stoi(result));
    return 0;
}
#endif
