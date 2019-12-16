//
//  5_DynamicP_1,2,3더하기3_15988.cpp
//  BackJoonPractice
//
//  Created by Min Kyeong Tae on 27/05/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

#include <iostream>
#define endl "\n"
using namespace std;

int d[1000001]={1,1,2,4};

int DP(int n){
    if(d[n]>0) return d[n];
    
    d[n]=((long long)DP(n-1)+DP(n-2)+DP(n-3))%(int)(1e9+9);
    return d[n];
}

int main(){
    ios_base :: sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int k,n;
    
    for(int i=4; i<=1e6; i++){
        DP(i);
    }
    
    cin >> k;
    while(k--){
        cin >> n;
        cout << d[n] << endl;
    }

    return 0;
}
