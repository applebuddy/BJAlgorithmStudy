//
//  6_greedy_회의실배정_1931.cpp
//  BackJoonPractice
//
//  Created by Min Kyeong Tae on 27/05/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <vector>
#define endl "\n"
using namespace std;

vector<pair<int,int>> sch;

bool comp(const pair<int,int> &a, const pair<int,int> &b){
    if(a.second==b.second) return a.first < b.first; // 종료시간이 같으면 더빨리 시작하는 순 정렬
    else return a.second < b.second; // 그 외는 종료시간이 빠른 순 정렬
}

int main(){
    ios_base :: sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,ans=1;
    cin >> n;
    int t=n;
    while(t--){
        int a,b;
        cin >> a >> b;
        sch.push_back(make_pair(a,b));
    }
    sort(sch.begin(), sch.end(),comp);

    int e=sch[0].second;
    for(int i=1; i<n; i++){
        if(sch[i].first >= e){
            e=sch[i].second;
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}
