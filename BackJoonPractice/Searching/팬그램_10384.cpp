//
//  팬그램_10384.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 27/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 팬그램_10384
#if 0
#include <iostream>
#include <unordered_map>
using namespace std;

void thePangram() {
    int T; cin>>T;
    cin.ignore();
    for(int i=1; i<=T; i++) {
        string S="";
        unordered_map<char,int> UMP;
        getline(cin, S, '\n');
        printf("Case %d: ",i);
        for(auto s: S) {
            if((s>='a' && s<='z') || (s>='A' && s<='Z')) UMP[tolower(s)]++;
        }
        int minX=100000000;
        for(auto m: UMP) minX = minX > m.second ? m.second : minX;
        if(minX==0 || UMP.size()<26) printf("Not a pangram\n");
        else if(minX==1) printf("Pangram!\n");
        else if(minX==2) printf("Double pangram!!\n");
        else printf("Triple pangram!!!\n");
    }
    return;
}

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    thePangram();
    return 0;
}
#endif
