//
//  Set_정렬하기.cpp
//  BackJoonPractice
//
//  Created by Min Kyeong Tae on 09/06/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

// 통계학_2108
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
    int N;
    scanf("%d",&N);
    vector<int> v(N,0);
    vector<int> cnt(8001,0);
    int ans[4]={0,};
    double sum=0;
    for(int i=0; i<N; i++){
        scanf("%d",&v[i]);
        sum+=v[i];
        cnt[v[i]+4000]++;
    }
    
    int c = *max_element(cnt.begin(), cnt.end()), flag=0;
    for(int i=0; i<8001 && flag<2; i++){
        if(c==cnt[i]){
            ans[2]=i-4000;
            flag++;
        }
    }
    sort(v.begin(), v.end());
    ans[0]=round(sum/(double)N);
    ans[1]=v[N/2];
    ans[3]=v[N-1]-v[0];
    for(int i=0; i<4; i++){
        printf("%d\n",ans[i]);
    }
    return 0;
}

//// 카운팅정렬 사용하기
//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//int main(){
//    int n,count=0;
//    scanf("%d",&n);
//    vector<int> v(10001,0); // 카운팅 벡터
//    for(int i=0; i<n; i++){
//        int a;
//        scanf("%d",&a);
//        v[a]++;
//    }
//    for(int i=0; i<=10000; i++){
//        while(v[i]>0){
//            count++;
//            printf("%d\n",i);
//            v[i]--;
//        }
//        if(count==n) break;
//    }
//    return 0;
//}

//#include <iostream>
//#include <algorithm>
//int a[1000000]={0,};
//using namespace std;
//int main(){
//    int n;
//    scanf("%d",&n);
//
//    for(int i=0; i<n; i++){
//        scanf("%d",&a[i]);
//    }
//    sort(a,a+n);
//    for(int i=0; i<n; i++){
//        printf("%d\n",a[i]);
//    }
//    return 0;
//}
