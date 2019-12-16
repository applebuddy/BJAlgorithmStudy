
//
//  저작권.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 27/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 저작권_2914
//  * 출처 : https://www.acmicpc.net/problem/2914

#include <iostream>
#include <vector>
using namespace std;

int copyRight() {
    int A,I; cin>>A>>I;
    return A*(I-1)+1;
}

//int main() {
//    ios_base :: sync_with_stdio(0); cin.tie(0);
//    int Ans = copyRight();
//    printf("%d\n",Ans);
//    return 0;
//}
