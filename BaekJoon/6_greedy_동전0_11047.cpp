////
////  6_greedy_동전0_11047.cpp
////  BackJoonPractice
////
////  Created by Min Kyeong Tae on 27/05/2019.
////  Copyright © 2019 Min Kyeong Tae. All rights reserved.
////
//
//#include <iostream>
//#include <vector>
//#define endl "\n"
//using namespace std;
//
//int main(){
//    ios_base :: sync_with_stdio(0);
//    cin.tie(0);
//    cout.tie(0);
//    int N,K,ans=0;
//    vector<int> coin;
//    cin >> N >> K;
//    for(int i=0; i<N; i++){
//        int t;
//        cin >> t;
//        coin.push_back(t);
//    }
//    
//    for(int i=coin.size()-1; i>=0; i--){
//        while(K>=coin[i]){
//            K-=coin[i];
//            ans++;
//        }
//        if(K==0) break;
//    }
//    
//    cout << ans << endl;
//    return 0;
//}
