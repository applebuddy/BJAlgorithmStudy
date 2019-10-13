//
//  홀수_2576.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 13/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 홀수_2576

#if 0
#include <iostream>
#define TC 7
using namespace std;

void theOddNumber() {
    int sum = 0;
    int min = 101;
    for(int i=0; i<TC; i++) {
        int N; cin>>N;
        if(N%2==1) {
            sum += N;
            min = min > N ? N : min;
        }
    }
    
    (min>100) ? printf("%d\n",-1) : printf("%d\n%d\n",sum,min);
    return;
}

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    theOddNumber();
    return 0;
}
#endif
