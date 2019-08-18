//
//  골드바흐의추측_6588.cpp
//  BackJoonPractice
//
//  Created by Min Kyeong Tae on 20/05/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

// 베르트랑 공준_4948
#include <stdio.h>
#include <vector>
using namespace std;
vector<int> chk(300001,1);
int main(){
    int N=250000;
    chk[0]=0;
    chk[1]=0;
    for(int i=2; i*i<=2*N; i++){
        if(chk[i]==1)
            for(int j=i+i; j<=N; j+=i){
                chk[j]=0;
            }
    }
    while(1){
        int ans=0;
        scanf("%d",&N);
        if(N==0) break;
        
        for(int i=N+1; i<=2*N; i++){
            if(chk[i]==1) {
                ans++;
            }
        }
        printf("%d\n",ans);
    }
    return 0;
}


// 골드바흐의추측_9020
#include <stdio.h>
#include <cmath>
#include <vector>
using namespace std;

int main(){

    vector<bool> c(1000001,true);
    int MAX = 1000000, K;
    c[0]=false;
    c[1]=false;

    for(int i=2; i*i<=MAX; i++){
        if(c[i]==true){
            for(int j=i*i%MAX; j<=MAX; j+=i){
                c[j]=false;
            }
        }
    }

    scanf("%d",&K);

    while(K--){
        int n;
        scanf("%d",&n);
        if(n==0) break;
        vector<int> ans;
        vector<int> chk(1000001,0);
        int minValue=9999999;
        int a=0,b=0;
        for(int i=2; i<=MAX; i++){

            if(chk[i]==1) break;
            if(c[i]){
                int j = n-i;

                if(minValue > i) minValue = min(minValue,j);
                else break;
                if(c[j]){
                    a=i;
                    b=j;
                    chk[j]=1;
                }
            }
        }
        printf("%d %d\n",a,b);
    }
    return 0;
}
