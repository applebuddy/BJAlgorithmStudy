//
//  축사배정_2188.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 01/11/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 축사배정_2188
//  MARK: 배열+벡터 혼합 형 복습답안)
#if 0
#include <iostream>
#include <vector>
using namespace std;

int Visit[201] = {false, };
int Cage[201] = {0,};
int Cow[201] = {0,};
vector<int> Pref[201];

bool DFS(int cowNum) {
    Visit[cowNum]=true;
    for(auto &pref: Pref[cowNum]) {
        int selectedCage = Cage[pref];
        if(selectedCage==0 || (!Visit[selectedCage] && DFS(selectedCage))) {
            Cow[cowNum] = pref;
            Cage[pref] = cowNum;
            return true;
        }
    }
    return false;
}

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    int N,M; cin>>N>>M;
    int Ans=0;
    for(int i=1; i<=N; i++) {
        int T; cin>>T;
        for(int j=0; j<T; j++) {
            int interest; cin>>interest;
            Pref[i].push_back(interest);
        }
    }
    
    for(int i=1; i<=N; i++) {
        if(Cow[i]!=0) continue;
        if(DFS(i)) {
            fill(begin(Visit), begin(Visit)+N+1, false);
            Ans++;
        }
    }
    
    printf("%d\n",Ans);
    
    return 0;
}
#endif

/// MARK: - 축사배정 통과 답안)
#if 0
#include <iostream>
#include <vector>
#define MAX 201
using namespace std;

vector<int> COW(201,0);
vector<int> CAG(201,0);
vector<int> VISIT(201,false);
vector<int> Interest[201];

bool dfs(int cowNumber) {
    VISIT[cowNumber]=true;
    
    for(auto &interest: Interest[cowNumber]) {
        int interestShed = CAG[interest];
        if(interestShed==0 || (!VISIT[interestShed] && dfs(interestShed))) {
            COW[cowNumber] = interest;
            CAG[interest] = cowNumber;
            return true;
        }
    }
    return false;
}

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    int Ans=0;
    int N,M; cin>>N>>M;
    for(int i=1; i<=N; i++) {
        int T; cin>>T;
        for(int j=0; j<T; j++) {
            int interest; cin>>interest;
            Interest[i].push_back(interest);
        }
    }
    
    for(int i=1; i<=N; i++) {
        if(COW[i] != 0) continue;
        if(dfs(i)) {
            Ans++;
            fill(VISIT.begin(), VISIT.begin()+N+1,false);
        }
    }
    printf("%d\n",Ans);
    
    return 0;
}
#endif
