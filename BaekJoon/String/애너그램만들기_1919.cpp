//
//  애너그램만들기_1919.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 01/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 애너그램만들기_    1919

#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

void makeAnagram() {
    
    unordered_map<char, int> m1,m2,comp;
    string s1,s2; cin>>s1>>s2;
    int Ans=0;
    for(auto s : s1) m1[s]++;
    for(auto s : s2) m2[s]++;
    for(auto m : m1) {
        Ans += abs(m.second-m2[m.first]);
        m2.erase(m.first);
    }
    
    for(auto m : m2) Ans += abs(m.second-m1[m.first]);
    printf("%d\n",Ans);
    return;
}

//int main() {
//    ios_base :: sync_with_stdio(0); cin.tie(0);
//    makeAnagram();
//    return 0;
//}
