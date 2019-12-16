//
//  막대기_1094.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 27/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 막대기 : Simulation Algorithm Problem
#include <iostream>
using namespace std;

int getStickCount() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    int N=64, Ans=0;
    int X; cin>>X;
    while(X>0) {
            // N(합)이 X보다 크다면
            if(N > X) {
                // 가장 짧은 막대기를 절반으로 자른다.
                N/=2;
            }   // length의 절반이 X보다 작으면 현재 가진 막대로 Xcm로 만들어본다. -> X-=length; -> 계속해서 남은 길이를 동일한 작업을 수행하며 메꾼다.
            else {
                // 작업한 N의 길이가 X보다 같거나 작다면, Xcm를 만드는데 보탠다.
                X-=N;
                Ans++;
            }
    }
    return Ans;
}

//int main() {
//    
//    printf("%d\n",getStickCount());
//    return 0;
//}
