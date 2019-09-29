//
//  거북이_2959.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 29/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 거북이_2959 : The Turtle Problem
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void theTurtle() {
    vector<int> Ans(4,0);
    for(int i=0; i<4; i++) cin >> Ans[i];
    sort(Ans.begin(), Ans.end());
    printf("%d\n",Ans[0]*Ans[2]);
    return;
}

//int main() {
//    ios_base :: sync_with_stdio(0); cin.tie(0);
//    theTurtle();
//    return 0;
//}
