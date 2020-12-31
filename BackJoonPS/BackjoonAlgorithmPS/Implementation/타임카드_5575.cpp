//
//  타임카드_5575.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 07/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 타임카드_5575

#include <iostream>
using namespace std;

void theTimeCard() {
    for(int i=0; i<3; i++) {
        int A,B,C; cin>>A>>B>>C;
        int a,b,c; cin>>a>>b>>c;
        if(c<C) {
            b--;
            c = c+60-C;
        } else c-=C;
        if(b<B) {
            a--;
            b = b+60-B;
        } else b-=B;
        a-=A;
        printf("%d %d %d\n",a,b,c);
    }
    return;
}

//int main() {
//    ios_base :: sync_with_stdio(0); cin.tie(0);
//    theTimeCard();
//    return 0;
//}
