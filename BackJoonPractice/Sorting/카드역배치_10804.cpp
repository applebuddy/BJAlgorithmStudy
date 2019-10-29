//
//  카드역배치_10804.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 29/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 카드역배치_10804
#if 0
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void setTheCardReversed() {
    vector<int> V(21,0);
    for(int i=1; i<=20; i++) V[i]=i;
    for(int i=0; i<10; i++) {
        int from,to; cin>>from>>to;
        reverse(V.begin()+from,V.begin()+to+1);
    }
    for(int i=1; i<=20; i++) {
        printf("%d",V[i]);
        if(i!=V.size()-1) printf(" ");
    }
    puts("");
    return;
}

int main() {
    setTheCardReversed();
    return 0;
}
#endif
