//
//  1로만들기_1463.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2019/12/09.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

// MARK: - 1로 만들기

#if 0
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

vector<int> DP(1000001,0);
int go(int num) {
    if(num == 1) return 0;
    if(DP[num] > 0) return DP[num];
    DP[num] = go(num-1)+1;
    if(num%2==0) DP[num] = min(DP[num], go(num/2)+1);
    if(num%3==0) DP[num] = min(DP[num], go(num/3)+1);
    return DP[num];
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int num; cin>>num;
    int Ans = go(num);
    printf("%d\n",Ans);
    return 0;
}
#endif
