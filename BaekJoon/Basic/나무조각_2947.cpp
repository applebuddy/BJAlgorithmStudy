//
//  나무조각_2947.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 21/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 나무조각_2947
#if 0
#include <iostream>
#include <vector>
using namespace std;

void theWoodCarving() {
    vector<int> V(5,0);
    for(int i=0; i<5; i++) cin>>V[i];
    for(int i=(int)V.size()-1; i>=0; i--) {
        for(int j=0; j<i; j++) {
            if(V[j] > V[j+1]) {
                swap(V[j],V[j+1]);
                for(auto v: V) printf("%d ",v);
                puts("");
            }
        }
    }
    return;
}

int main() {
    theWoodCarving();
    return 0;
}
#endif
