//
//  별찍기-9_2446.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 20/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 별찍기-9_2446
#if 0
#include <iostream>
using namespace std;

void theDottingStars_9() {
    int N; cin>>N;
    for(int i=0; i<N-1; i++) {
        for(int j=0; j<i; j++) printf(" ");
        for(int j=0; j<N*2-1-(i*2); j++) printf("*");
        puts("");
    }
    
    for(int i=0; i<N; i++) {
        for(int j=0; j<N-i-1; j++) printf(" ");
        for(int j=0; j<i*2+1; j++) printf("*");
        puts("");
    }
    return;
}

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    theDottingStars_9();
    return 0;
}
#endif
