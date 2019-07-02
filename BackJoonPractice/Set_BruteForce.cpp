//
//  Set_BruteForce.cpp
//  BackJoonPractice
//
//  Created by Min Kyeong Tae on 02/07/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

// 퇴사_14501 퇴사문제 해결 필요
#include <stdio.h>
int time[16]={0,};
int price[16]={0,};
int MAX=0;
int N;
void DFS(int Start, int Price){
    if(MAX<Price) MAX=Price;
    for(int i=Start; i<N+1; i++){
        if(time[i]+i<=N+1){
            DFS(i+time[i],Price+price[i]);
        }
    }
    return;
}

int main(){
    scanf("%d",&N);
    for(int i=1; i<=N; i++) scanf("%d %d",&time[i],&price[i]);
    DFS(1,0);
    printf("%d\n",MAX);
    return 0;
}

//// 분해합
//#include <stdio.h>
//int main(){
//    int N; scanf("%d",&N);
//    int Ans=0;
//    for(int i=1; i<N; i++){
//        int t=i, veri=0;
//        while(t>0){
//            veri+=t%10;
//            t/=10;
//        }
//        if(veri+i==N) {
//            Ans=i;
//            printf("%d\n",Ans);
//            return 0;
//        }
//    }
//    printf("%d\n",Ans);
//    return 0;
//}
