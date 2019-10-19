//
//  별찍기-20_10995.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 20/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 별찍기-20_10995
#if 0
#include <iostream>
using namespace std;

void theDottingStars_20() {
    int N; cin>>N;
    for(int i=0; i<N; i++) {
        for(int j=0; j<N; j++) {
            if(i%2==0) {
                printf("*");
                if(j!=N-1) printf(" ");
            } else {
                printf(" *");
            }
        }
        puts("");
    }
    return;
}

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    theDottingStars_20();
    return 0;
}
#endif
