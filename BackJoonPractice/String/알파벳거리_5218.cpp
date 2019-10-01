//
//  알파벳거리_5218.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 01/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 알파벳 거리_5218 : Basic String Problem

#include <iostream>
#include <string>
using namespace std;

void distancesOfAlphabet() {
    int T;
    cin>>T;
    while(T--) {
        string s1,s2; cin>>s1>>s2;
        printf("Distances: ");
        for(int i=0; i<s1.length(); i++) {
            if(s1[i] <= s2[i]) printf("%d ", s2[i]-s1[i]);
            else printf("%d ",25-(s1[i]-s2[i]-1));
        }
        printf("\n");
    }
    return;
}

//int main() {
//    ios_base::sync_with_stdio(0); cin.tie(0);
//    distancesOfAlphabet();
//    return 0;
//}
