//
//  팰린드롬공장_1053.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 09/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// 팰린드롬 공장_13275
//. * 해결못함. 4%...

//#include <iostream>
//#include <string>
//#include <string.h>
//#include <cmath>
//#define MAX 51
//
//using namespace std;
//
//int PC[MAX][MAX];
//
//int main() {
//    string S; cin>>S;
//    for(int i=0; i<MAX; i++) memset(PC[i],0,sizeof(PC[i]));
//    for(int i=0; i<S.length(); i++) {
//        PC[i][i]=0;
//        if(i!= S.length()-1) PC[i][i+1] = (S[i]==S[i+1]) ? 0 : 1;
//    }
//    
//    for(int T=3; T<=S.length(); T++) {
//        for(int i=0; i<=S.length()-T; i++) {
//            int j=i+T;
//            PC[i][j] = min(PC[i+1][j]+1,min(PC[i][j-1]+1,(S[i]==S[j]) ? PC[i+1][j-1] : PC[i+1][j-1]+1));
//        }
//    }
//    
//    if(S.length()==3) printf("%d\n",(S[0]==S[2]) ? 0 : 1);
//    else printf("%d\n",PC[0][S.length()-1]);
//    return 0;
//}
