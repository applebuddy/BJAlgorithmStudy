//
//  부등호_2629.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2019/12/13.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

// MARK: 부등호_2629

// MARK: - 위상정렬 원리 이용, 빠른 풀이답안
#if 0
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    int K; cin>>K;
    vector<char> KV(K);
    vector<int> minV = {0,1,2,3,4,5,6,7,8,9};
    vector<int> maxV = {9,8,7,6,5,4,3,2,1,0};
    for(int i=0; i<K; i++) cin>>KV[i];
    
    for(int i=0; i<K; i++) {
        for(int j=0; j<K-i; j++) {
            if(KV[j]=='<') {
                if(maxV[j] > maxV[j+1]) swap(maxV[j],maxV[j+1]);
                if(minV[j] > minV[j+1]) swap(minV[j],minV[j+1]);
            } else {
                if(maxV[j] < maxV[j+1]) swap(maxV[j], maxV[j+1]);
                if(minV[j] < minV[j+1]) swap(minV[j], minV[j+1]);
            }
        }
    }
    
    for(int i=0; i<K+1; i++) printf("%d",maxV[i]);
    puts("");
    for(int i=0; i<K+1; i++) printf("%d",minV[i]);
    puts("");
    return 0;
}
#endif

// MARK: - 백트래킹 풀이 답안 (완전탐색이라 속도가 느림)
#if 0
#include <iostream>
#include <vector>
using namespace std;
vector<char> CV(10);
vector<bool> visited(10);
vector<string> SV;

void DFS(int now, int idx, int K, string numStr) {
    if(idx == K) SV.push_back(numStr);
    
    for(int i=0; i<=9; i++) {
        if(!visited[i]) {
            if((CV[idx]=='>' && numStr.back()-'0'<=i) || (CV[idx]=='<' && numStr.back()-'0'>=i)) continue;
            visited[i] = true;
            DFS(i, idx+1, K, numStr + to_string(i));
        }
    }
    
    visited[now] = false;
}

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    int K; cin>>K;
    for(int i=0; i<K; i++) cin>>CV[i];
    for(int i=0; i<=9; i++) {
        visited[i] = true;
        DFS(i, 0, K, to_string(i));
    }
    
    printf("%s\n%s\n",SV.back().c_str(),SV.front().c_str());
    return 0;
}
#endif

// MARK: - 순열사용 시간초과 답안)
#if 0
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
using namespace std;

bool checkUnique(string S) {
    map<int,int> CMP;
    for(int i=0; i<S.length(); i++) {
        if(CMP[S[i]-'0']==1) return false;
        CMP[S[i]-'0']++;
    }
    return true;
}

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    int K; cin>>K;
    vector<int> C(K,0);
    string minS="", maxS="";
    for(int i=0; i<K; i++) {
        char ch; cin>>ch;
        if(ch=='<') C[i]=0;
        else C[i]=1;
    }
    
    for(int i=0; i<=K; i++) minS+=to_string(i);
    for(int i=9; i>=9-K; i--) maxS+=to_string(i);

    long long num = stoi(minS);
    while(1) {
        bool flag = true;
        minS = to_string(num);
        if(minS.length() < K+1) minS = '0' + minS;
        if(checkUnique(minS)) {
            for(int i=0; i<minS.length()-1; i++) {
                if((C[i]==0 && minS[i] > minS[i+1]) || (C[i]==1 && minS[i] < minS[i+1])) {
                    flag = false;
                    break;
                }
            }
        } else flag = false;
        
        if(!flag) num++;
        else break;
    }
    
    long long num2 = stoi(maxS);
    while(1) {
        bool flag = true;
        maxS = to_string(num2);
        if(maxS.length() < K+1) maxS = '0' + maxS;
        if(checkUnique(maxS)) {
            for(int i=0; i<maxS.length()-1; i++) {
                if((C[i]==0 && maxS[i] > maxS[i+1]) || (C[i]==1 && maxS[i] < maxS[i+1])) {
                    flag = false;
                    break;
                }
            }
        } else flag = false;
        
        if(!flag) num2--;
        else break;
    }

    printf("%s\n%s\n",maxS.c_str(), minS.c_str());
    return 0;
}
#endif
