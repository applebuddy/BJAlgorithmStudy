//
//  이진수변환_10829.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/02/02.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: 이진수변환

// MARK: - 문제풀이
#if 0
#include <iostream>
#include <string>
using namespace std;
typedef long long ll;

int main() {
    ll N; cin>>N;
    string Ans = "";
    while(N>0) {
        Ans = (N%2==0 ? '0' : '1') + Ans;
        N/=2;
    }
    
    printf("%s\n",Ans.c_str());
    return 0;
}
#endif
