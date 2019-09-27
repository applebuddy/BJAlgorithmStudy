//
//  이진수_3460.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 27/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 이진수_3460 : Basic Mathematics Problem
//  - 입력값, N을 이진수로 변환 했을때 1의 위치를 출력해라 (이때의 위치는 최우측이 0으로 시작한다.)

#include <iostream>
#include <vector>
using namespace std;

void countBinaryOne(int N) {
    int cnt=0;
    while(N>0) {
        int temp = N%2;
        if(temp==1) printf("%d ",cnt);
        N/=2; cnt++;
    }
}

void binaryNumber() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    int T; cin>>T;
    while(T--) {
        int N; cin>>N;
       countBinaryOne(N);
    }
}

//int main() {
//    binaryNumber();
//    return 0;
//}
