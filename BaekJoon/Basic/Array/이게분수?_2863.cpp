//
//  이게분수?_2863.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2019/12/17.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

// MARK: 이게분수?_2863

#if 0
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    double A,B,C,D;
    cin>>A>>B>>C>>D;
    int Ans = 0;
    double nowMax = A/C + B/D;
    
    for(int i=0; i<3; i++) {
        swap(A, C);
        swap(B, D);
        swap(B, C);
        if(nowMax < A/C + B/D) {
            nowMax = A/C + B/D;
            Ans = i+1;
        }
    }
    
    printf("%d\n",Ans);
}
#endif
