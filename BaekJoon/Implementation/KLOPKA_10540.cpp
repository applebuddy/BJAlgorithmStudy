//
//  KLOPKA_10540.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 27/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - KLOPKA_10540
//  입력받은 좌표를 모두 포괄할 수 있는 최소한의 정사각형 크기를 출력하라!!

#include <iostream>
#include <cmath>
#include <vector>
#define MAX_INT 2100000000
using namespace std;

typedef pair<int,int> Pair;

void getMinimumSquare() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    int T; cin>>T;
    Pair MIN = {MAX_INT,MAX_INT};
    Pair MAX = {0,0};
    while(T--) {
        int X,Y; cin>>X>>Y;
        MIN.first = min(MIN.first,X);
        MIN.second = min(MIN.second,Y);
        MAX.first = max(MAX.first,X);
        MAX.second = max(MAX.second,Y);
    }
    printf("%d\n",int(pow(max(MAX.second-MIN.second,MAX.first-MIN.first),2)));
    return;
}

//int main() {
//    getMinimumSquare();
//    return 0;
//}
