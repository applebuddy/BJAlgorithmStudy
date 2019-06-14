//
//  5_DynamicP_1,2,3더하기.cpp
//  BackJoonPractice
//
//  Created by Min Kyeong Tae on 27/05/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

#include <iostream>
#include <vector>
#define endl "\n"
using namespace std;

vector<int> d(12,0);
vector<int> ans;
int DP(int n){
    if(n==0) return 1; // ★공집합도 하나의 경우의 수이다.
    if(n==1) return 1;
    if(n==2) return 2;
    if(n==3) return 4;
    if(d[n]>0) return d[n];
    
    d[n]=DP(n-1)+DP(n-2)+DP(n-3);
    return d[n];
}

int main(){
    ios_base :: sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,t,answer=0;
    cin >> t;
    
    while(t--){
        cin >> n;
        answer=DP(n);
        ans.push_back(answer);
    }
    
    for(auto a : ans){
        cout << a << endl;
    }
    return 0;
}
