//
//  TrainPassengers_10269.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 27/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - Train Passengers_10269 : Greedy Algorithm Problem

#include <iostream>
#include <vector>
#include <string>
using namespace std;

string trainPassengers() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    int C,N; cin>>C>>N;
    
    int P=0;
    for(int i=0; i<N; i++) {
        int l,e,r;
        cin >> l >> e >> r;
        if(P-l<0) return "impossible";
        else P-=l;
        
        if(P+e>C) return "impossible";
        else P+=e;
        
        if(P!=C && r!=0) return "impossible";
        if(i==N-1 && (P!=0 || r!=0)) return "impossible";
    }
    return "possible";
}

//int main() {
//    string Ans = trainPassengers();
//    printf("%s\n",Ans.c_str());
//    return 0;
//}
