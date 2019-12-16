//
//  CTP공국으로이민가자_12778.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 04/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - CTP 공국으로 이민가자_12778

#include <iostream>
using namespace std;

void immigrantToRepublicOfCTP() {
    int T; cin>>T;
    while(T--) {
        int N; char C;
        cin>>N>>C;
        for(int i=0; i<N; i++) {
            if(C=='C') {
                char ch; cin>>ch;
                printf("%d ",ch-64);
            } else if(C=='N') {
                int num; cin>>num;
                printf("%c ",char(num+64));
            }
        }
        printf("\n");
    }
    return;
}

//int main() {
//    ios_base :: sync_with_stdio(0); cin.tie(0);
//    immigrantToRepublicOfCTP();
//    return 0;
//}
