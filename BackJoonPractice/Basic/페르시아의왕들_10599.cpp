//
//  페르시아의왕들_10599.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 07/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 페르시아의왕들_10599

#include <iostream>
using namespace std;

void theKingOfPersia() {
    while(1) {
        int A,B,C,D; cin>>A>>B>>C>>D;
        if(A==0 && B==0 && C==0 && D==0) break;
        printf("%d %d\n",C-B,D-A);
    }
    return;
}

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    theKingOfPersia();
    return 0;
}
