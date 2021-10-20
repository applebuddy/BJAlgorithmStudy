//
//  곱셈_1629.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 03/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 곱셈_1629

#include <iostream>
using namespace std;

long long multiplyWithRecursiveFunction(int A, int B, int C) {
    if(B==1) return A;
    long long Ans=0;
    if(B%2==0) {
       Ans = multiplyWithRecursiveFunction(A,(B/2),C)%C * multiplyWithRecursiveFunction(A,(B/2),C)%C;
    } else {
       Ans = multiplyWithRecursiveFunction(A,((B-1)/2),C)%C * multiplyWithRecursiveFunction(A,((B-1)/2),C)%C * A%C;
    }
    return Ans;
}

//int main() {
//    ios_base :: sync_with_stdio(0); cin.tie(0);
//    int A,B,C; cin>>A>>B>>C;
//    long long Ans = multiplyWithRecursiveFunction(A,B,C);
//    printf("%lld\n",Ans%C);
//    return 0;
//}
