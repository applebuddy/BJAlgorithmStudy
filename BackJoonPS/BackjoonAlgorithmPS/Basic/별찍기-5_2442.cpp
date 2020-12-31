//
//  별찍기-5_2442.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 04/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 별찍기-5_2442

#include <iostream>
using namespace std;

void dottingStar_5() {
    int N; cin>>N;
    for(int i=0; i<N; i++) {
        string S="";
        for(int j=0; j<N-1-i; j++) S+=' ';
        for(int j=0; j<1+i*2; j++) S+='*';
        printf("%s\n",S.c_str());
    }
    return;
}

//int main() {
//    ios_base :: sync_with_stdio(0); cin.tie(0);
//    dottingStar_5();
//    return 0;
//}
