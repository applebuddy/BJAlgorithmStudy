//
//  피터팬프레임_3054.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 11/11/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 피터팬프레임_3054
#if 0
#include <string>
#include <iostream>
#include <vector>
using namespace std;

vector<string> Drawing(5,"");
void draw(char ch, int idx, string S) {
    string codi = "#";
    if(idx%3==0) codi = "*";
    if(idx < S.length()) {
        Drawing[0] += ".." + codi + ".";
        Drawing[1] += "." + codi + "." + codi;
        Drawing[2] += codi + "." + ch + ".";
        Drawing[3] += "." + codi + "." + codi;
        Drawing[4] += ".." + codi + ".";
        if(idx!=1 && idx%3==1) Drawing[2][Drawing[2].length()-4] = '*';
    } else {
        Drawing[0] += ".." + codi + "..";
        Drawing[1] += "." + codi + "." + codi + ".";
        Drawing[2] += codi + "." + ch + "." + codi;
        Drawing[3] += "." + codi + "." + codi + ".";
        Drawing[4] += ".." + codi + "..";
        if(idx!=1 && idx%3==1) Drawing[2][Drawing[2].length()-5] = '*';
    }
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    string S; cin>>S;
    for(int i=0; i<S.length(); i++) {
        draw(S[i], i+1, S);
    }
    
    for(int i=0; i<Drawing.size(); i++) {
        for(int j=0; j<Drawing[i].size(); j++) {
            printf("%c",Drawing[i][j]);
        }
        puts("");
    }
    return 0;
}
#endif
