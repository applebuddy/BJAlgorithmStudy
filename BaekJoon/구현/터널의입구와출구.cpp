//
//  터널의입구와출구.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 26/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 터널의 입구와 출구

//  // 입력 예시)
//  3
//  2
//  2 3
//  2 3
//  4 1
//
//  // 출력 예시)
//  3

#include <iostream>
using namespace std;

void ternalEntranceAndExit() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int N,C;
    int Ans=0;
    cin >> N >> C;
    while(N--) {
        int I,O;
        cin >> I >> O;
        C += I;
        if(C < O) {
            printf("%d\n",0); return;
        }
        C -= O;
        Ans = (Ans < C) ? C : Ans;
    }
    printf("%d\n",Ans);
    return;
}

//int main() {
//    ternalEntranceAndExit();
//    return 0;
//}
