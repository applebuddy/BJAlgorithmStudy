//
//  적어도대부분의배수.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 01/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 적어도 대부분의 배수

#include <iostream>
using namespace std;

int atLeastMostMultiple() {
    int arr[5];
    for(int i=0; i<5; i++) cin>>arr[i];
    
    int Ans=0, cnt;
    for(int i=1;; i++) {
        cnt=0;
        for(int j=0; j<5; j++) {
            if(i%arr[j]==0) {
                cnt++;
                if(cnt>=3) {
                    Ans=i;
                    return Ans;
                }
            }
        }
    }

    return Ans;
}

//int main() {
//    ios_base :: sync_with_stdio(0); cin.tie(0);
//    int Ans = atLeastMostMultiple();
//    printf("%d\n",Ans);
//    return 0;
//}
