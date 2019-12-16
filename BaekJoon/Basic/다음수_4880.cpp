//
//  다음수_4880.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 17/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 다음수_4880
#if 0
#include <iostream>
using namespace std;

void theNextNumber() {
    while(1) {
        int A,B,C; cin>>A>>B>>C;
        if(A==0 && B==0 && C==0) break;
        if(C-B == B-A) printf("AP %d\n",C+B-A);
        else printf("GP %d\n",C+((C-B)/(B-A)*(C-B)));
    }
    return;
}

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    theNextNumber();
    return 0;
}
#endif
