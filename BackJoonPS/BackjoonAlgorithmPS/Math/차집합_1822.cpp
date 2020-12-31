//
//  차집합_1822.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 09/11/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

#if 0
#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int N,M; cin>>N>>M;
    
    vector<int> V;
    map<int,int> MP;
    for(int i=0; i<N; i++) {
        int num; cin>>num;
        MP[num]++;
    }
    for(int i=0; i<M; i++) {
        int num; cin>>num;
        MP[num]--;
    }

    for(auto m: MP) {
        if(m.second==1) V.push_back(m.first);
    }
    
    if(V.empty()) return !printf("0\n");
    for(int i=0; i<V.size(); i++) {
        printf("%d", V[i]);
        if(i!=V.size()-1) printf(" ");
    }
    puts("");
    return 0;
}
#endif
