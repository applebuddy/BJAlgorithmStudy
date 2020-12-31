//
//  배수찾기_4504.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 06/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 배수찾기_4504

#include <iostream>
using namespace std;

void findMultipleNumber() {
    int N; cin>>N;
    while(1) {
        int n; cin>>n;
        if(n==0) break;
        if(n%N==0) printf("%d is a multiple of %d.\n",n,N);
        else printf("%d is NOT a multiple of %d.\n",n,N);
    }
    return;
}

//int main() {
//    ios_base :: sync_with_stdio(0); cin.tie(0);
//    findMultipleNumber();
//    return 0;
//}
