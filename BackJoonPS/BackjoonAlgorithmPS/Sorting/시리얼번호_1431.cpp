//
//  시리얼번호_1431.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 30/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 시리얼번호_1431 : Sorting Algorithm Problem

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

void serialNumber() {
    vector<string> SV;
    int T; cin>>T;
    for(int i=0; i<T; i++) {
        string str; cin>>str;
        SV.push_back(str);
    }
    sort(SV.begin(), SV.end(), [](const string &a, const string &b) {
        if(a.length() != b.length()) return a.length() < b.length();
        else {
            int aSum=0, bSum=0;
            for(auto s : a) if(s-'0'<10) aSum+=(s-'0');
            for(auto s : b) if(s-'0'<10) bSum+=(s-'0');
            if(aSum>bSum) return false;
            else if(aSum<bSum
                    ) return true;
        }
        return a<b;
    });
    for(auto v: SV) printf("%s\n",v.c_str());
    return;
}

//int main() {
//    ios_base::sync_with_stdio(0); cin.tie(0);
//    return 0;
//}
