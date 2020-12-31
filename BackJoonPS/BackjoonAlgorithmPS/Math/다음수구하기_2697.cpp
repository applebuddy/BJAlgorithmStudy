//
//  다음수구하기_2697.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2019/12/16.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

// MARK: 다음수구하기_2697

#if 0
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    int T; cin>>T;
    while(T--) {
        string S; cin>>S;
        if(!next_permutation(S.begin(), S.end())) printf("BIGGEST\n");
        else printf("%s\n",S.c_str());
    }
    return 0;
}
#endif
