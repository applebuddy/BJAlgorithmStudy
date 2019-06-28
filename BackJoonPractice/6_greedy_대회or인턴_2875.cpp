//
//  6_greedy_대회or인턴_2875.cpp
//  BackJoonPractice
//
//  Created by Min Kyeong Tae on 28/05/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

#include <iostream>
#define endl "\n"
using namespace std;

int main(){
    ios_base :: sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int N,M,K,ans=0;
    cin >> N >> M >> K;
    
    while(K>0){
        if(N>M*2){
            N--;
        }else{
            M--;
        }
        K--;
    }
    
    while(N>1 && M>0){
        N-=2;
        M-=1;
        ans++;
    }
    
    cout << ans << endl;
    return 0;
}

