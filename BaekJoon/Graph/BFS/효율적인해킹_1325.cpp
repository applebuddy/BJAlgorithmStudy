
// MARK: - 효율적인해킹 1325
// MARK: BFS C++ 문제풀이

#if 0
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<int> G[10001];
vector<bool> C(10001,false);
vector<int> Ans(10001,0);
int Max = 0, tMax = 0;


void BFS(int node) {
    queue<int> Q;
    Q.push(node);
    while(!Q.empty()) {
        int now = Q.front();
        Q.pop();
        for(int i=0; i<(int)G[now].size(); i++) {
            int next = G[now][i];
            if(C[next] == true) continue;
            C[next] = true;
            Ans[node]++;
            Q.push(next);
        }
    }
}

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    int N,M; cin>>N>>M;
    for(int i=0; i<M; i++) {
        int A,B; cin>>A>>B;
        G[B].push_back(A);
    }
    
    for(int i=1; i<=N; i++) {
        C[i] = true;
        BFS(i);
        Max = Max < Ans[i] ? Ans[i] : Max;
        C = vector<bool>(10001,false);
    }
    
    for(int i=1; i<=N; i++) {
        if(Ans[i] == Max) {
            printf("%d ",i);
        }
    }
    
    return 0;
}
#endif
