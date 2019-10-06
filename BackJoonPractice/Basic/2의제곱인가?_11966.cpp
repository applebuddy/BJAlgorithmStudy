//
//  2의제곱인가?_11966.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 06/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 2의 제곱인가_11966

#include <iostream>
using namespace std;

void isTheTwoSquared() {
    int N; cin>>N;
    bool flag = false;
    while(N!=0) {
        if(N==1) {
            flag=true; break;
        } else {
            if(N%2==1) break;
            else N/=2;
        }
    }
    printf("%d\n", flag);
    return;
}

//int main() {
//    ios_base :: sync_with_stdio(0); cin.tie(0);
//    isTheTwoSquared();
//    return 0;
//}
