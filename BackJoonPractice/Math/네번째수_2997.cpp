//
//  네번째수_2997.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 20/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 네번째수_2997
#if 0
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void theFourthNumber() {
    vector<int> V(3,0);
    for(int i=0; i<3; i++) cin>>V[i];
    sort(V.begin(), V.end());
    int MIN = V[1]-V[0] < V[2]-V[1] ? V[1]-V[0] : V[2]-V[1];
    for(int i=1; i<3; i++) {
        if(V[i-1]+MIN != V[i]) {
            printf("%d\n",V[i-1]+MIN);
            return;
        }
    }
    printf("%d\n",V.back()+MIN);
    return;
}

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    theFourthNumber();
    return 0;
}
#endif
