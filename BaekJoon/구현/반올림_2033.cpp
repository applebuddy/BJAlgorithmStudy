//
//  반올림_2033.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 26/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int getRound() {
    double N;
    cin >> N;
    for(int i=10; i<100000000; i*=10) {
        if(N>i) {
            int temp = floor(N/i+0.5);
            N = temp*i;
        }
    }
    return N;
}

//int main () {
//    ios_base::sync_with_stdio(0); cin.tie(0);
//    int Ans = getRound();
//    printf("%d\n",Ans);
//    return 0;
//}

