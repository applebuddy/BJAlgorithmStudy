//
//  삼각형과세변_5073.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 17/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 삼각형과 세변
#if 0
#include <iostream>
#include <cmath>
#include <map>
using namespace std;

void triangleAndThreeSide() {
    while(1) {
        map<char,int> MP;
        int A,B,C; cin>>A>>B>>C;
        int mValue = max(A,max(B,C));
        int sum = A+B+C;
        if(A==0 && B==0 && C==0) break;
        MP[A]++;
        MP[B]++;
        MP[C]++;
        if(mValue >= sum-mValue) printf("Invalid\n");
        else {
            if(MP.size()==1) printf("Equilateral\n");
            else if(MP.size()==2) printf("Isosceles\n");
            else printf("Scalene\n");
        }
    }
    return;
}

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    triangleAndThreeSide();
    return 0;
}
#endif
