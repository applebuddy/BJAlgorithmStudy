//
//  기타줄_1049.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/02/05.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: 기타줄_1049
// MARK: - 그리디 문제풀이
#if 0
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
typedef pair<int,int> Pair;

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    int N, B; cin>>N>>B;
    if(N==0) return !printf("%d\n",0);
    Pair P = {2e9, 2e9};
    for(int i=0; i<B; i++) {
        int A,B; cin>>A>>B;
        P.first = min(P.first, A);
        P.second = min(P.second, B);
    }
    printf("%d\n", min(P.first * (N/6) + P.second * (N%6), min(P.first * ((N-1)/6+1), P.second * N)));
    return 0;
}
#endif
