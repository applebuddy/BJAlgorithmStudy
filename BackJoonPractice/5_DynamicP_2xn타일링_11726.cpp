//
//  5_DynamicP_2xn타일링_11726.cpp
//  BackJoonPractice
//
//  Created by Min Kyeong Tae on 27/05/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

#include <iostream>
#include <vector>
#define endl "\n"
using namespace std;
vector<int> d(1001,0);
int DP(int n){
    if(n==1) return 1;
    if(n==2) return 2;
    if(d[n]>0) return d[n];
    
    d[n]=(DP(n-1)+DP(n-2))%10007;
    return d[n];
}

int main(){
    ios_base :: sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,answer=0;
    cin >> n;
    answer=DP(n);
    cout << answer << endl;
    return 0;
}
