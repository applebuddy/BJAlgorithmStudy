//
//  Set_수학.cpp
//  BackJoonPractice
//
//  Created by Min Kyeong Tae on 07/06/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

// 제곱ㄴㄴ수_1016
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

vector<bool> isNo(1000001,false);
int main(){
    long long min,max,ans=0;
    cin >> min >> max;
    
    for(long long i=2; i*i<=max; i++){
        long long s = min/(i*i);
        if(s*i*i!=min) s++;
        for(long long j=s; i*i*j<=max; j++){
            isNo[i*i*j-min]=true;
        }
    }
    
    for(int i=0; i<max-min+1; i++){
        if(isNo[i]==false) ans++;
    }
    printf("%lld\n",ans);
    return 0;
}

//// 완전제곱수_1977
//#include <stdio.h>
//#include <string.h>
//#include <cmath>
//
//int main(){
//
//    int M,N;
//    int ans[2],num;
//    memset(ans,0,sizeof(ans));
//    scanf("%d %d",&M,&N);
//    int s = sqrt(M);
//    if(s*s < M) s++;
//    ans[1]=s*s;
//    num=s;
//
//    while(num*num<=N){
//        ans[0]+=(num*num);
//        num++;
//    }
//    if(ans[0]==0) printf("%d\n",-1);
//    else for(auto v : ans) printf("%d ",v);
//
//    return 0;
//}
