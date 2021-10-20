
// MARK: - 연구소2 17141
// MARK: BFS C++ 문제풀이

#if 0
#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

typedef pair<int,int> Pair;

int dx[] = {0,0,-1,1};
int dy[] = {-1,1,0,0};

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    int N, M; cin>>N>>M;
    vector<vector<int>> G(N, vector<int>(N,0));
    vector<vector<int>> T(N, vector<int>(N,0));
    vector<Pair> PV;
    int Cnt = 0, Ans = 2e9;
    
    for(int i=0; i<N; i++) {
        for(int j=0; j<N; j++) {
            cin>>G[i][j];
            if(G[i][j]==2) PV.push_back({i,j});
            else if(G[i][j]==0) {
                Cnt++;
            }
        }
    }
    
    int pvLen = (int)PV.size();
    Cnt += pvLen-M;
    
    vector<int> Perm(pvLen, 0);
    for(int i=pvLen-M; i<pvLen; i++) Perm[i]=1;
    
    do {
        vector<vector<int>> tG = G;
        vector<vector<int>> tT = T;
        queue<Pair> Q;
        int cnt = Cnt;
        int time = 0;
        
        for(int i=0; i<pvLen; i++) {
            if(Perm[i]==1) Q.push({PV[i].first, PV[i].second});
            else tG[PV[i].first][PV[i].second]=0;
        }
        
        while(!Q.empty()) {
            auto node = Q.front();
            Q.pop();
            int x = node.first;
            int y = node.second;
            for(int i=0; i<4; i++) {
                int nx = x + dx[i];
                int ny = y + dy[i];
                if(nx<0 || ny<0 || nx>=N || ny>=N) continue;
                if(tG[nx][ny] != 0) continue;
                tG[nx][ny] = 2;
                cnt--;
                tT[nx][ny] = tT[x][y] + 1;
                time = tT[nx][ny];
                Q.push({nx,ny});
            }
            if(cnt==0) break;
        }
        if(cnt==0) {
            Ans = time < Ans ? time : Ans;
        }
    } while(next_permutation(Perm.begin(), Perm.end()));
    
    printf("%d\n",Ans == 2e9 ? -1 : Ans);
    return 0;
}
#endif
