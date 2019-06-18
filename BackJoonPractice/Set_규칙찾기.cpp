//
//  Set_규칙찾기.cpp
//  BackJoonPractice
//
//  Created by Min Kyeong Tae on 18/06/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

// MARK:- 벌집_2292
//1 -> 2~7(6) -> 8~19(12) -> 20~37(18)

#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int answer=1, count=1, rate=6;
    if(n==count) {
        printf("%d",answer);
        return 0;
    }
    
    while(count <= n){
        count+=rate;
        answer++;
        if(count>=n) break;
        else rate+=6;
    }
    printf("%d\n",answer);
    return 0;
}
