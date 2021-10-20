//
//  경고_3029.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 10/11/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 경고_3029
#if 0
#include <string>
#include <iostream>
using namespace std;

void transformTime(string S, int arr[]) {
    for(int i=0; i<3; i++) arr[i] = stoi(S.substr(3*i,2));
}

bool checkAns(int Ans[]) {
    for(int i=0; i<3; i++) if(Ans[i]!=0) return true;
    return false;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    string S, S2; cin>>S>>S2;
    int arr[3]={0,0,0};
    int arr2[3]={0,0,0};
    int Ans[3]={0,0,0};
    transformTime(S,arr);
    transformTime(S2,arr2);
    if(arr[0]>arr2[0]) arr2[0]+=24;
    for(int i=2; i>=0; i--) {
        if(arr[i] > arr2[i] && i!=0) {
            arr2[i-1]--;
            arr2[i]+=60;
        }
        Ans[i]=arr2[i]-arr[i];
    }
    
    if(!checkAns(Ans)) return !printf("24:00:00\n");
    for(int i=0; i<3; i++) {
        printf("%02d",Ans[i]);
        if(i!=2) printf(":");
    }
    puts("");
    return 0;
}
#endif
