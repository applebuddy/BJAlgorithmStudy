//
//  요다_5363.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 07/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 요다_5363
#if 0
#include <iostream>
#include <sstream>
#include <vector>
#include <string>
using namespace std;

void theYoda() {
    int T; cin>>T;
    cin.ignore();
    while(T--) {
        vector<string> preLan;
        string lan,temp=""; getline(cin,lan,'\n');
        
        for(stringstream ss(lan); ss>>temp;) {
            if(preLan.size()<2) preLan.push_back(temp);
            else printf("%s ",temp.c_str());
        }
        printf("%s %s\n",preLan[0].c_str(),preLan[1].c_str());
    }
    return;
}
#endif

//int main() {
//    ios_base :: sync_with_stdio(0); cin.tie(0);
//    theYoda();
//    return 0;
//}
