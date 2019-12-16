//
//  대표값_2592.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 09/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 대표값_2592

#include <iostream>
#include <map>
using namespace std;

void theRepresentingValue() {
    map<int,int> MP;
    int T=10;
    int sum=0;
    while(T--) {
        int N; cin>>N;
        MP[N]++;
        sum+=N;
    }
    
    int freq=0;
    int max=0;
    auto iter = MP.begin();
    for(; iter!=MP.end(); iter++) {
        if(max<iter->second) {
            max=iter->second;
            freq=iter->first;
        }
    }
    
    printf("%d\n%d\n",sum/10,freq);
    return;
}

//int main() {
//    ios_base :: sync_with_stdio(0); cin.tie(0);
//    theRepresentingValue();
//    return 0;
//}
