//
//  백설공주와일곱난쟁이_3040.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 07/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 백설 공주와 일곱 난쟁이_3040

#include <iostream>
#include <algorithm>
using namespace std;

void whiteSnowPrincessAndSevenDwarf() {
    int arr[9] = {0,};
    int sum=0;
    for(int i=0; i<9; i++) {
        cin>>arr[i];
        sum+=arr[i];
    }
    
    bool flag=false;
    for(int i=0; i<8; i++) {
        for(int j=i+1; j<9; j++) {
            if(sum-(arr[i]+arr[j])==100) {
                arr[i]=101;
                arr[j]=101;
                flag=true;
                break;
            }
        }
        if(flag) break;
    }
    
    sort(arr,arr+9);
    for(int i=0; i<7; i++) printf("%d\n",arr[i]);
    return;
}

//int main() {
//    ios_base :: sync_with_stdio(0); cin.tie(0);
//    whiteSnowPrincessAndSevenDwarf();
//    return 0;
//}
