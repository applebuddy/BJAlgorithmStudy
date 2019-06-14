//
//  6_greedy_문자열_1120.cpp
//  BackJoonPractice
//
//  Created by Min Kyeong Tae on 28/05/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

#include <iostream>
#include <cmath>
#define endl "\n"
using namespace std;

int ans=99;
int main(){
    ios_base :: sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string a,b;
    cin >> a >> b;
    int aLen=(int)a.size(), bLen=(int)b.size();
    for(int i=0; i<=bLen-aLen; i++){
        int t=0;
        for(int j=0; j<aLen; j++){
            if(a[j]!=b[j+i]) t++;
        }
            ans=min(ans,t);
    }
    cout << ans << endl;
    return 0;
}
