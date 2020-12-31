//
//  접미사배열_11656.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 30/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 접미사배열_11656

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

void getAscribingSuffixArray() {
    vector<string> SV;
    string str; cin>>str;
    for(int i=0; i<str.length(); i++) {
        SV.push_back(str.substr(i));
    }
    
    sort(SV.begin(), SV.end(), [](const string &a, const string &b) {
        return a<b;
    });
    
    for(auto v : SV) printf("%s\n",v.c_str());
    return;
}

//int main() {
//    ios_base::sync_with_stdio(0); cin.tie(0);
//    getAscribingSuffixArray();
//    return 0;
//}
