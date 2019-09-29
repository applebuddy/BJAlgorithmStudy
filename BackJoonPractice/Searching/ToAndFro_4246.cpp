//
//  ToAndFro_4246.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 29/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - To And Fro : Searching Array Algorithm Problem

#include <string>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

/// MARK: toAndFro 통과 답안
void toAndFro() {
    int n;
    while(1) {
        cin>>n;
        if(n==0) break;
        string str; cin>>str;
        vector<vector<char>> V((int)str.length()/n,vector<char>(n,0));
        
        for(int i=n; i<(int)str.length(); i+=(n+n)) {
            reverse(str.begin()+i,str.begin()+i+n);
        }
        
        for(int i=0; i<(int)str.length(); i++) V[i/n][i%n] = str[i];
        for(int i=0; i<n; i++) {
            for(int j=0; j<(int)str.length()/n; j++) {
                printf("%c",V[j][i]);
            }
        }
        printf("\n");
    }
    return;
}

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    toAndFro();
    return 0;
}
