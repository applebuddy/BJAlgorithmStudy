//
//  완전세제곱_4690.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 29/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 완전 세제곱_4690

#include <iostream>
#include <cmath>
using namespace std;

void tripleMultipleComp() {
    for(int T=6; T<=100; T++) {
        for(int i=2; i<=98; i++) {
            for(int j=i+1; j<=99; j++) {
                for(int k=j+1; k<=100; k++) {
                    if(T*T*T==i*i*i+j*j*j+k*k*k) {
                        printf("Cube = %d, Triple = (%d,%d,%d)\n",T,i,j,k);
                    } else if((i*i*i+j*j*j+k*k*k) > T*T*T) break;
                }
            }
        }
    }
}

//int main() {
//    ios_base :: sync_with_stdio(0); cin.tie(0);
//    tripleMultipleComp();
//    return 0;
//}
