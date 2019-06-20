//
//  Set_규칙찾기.cpp
//  BackJoonPractice
//
//  Created by Min Kyeong Tae on 18/06/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//


// MARK:- 부녀회장이 될테야
#include <stdio.h>
#include <vector>
using namespace std;
int main(){
    int t,answer=0;
    scanf("%d",&t);
    while(t--){
        int a,b;
        scanf("%d %d",&a,&b);
        vector<vector<int>> v(a+1,vector<int>(b+1,0));
        if(a==0) {
            answer=a;
            break;
        } else {
            for(int i=1; i<=b; i++) {
                v[0][i]=i;
            }
            for(int i=1; i<=a; i++){
                int sum=0;
                for(int j=1; j<=b; j++) {
                    sum+=v[i-1][j];
                    v[i][j]=sum;
                    if(i==a && j==b) {
                        answer=v[i][j];
                        break;
                    }
                }
            }
        }
        printf("%d\n",answer);
    }
    return 0;
}

//// MARK:- 벌집_2292
////1 -> 2~7(6) -> 8~19(12) -> 20~37(18)
//
//#include <stdio.h>
//int main(){
//    int n;
//    scanf("%d",&n);
//    int answer=1, count=1, rate=6;
//    if(n==count) {
//        printf("%d",answer);
//        return 0;
//    }
//
//    while(count <= n){
//        count+=rate;
//        answer++;
//        if(count>=n) break;
//        else rate+=6;
//    }
//    printf("%d\n",answer);
//    return 0;
//}
