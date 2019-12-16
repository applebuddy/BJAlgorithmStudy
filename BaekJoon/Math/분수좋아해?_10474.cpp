//
//  분수좋아해?_10474.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 07/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 분수좋아해?_10474

#include <iostream>
using namespace std;

void doYouLikeBoonsoo() {
    while(1) {
        int a,b; cin>>a>>b;
        if(a==0 && b==0) break;
        printf("%d %d / %d\n",a/b,a%b,b);
    }
    return;
}

//int main() {
//    ios_base :: sync_with_stdio(0); cin.tie(0);
//    doYouLikeBoonsoo();
//    return 0;
//}
