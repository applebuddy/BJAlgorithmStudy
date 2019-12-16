//
//  Set_수학.cpp
//  BackJoonPractice
//
//  Created by Min Kyeong Tae on 07/06/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

//// 초콜릭 자르기_2163 (★DP 입문문제)
//#include <stdio.h>
//int main(){
//    int N,M;
//    scanf("%d %d",&N,&M);
//    printf("%d\n",N*M-1); // (M-1)+(N-1)*M == M-1+N*M-M == N*M-1
//    return 0;
//}

//// 심부름 가는 길_5584
//#include <stdio.h>
//int main(){
//    int sum=0;
//    for(int i=0; i<4; i++) {
//        int n;
//        scanf("%d",&n);
//        sum+=n;
//    }
//    printf("%d\n%d\n",sum/60,sum%60);
//    return 0;
//}


//// 카이사르 암호_5598
//#include <iostream>
//using namespace std;
//int main(){
//    ios_base :: sync_with_stdio(0); cin.tie(0);
//    string s;
//    cin >> s;
//    for(int i=0; i<s.length(); i++){
//        if((s[i]-3)<'A') s[i]='Z'-('A'-s[i]+3)+1;
//        else s[i]-=3;
//    }
//    printf("%s",s.c_str());
//}

//// 제곱ㄴㄴ수_1016
//#include <iostream>
//#include <vector>
//#include <cmath>
//using namespace std;
//
//vector<bool> isNo(1000001,false);
//int main(){
//    long long min,max,ans=0;
//    cin >> min >> max;
//
//    for(long long i=2; i*i<=max; i++){
//        long long s = min/(i*i);
//        if(s*i*i!=min) s++;
//        for(long long j=s; i*i*j<=max; j++){
//            isNo[i*i*j-min]=true;
//        }
//    }
//
//    for(int i=0; i<max-min+1; i++){
//        if(isNo[i]==false) ans++;
//    }
//    printf("%lld\n",ans);
//    return 0;
//}

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
