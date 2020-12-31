//
//  직사각형에서탈출_1085.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 03/11/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 직사각형에서 탈출_1085
#if 0
#include <cmath>
#include <iostream>
using namespace std;

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    int x,y,w,h; cin>>x>>y>>w>>h;
    int Ans = min(x-0,min(w-x,min(h-y,y-0)));
    printf("%d\n",Ans);
    return 0;
}
#endif
