
// MARK: - 연구소 14502
// MARK: BFS C++ 문제풀이

#if 0
#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;
typedef pair<int,int> Pair;

int dx[] = {0,0,-1,1};
int dy[] = {-1,1,0,0};

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    int N,M; cin>>N>>M;
    vector<vector<int>> G(N, vector<int>(M,0));
    vector<Pair> PV;
    queue<Pair> Q;
    int Cnt = 0;
    int Ans = 0;
    
    for(int i=0; i<N; i++) {
        for(int j=0; j<M; j++) {
            cin>>G[i][j];
            if(G[i][j]==0) {
                PV.push_back({i,j});
                Cnt++;
            } else if(G[i][j]==2) Q.push({i,j});
        }
    }
    
    Cnt -= 3;
    
    int pvLen = (int)PV.size();
    vector<int> Perm(pvLen, 0);
    for(int i=pvLen-3; i<pvLen; i++) {
        Perm[i] = 1;
    }
    
    do {
        vector<vector<int>> tG = G;
        queue<Pair> tQ = Q;
        int cnt = Cnt;
        
        for(int i=0; i<pvLen; i++) {
            if(Perm[i]==1) tG[PV[i].first][PV[i].second] = 1;
        }
        
        while(!tQ.empty()) {
            auto node = tQ.front();
            tQ.pop();
            int x = node.first;
            int y = node.second;
            for(int i=0; i<4; i++) {
                int nx = x + dx[i];
                int ny = y + dy[i];
                if(nx<0 || ny<0 || nx >= N || ny >= M) continue;
                if(tG[nx][ny]!=0) continue;
                tG[nx][ny] = 2;
                cnt--;
                tQ.push({nx,ny});
            }
            if(cnt==0) break;
        }
        Ans = Ans < cnt ? cnt : Ans;
    } while(next_permutation(Perm.begin(), Perm.end()));
    
    printf("%d\n", Ans);
    return 0;
}
#endif
