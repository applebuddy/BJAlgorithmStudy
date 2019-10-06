//
//  아름다운수_2774.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 06/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// 아름다운수_2774

#include <iostream>
#include <set>
using namespace std;

void theBeautifulNumber() {
    int T; cin>>T;
    while(T--) {
        int N; cin>>N;
        set<int> ST;
        while(N>0) {
            ST.insert(N%10);
            N/=10;
        }
        printf("%d\n",(int)ST.size());
    }
    return;
}

//int main() {
//    ios_base :: sync_with_stdio(0); cin.tie(0);
//    theBeautifulNumber();
//    return 0;
//}
