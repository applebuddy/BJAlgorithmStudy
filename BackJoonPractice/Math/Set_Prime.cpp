//
//  Set_Prime.cpp
//  BackJoonPractice
//
//  Created by Min Kyeong Tae on 05/06/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//


// 소수_2581
#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> chk(10001,1);
int main(){
    chk[0]=0;
    chk[1]=0;
    vector<int> p;
    int sum=0;
    int M,N;
    scanf("%d %d",&M,&N);
    for(int i=2; i*i<=N; i++){
        if(chk[i]==1)
            for(int j=i*2; j<=N; j+=i){
                chk[j]=0;
            }
    }
    for(int i=M; i<=N; i++){
        if(chk[i]==1) {
            sum+=i;
            p.push_back(i);
        }
    }
    sort(p.begin(), p.end());
    if(sum!=0) printf("%d\n%d\n",sum,p[0]);
    else printf("%d\n",-1);
    return 0;
}
