//
//  소수경로_1963.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/02/18.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: - 소수경로 1963
// MARK: BFS 문제풀이

#if 0
#include <iostream>
#include <vector>
#include <string>
#include <queue>
using namespace std;
typedef pair<string,int> Pair;

int MAX = 10001;
vector<int> P(MAX,1);

int BFS(string x, string y) {
    vector<int> visit(10001,0);
    queue<Pair> Q;
    Q.push({x,0});
    visit[stoi(x)] = 1;
    
    while(!Q.empty()) {
        Pair Node = Q.front();
        Q.pop();
        string now = Node.first;
        int cnt = Node.second;
        for(int i=0; i<4; i++) {
            string temp = now;
            for(int j=0; j<10; j++) {
                temp[i] = (char)(j+'0');
                int tempNum = stoi(temp);
                if(visit[tempNum]==1 || P[tempNum]==0 || tempNum < 1000) continue;
                visit[tempNum]=1;
                if(temp == y) return cnt+1;
                Q.push({temp, cnt+1});
            }
        }
    }
    
    return 0;
}

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    P[0] = 0;
    P[1] = 0;
    
    for(int i=2; i*i<=MAX; i++)
        if(P[i]==1)
            for(int j=i+i; j<=MAX; j+=i)
                P[j] = 0;
    
    int T; cin>>T;
    while(T--) {
        int A, B; cin>>A>>B;
        if(P[A]==0 || P[B]==0) printf("Impossible\n");
        else printf("%d\n",BFS(to_string(A), to_string(B)));
    }
    
    return 0;
}
#endif
