//
//  Set_LCD,GCD.cpp
//  BackJoonPractice
//
//  Created by Min Kyeong Tae on 07/06/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

// 링_3036
#include <stdio.h>

int a[101];

int GCD(int a, int b){
    if(b==0) return a;
    else return GCD(b,a%b);
}

int main(){
    int N,f;
    scanf("%d",&N);
    for(int i=0; i<N; i++){
        scanf("%d",&a[i]);
    }
    
    f=a[0];
    for(int i=1; i<N; i++){
        int g=GCD(f,a[i]);
        printf("%d/%d\n",f/g,a[i]/g);
    }
    
    return 0;
}


//// ★검문_2981
//#include <stdio.h>
//#include <vector>
//#include <string.h>
//#include <algorithm>
//using namespace std;
//
//int GCD(int a, int b){
//    if(b==0) return a;
//    else return GCD(b,a%b);
//}
//
//vector<int> ans;
//int a[101];
//int main(){
//    int K;
//    memset(a,0,sizeof(a));
//    scanf("%d",&K);
//    for(int i=0; i<K; i++){
//        scanf("%d",&a[i]);
//    }
//    sort(a,a+K);
//    int g=a[1]-a[0];
//    for(int i=1; i<K; i++){
//        g=GCD(g,a[i]-a[i-1]);
//    }
//
//    for(int i=1; i*i<=g; i++){
//        if(g%i==0){
//            if(i!=1) ans.push_back(i);
//            if(i!=g/i) ans.push_back(g/i);
//        }
//    }
//    sort(ans.begin(), ans.end());
//    for(auto v : ans) printf("%d ",v);
//    return 0;
//}


//// 최대공약수_1850
//#include <iostream>
//#include <cmath>
//#include <string>
//#include <string.h>
//#define endl "\n"
//using namespace std;
//
//long long GCD(long long a, long long b){
//    if(b==0) return a;
//    else return GCD(b,a%b);
//}
//int main(){
//    ios_base :: sync_with_stdio(0);
//    cin.tie(0);
//    cout.tie(0);
//
//    long long a,b,c;
//    string s="";
//    cin >> a >> b;
//    c=GCD(a,b);
//    for(int i=0; i<c; i++){
//        s+='1';
//    }
//    cout << s << endl;
//
//    return 0;
//}

//// 최소공배수_13241
//#include <stdio.h>
//
//long long GCD(long long a, long long b){
//    if(b==0) return a;
//    else return GCD(b,a%b);
//}
//
//long long LCD(const long long &a,const long long &b){
//    return a*b/GCD(a,b);
//}
//
//int main(){
//    long long a,b,l;
//    scanf("%lld %lld",&a,&b);
//    l=LCD(a,b);
//    printf("%lld\n",l);
//}
