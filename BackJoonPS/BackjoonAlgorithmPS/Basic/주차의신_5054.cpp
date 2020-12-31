//
//  주차의신_5054.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 09/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 주차의신_5054

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void theGodOfParking() {
    int T; cin>>T;
    while(T--) {
        int N; cin>>N;
        vector<int> V(N,0);
        for(int i=0; i<(int)V.size(); i++) cin>>V[i];
        sort(V.begin(),V.end());
        printf("%d\n",(V.back()-V.front())*2);
    }
    return;
}
//
//int main() {
//    theGodOfParking();
//    return 0;
//}
