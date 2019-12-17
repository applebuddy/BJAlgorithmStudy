//
//  분수합_1735.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2019/12/17.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

// MARK: 분수합_1735

#if 0
#include <stdio.h>

int getGCD(int a, int b) {
    if(b==0) return a;
    return getGCD(b, a%b);
}

int main() {
    int sA, mA, sB, mB;
    scanf("%d %d %d %d",&sA,&mA,&sB,&mB);
    int nowM = mA * mB;
    int nowS = sA * mB + sB * mA;
    while(1) {
        int nowGCD = getGCD(nowM, nowS);
        if(nowGCD == 1) return !printf("%d %d\n",nowS,nowM);
        else {
            nowM /= nowGCD;
            nowS /= nowGCD;
        }
    }
    
    return 0;
}
#endif
