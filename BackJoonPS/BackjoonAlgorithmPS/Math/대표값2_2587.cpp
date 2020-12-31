//
//  대표값2_2587.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2019/12/15.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

// MARK: 대표값2_2587

#if 0
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    vector<int> V(5,0);
    int sum=0;
    for(int i=0; i<5; i++) {
        cin>>V[i];
        sum+=V[i];
    }
    
    sort(V.begin(), V.end());
    printf("%d\n%d\n",sum/5,V[2]);
    
    return 0;
}
#endif
