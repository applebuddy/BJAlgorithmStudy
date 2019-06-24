//
//  Set_구현.cpp
//  BackJoonPractice
//
//  Created by Min Kyeong Tae on 24/06/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

// 0 = not cut / 1 = cute
#include <stdio.h>

int main() {
    int T,count=0;
    scanf("%d",&T);
    int t=T;
    while(T--) {
        int n;
        scanf("%d",&n);
        if(n==1) count++;
    }
    if(count>t/2) printf("Junhee is cute!\n");
    else printf("Jujhee is not cute!\n");
    return 0;
}
//// 2007년_1924
//#include <stdio.h>
//#include <string>
//using namespace std;
//int month[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
//string date[7] = {"SUN","MON","TUE","WED","THU","FRI","SAT"};
//int main() {
//    int x,y;
//    int d=0;
//    scanf("%d %d",&x,&y);
//    for(int i=0; i<x-1; i++) {
//        d+=month[i];
//    }
//    d+=y;
//    printf("%s\n",date[d%7].c_str());
//    return 0;
//}

//// 영수증_5565
//#include <stdio.h>
//
//int main() {
//    int ans;
//    scanf("%d",&ans);
//    for(int i=0; i<9; i++){
//        int n;
//        scanf("%d",&n);
//        ans-=n;
//    }
//    printf("%d\n",ans);
//    return 0;
//}

//// 상근날드_5543
//#include <stdio.h>
//#include <cmath>
//int main() {
//    int burger[3] = {0,};
//    int drink[3] = {0,};
//    int minV=9999999;
//    for(int i=0; i<3; i++){
//        scanf("%d",&burger[i]);
//    }
//    for(int i=0; i<2; i++){
//        scanf("%d",&drink[i]);
//        for(int j=0; j<3; j++){
//            minV = fmin(burger[j]+drink[i]-50,minV);
//        }
//    }
//    printf("%d\n",minV);
//    return 0;
//}

//// 10부제_10797
//#include <stdio.h>
//int main() {
//    int t,ans=0;
//    scanf("%d",&t);
//    for(int i=0; i<5; i++) {
//        int n;
//        scanf("%d",&n);
//        if(n==t) ans++;
//    }
//    printf("%d\n",ans);
//    return 0;
//}

//// 팩토리얼_10872
//#include <stdio.h>
//
//int main() {
//    int ans=1;
//    int N;
//    scanf("%d",&N);
//    for(int i=1; i<=N; i++) {
//        ans*=i;
//    }
//    printf("%d\n",ans);
//    return 0;
//}
//// 윷놀이_2490
//#include <stdio.h>
//
//int main() {
//    int count;
//    int T=3;
//    while(T--) {
//        count=0;
//        for(int i=0; i<4; i++){
//            int n;
//            scanf("%d",&n);
//            if(n==0) count++;
//        }
//        printf("");
//        switch (count) {
//            case 0: printf("E\n");
//                break;
//            case 1: printf("A\n");
//                break;
//            case 2: printf("B\n");
//                break;
//            case 3: printf("C\n");
//                break;
//            case 4: printf("D\n");
//            default:
//                break;
//        }
//    }
//    return 0;
//}

//// 평균점수_10039
//
//#include <stdio.h>
//
//int main() {
//    int sum=0;
//    for(int i=0; i<5; i++) {
//        int n;
//        scanf("%d",&n);
//        if(n<40) sum+=40;
//        else sum+=n;
//    }
//    printf("%d",sum/5);
//    return 0;
//}
