////
////  Set_Array.cpp
////  BackJoonPractice
////
////  Created by Min Kyeong Tae on 07/06/2019.
////  Copyright © 2019 Min Kyeong Tae. All rights reserved.
////
//
//// 음계_2920
//#include <stdio.h>
//
//int main(){
//    int m[8];
//    int isAsc[] = {0,0,0};
//    for(int i=0; i<8; i++){
//        scanf("%d",&m[i]);
//        if(i==0){
//           if(m[i]==1) isAsc[0]=1;
//           else if(m[i]==8) isAsc[1]=1;
//           else isAsc[2]=1;
//        }else{
//            if((isAsc[0]==1 && m[i]-m[i-1]!=1)||(isAsc[1]==1 && m[i]-m[i-1]!=-1)) {
//                printf("mixed\n");
//                return 0;
//            }
//        }
//    }
//    if(isAsc[0]==1) printf("ascending\n");
//    else printf("descending\n");
//    return 0;
//}
//
////// OX퀴즈
////#include <stdio.h>
////
////int main(){
////    int K;
////    scanf("%d",&K);
////
////    while(K--){
////        char a[81];
////        scanf("%s",a);
////        int count=0,score=0;
////        for(int i=0; i<81; i++){
////            if(a[i]=='\0') break;
////
////            if(a[i]=='O') {
////                count++;
////                score+=count;
////            }else{
////                count=0;
////            }
////        }
////        printf("%d\n",score);
////    }
////    return 0;
////}
//
//
////#include <stdio.h>
////
////int main(){
////
////    int a,b,c,num;
////    int arr[10]={0,};
////    scanf("%d %d %d",&a,&b,&c);
////    num=a*b*c;
////
////    while(num>0){
////        int t=num%10;
////        arr[t]++;
////        num/=10;
////    }
////
////    for(int i=0; i<=9; i++){
////        printf("%d\n",arr[i]);
////    }
////
////    return 0;
////}
