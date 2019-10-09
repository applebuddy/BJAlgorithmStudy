//
//  쉽게푸는문제_1292.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 09/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 쉽게푸는문제_1292

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

void theProblemSolvingEasily() {
    int A,B; cin>>A>>B;
    int max = A>B ? A : B;
    vector<int> C(max+1,0);
    int cnt=1;
    int cntMax=1;
    for(int i=1; i<=max+1; i++) {
        C[i]+=cntMax;
        if(i!=0) C[i]+=C[i-1];
        cnt--;
        if(cnt==0) {
            cntMax++;
            cnt=cntMax;
        }
    }
    
    printf("%d\n",(A>B) ? C[A]-C[B-1] : C[B]-C[A-1]);
    
    return;
}

//int main() {
//    theProblemSolvingEasily();
//    return 0;
//}
