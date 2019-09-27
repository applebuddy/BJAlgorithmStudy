//
//  Fibonacci.cpp
//  BackJoonPractice
//
//  Created by Min Kyeong Tae on 16/05/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

#include <iostream>
#include <vector>
#include <string.h>
using namespace std;

typedef pair<int,int> Pair;
bool *chk;
Pair *dp;

Pair go(int n) {
    if(chk[n]==true) return dp[n];
    chk[n]=true;
    if(n==0) {
        dp[n].first++;
        return dp[n];
    }
    else if(n==1) {
        dp[n].second++;
        return dp[n];
    }
    else {
        dp[n].first = go(n-1).first+go(n-2).first;
        dp[n].second = go(n-1).second+go(n-2).second;
        return dp[n];
    }
}

int main() {
    int T;
    scanf("%d",&T);
    vector<Pair> sol;
    
    while(T--) {
        int N;
        chk = new bool[41];
        dp = new Pair[41];
        fill_n(chk, 41, false);
        fill_n(dp, 41, make_pair(0, 0));
        scanf("%d",&N);
        go(N);
        sol.push_back(make_pair(dp[N].first, dp[N].second));
        
        delete []chk;
        delete []dp;
    }
    
    for(auto s : sol) {
        printf("%d %d\n",s.first,s.second);
    }
    return 0;
}

//long long memo[100] = {0,};
//long long getFibonacci(int n){
//    if(n<=1){
//        return n;
//    }
//    
//    if(memo[n]>0) return memo[n];
//    else return memo[n]=getFibonacci(n-1)+getFibonacci(n-2);
//}
//
//int main(){
//    long long answer=0,n;
//    cin >> n;
//    answer = getFibonacci(n);
//    cout << answer << "\n";
//    return 0;
//}
