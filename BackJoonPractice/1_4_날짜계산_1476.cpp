//
//  1_4_날짜계산_1476.cpp
//  BackJoonPractice
//
//  Created by Min Kyeong Tae on 24/05/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

#include <stdio.h>

int main(){
    int E,S,M;
    int e=1,s=1,m=1;
    int ans = 1;
    scanf("%d %d %d",&E,&S,&M);
    
    while(1){
        if(e==E && s==S && m==M) break;
        e++;
        s++;
        m++;
        ans++;
        if(e>15) e=1;
        if(s>28) s=1;
        if(m>19) m=1;
    }
    
    printf("%d\n",ans);
}

