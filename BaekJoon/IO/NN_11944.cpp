//
//  NN_11944.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/02/02.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: NN 11944

// MARK: - 문자열, erase() 활용 문제풀이
#if 0
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    int N,M; cin>>N>>M;
    string S="";
    for(int i=0; i<N; i++) {
        S+=to_string(N);
        if(S.length() >= M) {
            S.erase(S.begin()+M, S.end());
            break;
        }
    }
    printf("%s\n",S.c_str());
    return 0;
}
#endif
