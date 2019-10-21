//
//  해밍거리_3449.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 22/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 해밍거리_3449
#if 0
#include <iostream>
#include <string>
using namespace std;

void theHammingDistance() {
    int T; cin>>T;
    while(T--) {
        string A,B; cin>>A>>B;
        int hammingDistance=0;
        for(unsigned int i=0; i<A.length(); i++) if(A[i]!=B[i]) hammingDistance++;
        printf("Hamming distance is %d.\n",hammingDistance);
    }
    return 0;
}

int main() {
    theHammingDistance();
    return 0;
}
#endif
