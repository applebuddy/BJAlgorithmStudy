//
//  별찍기-13_2523.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 18/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 별찍기-13_2523
#if 0
#include <iostream>
using namespace std;

void theDottingStars_13() {
    int N; cin>>N;
    for(int i=0; i<N; i++) {
        for(int j=0; j<N; j++) {
            if(j <= i) printf("*");
            else break;
        }
        puts("");
    }
    
    for(int i=1; i<N; i++) {
        for(int j=0; j<N; j++) {
            if(j <= -i+N-1) printf("*");
            else break;
        }
        puts("");
    }
    return;
}

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    theDottingStars_13();
    return 0;
}
#endif
