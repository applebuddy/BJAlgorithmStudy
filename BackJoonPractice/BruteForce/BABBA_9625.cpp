//
//  BABBA_9625.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 07/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

///MARK: - BABBA_9625

#include <iostream>
using namespace std;

void BABBA() {
    int arr[2] = {1,0};
    int K; cin>>K;
    for(int i=0; i<K; i++) {
        int A = arr[0];
        int B = arr[1];
        arr[0]-=(A-B); arr[1]+=A;
    }
    printf("%d %d\n",arr[0],arr[1]);
    return;
}

//int main() {
//    ios_base :: sync_with_stdio(0); cin.tie(0);
//    BABBA();
//    return 0;
//}
