//
//  PracticeBoard.cpp
//  BackJoonPractice
//
//  Created by Min Kyeong Tae on 04/06/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

//// 더하기 사이클_1110
#include <stdio.h>

int main(){
    int N,n1,n2,ans=0;
    scanf("%d",&N);
    n1=N;
    n2=N;
    while(1){
        int sum=0;
        while(n2>0){
            sum+=n2%10;
            n2/=10;
        }
        n2=(n1%10)*10+sum%10;
        ans++;
        if(N==n2) break;
        else n1=n2;
    }
    
    printf("%d\n",ans);
    return 0;
}

//// 평균은 넘겠지
//#include <stdio.h>
//#include <vector>
//using namespace std;
//int main(){
//    int C;
//    scanf("%d",&C);
//    while(C--){
//        int t,count=0;
//        double td,cd;
//        double sum=0;
//        double avg=0;
//        scanf("%d",&t);
//        vector<double> v(t);
//        for(int i=0; i<t; i++){
//            scanf("%lf",&v[i]);
//            sum+=v[i];
//        }
//        td=t;
//        avg=sum/td;
//        for(int i=0; i<t; i++){
//            if(avg<v[i]) count++;
//        }
//
//        cd=count;
//        avg=(cd/td)*100;
//        printf("%.3lf\%%\n",avg);
//    }
//    return 0;
//}

//// 시험망친 세준이의 평균_1546
//#include <stdio.h>
//#include <vector>
//#include <algorithm>
//using namespace std;

//bool comp(const double &a, const double &b){
//    if(a>b) return true;
//    else return false;
//}
//
//int main(){
//    int N;
//    scanf("%d",&N);
//    vector<double> v(N);
//    double sum=0,ans=0;
//    for(int i=0; i<N; i++){
//        scanf("%lf",&v[i]);
//    }
//    sort(v.begin(),v.end(),comp);
//    for(int i=0; i<N; i++){
//        double temp=v[i]/v[0]*100;
//        sum+=temp;
//    }
//    ans=sum/(N);
//    printf("%.6lf\n",ans);
//
//    return 0;
//}


//////X보다 작은 수_10871
//#include <stdio.h>
//#include <algorithm>
//#include <vector>
//using namespace std;
//int main(){
//    int N,X;
//    scanf("%d %d",&N,&X);
//    vector<int> v(N);
//    vector<int> t(N);
//    for(int i=0; i<N; i++){
//        scanf("%d",&v[i]);
//    }
//    t=v;
//    sort(t.begin(), t.end());
//    for(int i=0; i<N; i++){
//        if(X>v[i]) printf("%d ",v[i]);
//    } printf("\n");
//    return 0;
//}

///3개의 수
//#include <stdio.h>
//#include <algorithm>
//#include <cmath>
//using namespace std;
//int main(){
//    int a[3];
//    for(int i=0; i<3; i++){
//        scanf("%d",&a[i]);
//    }
//    sort(a,a+3);
//    printf("%d",a[1]);
//    return 0;
//}
//int main(){
//    int s;
//    char c;
//    scanf("%d",&s);
//
//    if(s>=90){
//        c='A';
//    }else if(s>=80){
//        c='B';
//    }else if(s>=70){
//        c='C';
//    }else if(s>=60){
//        c='D';
//    }else{
//        c='F';
//    }
//
//    printf("%c\n",c);
//    return 0;
//}
