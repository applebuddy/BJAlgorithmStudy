//
//  핫도그_5666.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 06/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 핫도기_5666 : Basic Math Calculation Problem

#include <iostream>
#include <cmath>
using namespace std;

void theHotdog() {
    double a,b;
    while(scanf("%lf %lf",&a,&b)!=EOF) {
        double Ans = round((a/b*100))/100;
        printf("%.2lf\n",Ans);
    }
    return;
}

//int main() {
//    ios_base :: sync_with_stdio(0); cin.tie(0);
//    return 0;
//}
