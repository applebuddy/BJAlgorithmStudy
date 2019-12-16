//
//  상근이의체스판_3076.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2019/12/17.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

// MARK: 상근이의체스판_3076

#if 0
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    int R,C,A,B; cin>>R>>C>>A>>B;
    string line = "", line2 = "";
    string nowStr = ".";
    for(int i=0; i<C; i++) {
        nowStr = nowStr=="." ? "X" : ".";
        for(int j=0; j<B; j++) line += nowStr;
    }
    
    for(int i=0; i<line.length(); i++) line2 += line[i]=='.' ? "X" : ".";
    vector<string> lines = {line, line2};
    
    for(int i=0; i<R; i++) {
        for(int j=0; j<A; j++) printf("%s\n", i%2==0 ? lines[0].c_str() : lines[1].c_str());
    }
    
    return 0;
}
#endif
