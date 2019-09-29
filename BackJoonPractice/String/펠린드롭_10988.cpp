//
//  펠린드롭_10988.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 30/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 팰린드롭인지 확인하기 : String Basic Algorithm Problem

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void checkWhetherIsPhelindrop() {
    string str; cin>>str;
    string cStr = str;
    reverse(cStr.begin(),cStr.end());
    printf("%d\n",str==cStr);
    return;
}

//int main() {
//    ios_base::sync_with_stdio(0); cin.tie(0);
//    checkWhetherIsPhelindrop();
//    return 0;
//}
