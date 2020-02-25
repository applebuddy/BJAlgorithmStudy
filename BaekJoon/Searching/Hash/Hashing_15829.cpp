//
//  Hashing_15829.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/02/26.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: - Hashing_15829
// MARK: C++ 문제풀이

#if 0
#include <iostream>
#include <string>
using namespace std;
typedef long long ll;

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    int N; cin>>N;
    string S; cin>>S;
    ll Ans = 0, hash = 1;
    for(int i=0; i<S.length(); i++) {
        Ans += ((S[i]-'a'+1) * hash) % 1234567891;
        hash *= 31;
        hash %= 1234567891;
    }
    
    printf("%lld\n",Ans % 1234567891);
    return 0;
}
#endif
