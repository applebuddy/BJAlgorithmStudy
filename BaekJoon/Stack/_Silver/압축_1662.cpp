//
//  압축_1662.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/03/03.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: - 압축 1662
// MARK: Stack C++ 문제풀이
//1 + 3 * (2 + 2 * (1 + 1 * 1))
// ★ depth에 따른 값 누적 및 연산 수행으로 값 도출

#if 0
#include <string>
#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    string S; cin>>S;
    stack<int> STK;
    vector<int> depth(51,0);
    for(int i=0; i<S.length(); i++) {
        if(S[i]=='(') {
            STK.push(i);
        } else if(S[i]==')') {
            int last = (int)STK.top();
            depth[(int)STK.size()-1] += (S[last-1]-'0') * depth[(int)STK.size()] - 1;
            depth[(int)STK.size()] = 0;
            STK.pop();
        } else {
            depth[(int)STK.size()]++;
        }
    }
    
    printf("%d\n",depth[0]);
    return 0;
}
#endif
