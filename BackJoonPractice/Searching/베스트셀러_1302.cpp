//
//  베스트셀러_1302.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 29/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 베스트셀러_1302

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_map>
using namespace std;

typedef pair<string,int> Pair;

void bestSeller() {
    int T; cin>>T;
    unordered_map<string, int> UMP;
    vector<Pair> Book;
    vector<string> Ans;
    while(T--) {
        string str; cin>>str;
        UMP[str]++;
    }
    
    for(auto m : UMP) Book.push_back(make_pair(m.first,m.second));
    sort(Book.begin(), Book.end(), [](const Pair &a, const Pair &b) {
        return a.second > b.second;
    });
    
    Ans.push_back(Book[0].first);
    for(int i=1; i<Book.size(); i++) {
        if(Book[0].second == Book[i].second) Ans.push_back(Book[i].first);
    }
    
    sort(Ans.begin(), Ans.end(), [](const string &a, const string &b) {
        if(a.length()==b.length()) return a<b;
        else {
            for(int i=0; i<min(a.length(),b.length()); i++) {
                if(a[i] > b[i]) return false;
            }
        }
        return a.length() < b.length();
    });

    printf("%s\n",Ans[0].c_str());
    return;
}

//int main() {
//    ios_base :: sync_with_stdio(0); cin.tie(0);
//    bestSeller();
//    return 0;
//}
