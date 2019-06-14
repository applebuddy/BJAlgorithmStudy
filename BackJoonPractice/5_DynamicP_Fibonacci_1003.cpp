//
//  Fibonacci.cpp
//  BackJoonPractice
//
//  Created by Min Kyeong Tae on 16/05/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

typedef pair<int,int> Pair;
Pair *dp;
bool *visited;

Pair getFib(int n){
    
    if(visited[n]==true) return dp[n];
    
    visited[n]=true;
    
    if(n==0){
        dp[n].first++;
        return dp[n];
    }
    else if(n==1){
        dp[n].second++;
        return dp[n];
    }
    else{
        dp[n-1]=getFib(n-1);
        dp[n-2]=getFib(n-2);
        return Pair(dp[n-1].first+dp[n-2].first, dp[n-1].second+dp[n-2].second);
    }
}

int main(){
    int n;
    
    scanf("%d",&n);
    Pair *answer = new Pair[n];
    vector<pair<int,int>> sol(n);

    for(int i=0; i<n; i++){
        int num;
        scanf("%d",&num);
        dp = new Pair[41];
        visited = new bool[41];
        fill_n(visited,41,false);
        fill_n(dp,41,make_pair(0,0));

        answer[i] = getFib(num);
        delete []dp;
        delete []visited;
    }
    for(int i=0; i<n; i++){
        cout << answer[i].first << " " << answer[i].second << "\n";
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
