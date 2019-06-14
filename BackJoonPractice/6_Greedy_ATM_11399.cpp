//
//  6_Greedy_ATM_11399.cpp
//  BackJoonPractice
//
//  Created by Min Kyeong Tae on 27/05/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
#define endl "\n"
using namespace std;

vector<int> p;
int main(){
    ios_base :: sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t,ans=0;
    cin >> t;
    
    while(t--){
        int m;
        cin >> m;
        p.push_back(m);
    }
    
    sort(p.begin(), p.end());
    int prev=0;
    for(auto v : p){
        prev+=v;
        ans+=prev;

    }
    cout << ans << endl;
    return 0;
}
