//
//  AddingReversedNumbers_3486.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 27/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int calcReversedNumber(const int &a, const int &b) {
    string aStr = to_string(a);
    string bStr = to_string(b);
    reverse(aStr.begin(), aStr.end());
    reverse(bStr.begin(), bStr.end());
    string reversedResult = to_string(stoi(aStr) + stoi(bStr));
    reverse(reversedResult.begin(), reversedResult.end());
    return stoi(reversedResult);
}

//int main() {
//    ios_base :: sync_with_stdio(0); cin.tie(0);
//    int T; cin >> T;
//    while(T--) {
//        int a,b; cin >> a >> b;
//        int Ans = calcReversedNumber(a,b);
//        printf("%d\n",Ans);
//    }
//    return 0;
//}
