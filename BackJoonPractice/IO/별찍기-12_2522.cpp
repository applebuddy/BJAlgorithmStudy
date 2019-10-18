//
//  별찍기-12_2522.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 18/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 별찍기-12_2522
#if 0
#include <iostream>
#include <string>
using namespace std;

void theDottingStars_12() {
    int N; cin>>N;
    for(int i=0; i<N; i++) {
        if(i==N-1) break;
        for(int j=0; j<N; j++) {
            if(j >= -i+N-1) printf("*");
            else printf(" ");
        }
        puts("");
    }
    for(int i=0; i<N; i++) {
        for(int j=0; j<N; j++) {
            if(i <= j) printf("*");
            else printf(" ");
        }
        puts("");
    }
    return;
}

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    return 0;
}
#endif
