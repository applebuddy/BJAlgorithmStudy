//
//  괴짜교수_11109.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 21/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 괴짜교수_11109
#if 0
#include <iostream>
using namespace std;

void theGeekProfessor() {
    int T; cin>>T;
    while(T--) {
        int d,n,s,p; cin>>d>>n>>s>>p;
        int parallel = d + n*p;
        int serial = n*s;
        if(parallel == serial) printf("does not matter\n");
        else if(parallel < serial) printf("parallelize\n");
        else printf("do not parallelize\n");
    }
    return;
}

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    theGeekProfessor();
    return 0;
}
#endif
