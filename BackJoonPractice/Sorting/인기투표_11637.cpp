//
//  인기투표_11637.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 07/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 인기투표_11637

#include <iostream>
#include <queue>
using namespace std;

typedef pair<int,int> Pair;

class compare {
public:
    template<class T = vector<Pair>>
    bool operator() (T &a, T &b) {
        return a.second < b.second;
    }
};
    
   
void popularityVoting() {
   int T; cin>>T;
   while(T--) {
       int N,sum=0; cin>>N;
       priority_queue<Pair,vector<Pair>,compare> PQ;
       for(int i=0; i<N; i++) {
           int vote; cin>>vote;
           sum+=vote;
           PQ.push({i+1,vote});
       }
       
       Pair topVote = PQ.top();
       PQ.pop();
       if(topVote.second==PQ.top().second) printf("no winner\n");
       else if(topVote.second>sum/2) printf("majority winner %d\n",topVote.first);
       else printf("minority winner %d\n",topVote.first);
   }
   return;
}

//int main() {
//    ios_base :: sync_with_stdio(0); cin.tie(0);
//    popularityVoting();
//    return 0;
//}
