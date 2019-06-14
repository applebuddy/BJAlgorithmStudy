//
//  6_greedy_신입사원_1946.cpp
//  BackJoonPractice
//
//  Created by Min Kyeong Tae on 07/06/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int K;
    scanf("%d",&K);
    while(K--){
        int N,ans=1;
        scanf("%d",&N);
        vector<pair<int,int>> v;
        
        for(int i=0; i<N; i++){
            int a,b;
            scanf("%d %d",&a,&b);
            v.push_back(make_pair(a,b));
        }
        sort(v.begin(), v.end());
        int top=N;
        for(int i=1; i<N; i++){
            if(top>v[i-1].second) top=v[i-1].second;
                if(v[i].second < top) ans++;
        }
        printf("%d\n",ans);
    }
    return 0;
}
