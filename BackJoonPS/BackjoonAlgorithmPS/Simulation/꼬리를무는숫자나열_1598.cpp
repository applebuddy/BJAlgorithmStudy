//
//  꼬리를무는숫자나열_1598.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2019/12/17.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

// MARK: 꼬리를무는숫자나열_1598

#if 0
#include <stdio.h>
#include <algorithm>

int main() {
    int A,B;
    scanf("%d %d",&A,&B);
    if(A>B) std::swap(A,B);
    int diff = (B-A-1)/4+1;
    int diff2 = (B-A)/4;
    int rA = A%4==0 ? 4 : A%4;
    int rB = B%4==0 ? 4 : B%4;
    printf("%d\n", rA > rB ? diff+(diff*4-(B-A)) : diff2+((B-A)-diff2*4));
    return 0;
}
#endif
