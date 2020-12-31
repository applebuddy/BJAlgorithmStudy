//
//  최종순위_3665.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/02/09.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: 최종순위
// MARK: - 위상정렬 문제 1차 이해
#if 0
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    int T; cin>>T;
    while(T--) {
        int N; cin>>N;
        vector<int> G(N+1,0);
        vector<vector<int>> Matrix(N+1, vector<int>(N+1));
        vector<int> Rank(N+1,0);
        
        // 1) 순위를 입력받는다.
        for(int i=1; i<=N; i++) cin>>G[i];
        // 2) 각 팀 별 순위 정보모음을 입력받고 인접행렬에 기록한다. 위상정렬을 준비한다.
        for(int i=1; i<=N-1; i++) {
            for(int j=i+1; j<=N; j++) {
                Matrix[G[i]][G[j]]=1;
                Rank[G[j]]++;
            }
        }
        
        int t; cin>>t;
        
        // 순위가 바뀐 두팀의 정보를 스왑한다.
        while(t--) {
            int A,B; cin>>A>>B;
            if(!Matrix[A][B]) {
                Matrix[A][B] = 1;
                Matrix[B][A] = 0;
                Rank[B]++; Rank[A]--;
            } else {
                Matrix[B][A] = 1;
                Matrix[A][B] = 0;
                Rank[A]++; Rank[B]--;
            }
        }
        
        queue<int> Q;
        vector<int> Ans;
        // 만약 특정 팀에대한 정보가 존재하지 않는다면 큐에 미리 넣는다. 여기서 한개를 초과해서 큐 에 들어가면 모호한 팀이 둘이상이 되므로 ? 를 출력한다.
        for(int i=1; i<=N; i++) {
            if(!Rank[i]) Q.push(i);
        }
        
        // 큐에 미리 들어간 값들은 정답 값에 사전에 추가한다.
        while(!Q.empty()) {
            if(Q.size()>1) return !printf("?\n");
            
            int cur = Q.front();
            Q.pop();
            Ans.push_back(cur);
            
            // 1번팀 부터해서 관계를 순회하며 위상정렬을 수행한다.
            for(int i=1; i<=N; i++) {
                if(Matrix[cur][i]==1) {
                    Rank[i]--;
                    if(!Rank[i]) Q.push(i);
                }
            }
        }
        
        // Ans의 값이 n개로 들어맞을 경우 해당 배열을 출력
        if(Ans.size()==N) {
            for(auto &v: Ans) printf("%d ",v);
            puts("");
        } else {
            // Ans에 적절한 정렬이 수행되지 않았다면 IMPOSSIBLE 출력
            puts("IMPOSSIBLE");
        }
    }
    return 0;
}
#endif


// MARK: - 문제풀이
#if 0
#include <iostream>
#include <string.h>
#include <queue>
#include <vector>
using namespace std;

int tc, n, m, a, b;
int mat[501][501], order[501], in[501];

int main() {
    scanf("%d", &tc);
    while(tc--) {
        memset(mat, 0, sizeof(mat));
        memset(in, 0, sizeof(in));
        
        scanf("%d", &n);
        // 순위를 입력받는다.
        for(int i=1; i<=n; i++) scanf("%d", &order[i]);
        
        // 각 팀 별 순위 정보모음을 입력받고 인접행렬에 기록한다. 위상정렬을 준비한다.
        for(int i=1; i<=n; i++) {
            for(int j=i+1; j<=n; j++) {
                mat[order[i]][order[j]] = 1;
                in[order[j]]++;
            }
        }
        
        scanf("%d",&m);
        // 순위가 바뀐 두팀의 정보를 스왑한다.
        for(int i=0; i<m; i++) {
            scanf("%d %d",&a,&b);
            if(mat[a][b]) {
                mat[a][b] = 0;
                mat[b][a] = 1;
                in[b]--; in[a]++;
            }
            else {
                mat[b][a] = 0;
                mat[a][b] = 1;
                in[a]--; in[b]++;
            }
        }
        
        // 만약 특정 팀에대한 정보가 존재하지 않는다면 큐에 미리 넣는다. 여기서 한개를 초과해서 큐 에 들어가면 모호한 팀이 둘이상이 되므로 ? 를 출력한다.
        queue<int> Q;
        for(int i=1; i<=n; i++) {
            if(!in[i]) Q.push(i);
        }
        
        bool certain = true;
        vector<int> Ans;
        while(!Q.empty()) {
            if(Q.size() > 1) {
                certain = false;
                break;
            }
            
            int cur = Q.front();
            Q.pop();
            Ans.push_back(cur);
            // 큐에 미리 들어간 값들은 정답 값에 추가한다.
            
            // 1번팀 부터해서 관계를 순회하며 위상정렬을 수행한다.
            for(int next=1; next<=n; next++) {
                if(mat[cur][next]) {
                    in[next]--;
                    if(!in[next]) Q.push(next);
                }
            }
        }
        
        // 초기 큐에 2개이상 들어갔을 경우 "?"
        if(!certain) puts("?");
        else if(Ans.size() == n) { // Ans의 값이 n개로 들어맞을 경우 해당 배열을 출력
            for(auto &v: Ans) printf("%d ",v);
            puts("");
        } else { // Ans에 적절한 정렬이 수행되지 않았다면 IMPOSSIBLE 출력
            puts("IMPOSSIBLE");
        }
    }
    return 0;
}
#endif
