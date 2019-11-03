//
//  단어뒤집기_9093.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 03/11/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 9093
#if 0
#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    int T; cin>>T;
    cin.ignore();
    while(T--) {
        string S="";
        string temp="";
        vector<string> Ans;
        getline(cin, S, '\n');
        stringstream ss(S);
        
        while(ss >> temp) {
            reverse(temp.begin(), temp.end());
            Ans.push_back(temp);
        }
        
        for(int i=0; i<Ans.size(); i++) {
            printf("%s",Ans[i].c_str());
            if(i!=Ans.size()-1) printf(" ");
        }
        puts("");
    }
    return 0;
}
#endif
