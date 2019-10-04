//
//  별찍기-7_2444.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 04/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

void dottingStar_7() {
    int N; cin>>N;
    
    for(int i=0; i<N; i++) {
        string S="";
        for(int j=0; j<N-1-i; j++) S+=' ';
        for(int j=0; j<1+2*i; j++) S+='*';
        printf("%s\n",S.c_str());
    }
    
    for(int i=1; i<N; i++) {
        string S="";
        for(int j=0; j<i; j++) S+=' ';
        for(int j=2*N-1-i*2; j>0; j--) S+='*';
        printf("%s\n",S.c_str());
    }
    return;
}

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    dottingStar_7();
    return 0;
}
