//
//  DynamicP_1로만들기.cpp
//  BackJoonPractice
//
//  Created by Min Kyeong Tae on 22/05/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

#include <iostream>
#include <vector>
#define endl "\n"
using namespace std;

int d[1000001];

int dp(int n){
    if(n==1) return 0;
    if(d[n]>0) return d[n];
    
    d[n]=dp(n-1)+1;
    if(n%2==0){
        int temp = dp(n/2)+1;
        if(d[n]>temp) d[n]=temp;
    }
    else if(n%3==0){
        int temp = dp(n/3)+1;
        if(d[n]>temp) d[n]=temp;
    }
    
    return d[n];
}

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int X;
    cin >> X;
    cout << dp(X) << endl;
    return 0;
}
