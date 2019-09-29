//
//  e계산.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 29/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - e계산_6376ㅠ
//0 1
//1 1+1
//2 1+1+1/2
//3 1+1+1/2+
#include <iostream>
#include <vector>
using namespace std;

void calculatingEValue() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    vector<double> Ans;
    printf("n e\n");
    printf("- -----------\n");

    printf("0 1\n1 2\n2 2.5\n");
    double sum = 2.5;
    double cnt = 2;
    for(int i=3; i<10; i++) {
        cnt *= i;
        sum = sum+1/(cnt);
        Ans.push_back(sum);
    }
    for(int i=0; i<=6; i++) {
        printf("%d %.9lf\n",i+3,Ans[i]);
    }
}

//int main() {
//    calculatingEValue();
//    return 0;
//}
