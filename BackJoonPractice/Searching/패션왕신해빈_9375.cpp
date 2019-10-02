//
//  패션왕신해빈_9375.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 03/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 패션왕신해빈_9375 : Hash Algorithm Problem

#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

void fashionKingHyaebin() {
    int T;
    cin>>T;
    for(int i=0; i<T; i++) {
        int N;
        cin>>N;
        unordered_map<string,int> UMP;
        int Ans=1;
        for(int i=0; i<N; i++) {
            string name,type; cin>>name>>type;
            UMP[type]++;
        }

        for(auto m: UMP) {
            Ans*=(m.second+1);
        }

        cout << Ans-1 << endl;
    }
    return;
}

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
    fashionKingHyaebin();
    return 0;
}
