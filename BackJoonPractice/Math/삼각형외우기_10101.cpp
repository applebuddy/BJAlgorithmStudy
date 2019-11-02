//
//  삼각형외우기_10101.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 03/11/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 삼각형외우기_10101
#if 0
#include <iostream>
using namespace std;

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    int A,B,C; cin>>A>>B>>C;
    int sum = A+B+C;
    if(sum!=180) printf("Error\n");
    else {
        if(A==B && B==C && A==C) printf("Equilateral\n");
        else if(A!=B && B!=C && A!=C) printf("Scalene\n");
        else printf("Isosceles\n");
    }
    return 0;
}
#endif
