//
//  부등호_2529.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2019/12/13.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

// 풀이 실패, DFS 풀이 준비 
//#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>
//#include <cmath>
//#include <map>
//using namespace std;
//
//int main() {
//    ios_base :: sync_with_stdio(0); cin.tie(0);
//    int K; cin>>K;
//    vector<char> CV(K);
//    vector<int> C(K,0);
//    vector<int> rC(K,0);
//    string S = "0123456789";
//    string rS = "9876543210";
//    string minS="", maxS="";
//    int cnt=0, rCnt=0;
//    for(int i=0; i<K; i++) {
//        char ch; cin>>ch;
//        CV[i]=ch;
//        if(ch=='<') {
//            cnt--;
//            C[i]= cnt;
//        }
//        else {
//            cnt++;
//            C[i]=cnt;
//        }
//    }
//
//    int idx=0;
//    for(int i=K-1; i>=0; i--) {
//        if(CV[i]=='>') {
//            rCnt--;
//            rC[i] = rCnt;
//        }
//        else {
//            rCnt++;
//            rC[i] = rCnt;
//        }
//        idx++;
//    }
//
//    // 2 3 2 1 2 1 0 1 0
//
//    for(int i=0; i<C.size(); i++) {
//        int idx = min(max(0,C[i]),(int)S.length()-1);
//        minS+=S[idx];
//        S.erase(S.begin()+idx,S.begin()+idx+1);
//    }
//    minS+=S.front();
//
//    for(int i=0; i<rC.size(); i++) {
//        int idx = min(max(0,rC[i]),(int)rS.length()-1);
//        maxS+=rS[idx];
//        rS.erase(rS.begin()+idx,rS.begin()+idx+1);
//    }
//    maxS+=rS.front();
//
//    printf("%s\n%s\n",maxS.c_str(),minS.c_str());
//    return 0;
//}

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
