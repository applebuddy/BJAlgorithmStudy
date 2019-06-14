//
//  6_greedy_로프_2217.cpp
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

vector<int> v;
int main(){
    ios_base :: sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int k;
    cin >> k;
    while(k--){
        int t;
        cin >> t;
        v.push_back(t);
    }
    
    sort(v.begin(), v.end(), greater<int>());
    int max=0;
    for(int i=0; i<v.size(); i++){
        if(max < v[i]*(i+1)){
            max=v[i]*(i+1);
        }
    }
    cout << max << endl;
    return 0;
}
