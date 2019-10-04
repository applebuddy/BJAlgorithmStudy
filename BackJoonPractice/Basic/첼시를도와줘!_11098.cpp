//
//  첼시를도와줘!_11098.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 04/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 첼시를 도와줘!_11098

#include <iostream>
#include <string>
using namespace std;

void helpTheChelsea() {
    int T; cin>>T;
    
     while(T--) {
         string Ans="";
         int MAX=0;
         int N; cin>>N;
         
         while(N--) {
             int P;
             string name;
             cin>>P>>name;
             if(MAX < P) {
                 MAX = P;
                 Ans = name;
             }
         }
         printf("%s\n",Ans.c_str());
     }
    return;
}

//int main() {
//    ios_base :: sync_with_stdio(0); cin.tie(0);
//    helpTheChelsea();
//    return 0;
//}
