
// MARK: - 연구소3 17142
// MARK: BFS C++ 문제풀이

#if 0
#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
typedef pair<int,pair<int,int>> PPair;
typedef pair<int,int> Pair;

int dx[] = {0,0,-1,1};
int dy[] = {-1,1,0,0};

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    int N, M; cin>>N>>M;
    vector<vector<int>> G(N, vector<int>(N, 0));
    vector<Pair> PV;
    int AAns = 2e9;
    bool good = false;
    int Cnt = 0;
    
    for(int i=0; i<N; i++) {
        for(int j=0; j<N; j++) {
            cin>>G[i][j];
            if(G[i][j] == 2) {
                PV.push_back({i,j});
            }
            else if(G[i][j] == 0) Cnt++;
        }
    }
    
    vector<int> perm(PV.size(), 0);
    for(int i=(int)perm.size()-M; i<(int)perm.size(); i++) {
        perm[i] = 1;
    }
    
    do {
        queue<PPair> Q;
        vector<vector<int>> tG = G;
        int cnt = Cnt;
        int Ans = 0;
        for(int i=0; i<perm.size(); i++)
            if(perm[i] == 1) {
                tG[PV[i].first][PV[i].second] = 3;
                Q.push({0,{PV[i].first, PV[i].second}});
            }

        
        while(!Q.empty()) {
            auto node = Q.front();
            int x = node.second.first;
            int y = node.second.second;
            int sec = node.first;
            Q.pop();
            for(int i=0; i<4; i++) {
                int nx = x + dx[i];
                int ny = y + dy[i];
                if(nx<0 || ny<0 || nx>=N || ny>=N) continue;
                if(tG[nx][ny]==1 || tG[nx][ny]==3) continue;
                if(tG[nx][ny]==0) {
                    cnt--;
                    Ans = sec + 1;
                }
                
                tG[nx][ny] = 3;

                if(cnt == 0) break;
                Q.push({sec+1,{nx,ny}});
            }
            if(cnt == 0) break;
        }

        if(cnt==0) {
            good = true;
            AAns = AAns > Ans ? Ans : AAns;
        }
    } while(next_permutation(perm.begin(), perm.end()));
    
    
    printf("%d\n", good ? AAns : -1);
    return 0;
}
#endif
