//
//  뜨거운붕어빵_11945.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2019/12/13.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

// MARK: 뜨거운붕어빵_11945

#if 0
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    int N,M; cin>>N>>M;
    vector<string> SV(N,"");
    for(int i=0; i<N; i++) {
        cin>>SV[i];
        reverse(SV[i].begin(), SV[i].end());
    }
    
    for(int i=0; i<N; i++) printf("%s\n",SV[i].c_str());
    
    return 0;
}
#endif
