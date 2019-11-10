//
//  단어나누기_1251.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 10/11/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 단어나누기_1251
#if 0
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    string S; cin>>S;
    vector<string> Ans;
    for(int i=1; i<S.length()-1; i++) {
        string temp = S;
        for(int j=i+1; j<S.length(); j++) {
            string one = temp.substr(0,i);
            string two = temp.substr(i,j-i);
            string three = temp.substr(j,temp.length()-j);
            reverse(one.begin(), one.end());
            reverse(two.begin(), two.end());
            reverse(three.begin(), three.end());
            string result = one + two + three;
            Ans.push_back(result);
        }
    }
    
    sort(Ans.begin(), Ans.end());
    printf("%s\n",Ans.front().c_str());
    return 0;
}
#endif
