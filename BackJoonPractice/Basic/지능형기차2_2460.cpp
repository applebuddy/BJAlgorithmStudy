//
//  지능형기차2_2460.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 09/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 지능형기차2_2460

#include <iostream>
using namespace std;

void theIntelligentTrain() {
    int N=10;
    int Ans=0;
    int now=0;
    while(N--) {
        int O,I; cin>>O>>I;
        now-=O;
        now+=I;
        Ans = Ans<now ? now : Ans;
    }
    printf("%d\n",Ans);
    
    return;
}

//int main() {
//    theIntelligentTrain();
//    return 0;
//}
