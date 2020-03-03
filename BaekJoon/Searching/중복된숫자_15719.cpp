//
//  중복된숫자_15719.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/03/04.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: - 중복된숫자_15719
// MARK: C++ 문제풀이

#if 0
#include <iostream>
#include <unordered_map>
using namespace std;

bool C[10000001];

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    int N; cin>>N;
    unordered_map<int, int> UMP;
    while(N--) {
        int num; cin>>num;
        C[num] = !C[num];
        if(!C[num]) {
            printf("%d\n",num);
            break;
        }
    }
    return 0;
}
#endif
