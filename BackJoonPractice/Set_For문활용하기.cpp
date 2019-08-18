//
//  Set_For문활용하기.cpp
//  BackJoonPractice
//
//  Created by Min Kyeong Tae on 05/06/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

//// A+B - 8_11022
//#include <stdio.h>
//int main(){
//    int T; scanf("%d",&T);
//    for(int i=0; i<T; i++){
//        int a,b; scanf("%d %d",&a,&b);
//        printf("Case #%d: %d + %d = %d\n",i+1,a,b,a+b);
//    }
//    return 0;
//}

//// A+B - 7_11021
//#include <stdio.h>
//int main(){
//    int T; scanf("%d",&T);
//    for(int i=0; i<T; i++){
//        int a,b; scanf("%d %d",&a,&b);
//        printf("Case #%d: %d\n",i+1,a+b);
//    }
//    return 0;
//}

//// A+B -3_10950
//#include <stdio.h>
//int main(){
//    int T; scanf("%d",&T);
//    while(T--){
//        int a,b; scanf("%d %d",&a,&b);
//        printf("%d\n",a+b);
//    }
//    return 0;
//}

//// 빠른 A+B_15552
//#include <stdio.h>
//int main(){
//    int T; scanf("%d",&T);
//    while(T--){
//        int a,b; scanf("%d %d",&a,&b);
//        printf("%d\n",a+b);
//    }
//}
// OR
//#include <iostream>
//using namespace std;
//int main(){
//    ios_base :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
//    int T; cin>>T;
//    for(int i=0; i<T; i++){
//        int a,b; cin>>a>>b;
//        cout<<a+b<<endl;
//    }
//    return 0;
//}




//#include <stdio.h>
//#include <vector>
//using namespace std;
//
//int main(){
//    int N,ans=0;
//    scanf("%d",&N);
//    vector<int> v(N);
//    for(int i=0; i<N; i++){
//        scanf("%1d",&v[i]);
//    }
//    for(auto s : v){
//        ans+=s;
//    }
//    printf("%d\n",ans);
//    return 0;
//}
//
//
////#include <stdio.h>
////
////int main(){
////    int N,ans=0;
////    scanf("%d",&N);
////    for(int i=1; i<=N; i++){
////        ans+=i;
////    }
////    printf("%d\n",ans);
////    return 0;
////}
//
////// 별 찍기 - 4
////#include <stdio.h>
////// y = -x+N+1
////int main(){
////    int N;
////    scanf("%d",&N);
////    for(int i=1; i<=N; i++){
////        for(int j=1; j<=N; j++){
////            if(i <= j) printf("*");
////            else printf(" ");
////        }
////        printf("\n");
////    }
////    return 0;
////}
//
////// 별 찍기 - 3_2440
////#include <stdio.h>
////// y = -x+N+1
////int main(){
////    int N;
////    scanf("%d",&N);
////    for(int i=1; i<=N; i++){
////        for(int j=1; j<=N; j++){
////            if(-i+N+1 >= j) printf("*");
////            else break;
////        }
////        printf("\n");
////    }
////    return 0;
////}
//
////// 별 찍기 - 2_2439
////#include <stdio.h>
////// y = -x+N
////int main(){
////    int N;
////    scanf("%d",&N);
////    for(int i=1; i<=N; i++){
////        for(int j=1; j<=N; j++){
////            if(-i+N < j) printf("*");
////            else printf(" ");
////        }
////        printf("\n");
////    }
////    return 0;
////}
//
////// 별 찍기 - 1_2438
////#include <stdio.h>
////
////int main(){
////    int N;
////    scanf("%d",&N);
////    for(int i=0; i<N; i++){
////        for(int j=0; j<=i; j++){
////            printf("*");
////        }
////        printf("\n");
////    }
////    return 0;
////}
//
//
////// 구구단_2739
////#include <stdio.h>
////
////int main(){
////    int N;
////    scanf("%d",&N);
////    for(int i=1; i<=9; i++){
////        printf("%d * %d = %d\n",N,i,N*i);
////    }
////    return 0;
////}
//
////// 기찍_2742
////#include <stdio.h>
////
////int main(){
////    int N;
////    scanf("%d",&N);
////    for(int i=N-1; i>=0; i--){
////        printf("%d\n",i+1);
////    }
////    return 0;
////}
//
////// N찍기_2741
////#include <stdio.h>
////
////int main(){
////    int N;
////    scanf("%d",&N);
////    for(int i=0; i<N; i++){
////        printf("%d\n",i+1);
////    }
////    return 0;
////}
