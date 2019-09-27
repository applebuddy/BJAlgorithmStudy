//
//  최고의피자_5545.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 27/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 최고의 피자 : Greedy Algorithm Problem

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

void bestPizza() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    int N,A,B,originK;
    cin >> N >> A >> B;
    vector<int> K(N,0);
    cin >> originK;
    for(int i=0; i<N; i++) cin >> K[i];
    sort(K.begin(), K.end(), greater<int>());
    int kalori = 0;
    int price = 0;
    int Ans = originK/A;
    for(int i=0; i<K.size(); i++) {
        price = A + B*(i+1);
        kalori += K[i];
        Ans = max(Ans, (originK+kalori)/price);
    }
    printf("%d\n",Ans);
    return;
}

//int main() {
//    bestPizza();
//    return 0;
//}
