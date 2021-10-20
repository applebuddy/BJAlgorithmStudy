//
//  5_DynamicP_1로만들기_1463.cpp
//  BackJoonPractice
//
//  Created by Min Kyeong Tae on 27/05/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

#include <iostream>
#include <cmath>

int d[1000001];
int DP(int x){
    if(x==1) return 0;
    if(d[x]>0) return d[x];
    int t1=99999999,t2=99999999;
    d[x]=DP(x-1)+1;
    if(x%2==0){
        t1=DP(x/2)+1;
    }
    if(x%3==0){
        t2=DP(x/3)+1;
    }
    d[x]=fmin(d[x],fmin(t1,t2));
    return d[x];
}

int main(){
    int X,answer=0;
    scanf("%d",&X);
    answer=DP(X);
    printf("%d\n",answer);
    return 0;
}
