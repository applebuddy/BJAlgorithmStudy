//
//  아기상어_16236.cpp
//  BackjoonAlgorithmPS
//
//  Created by MinKyeongTae on 2021/10/21.
//  Copyright © 2021 MungGu. All rights reserved.
//

#if 0
#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
int N=0;
typedef pair<int, int> Pair;
typedef pair<pair<int, int>, int> PPair;
vector<vector<int>> G;

int dx[] = {0, 0, -1, 1};
int dy[] = {1, -1, 0, 0};
int getDist(Pair pos, Pair pos2) {
    return abs(pos.first - pos2.first) + abs(pos.second - pos2.second);
}

struct FeedInfo {
public:
    Pair pos;
    int size;
    int dist;
    int idx;
    FeedInfo(Pair pos, int size, int dist, int idx) {
        this->pos = pos;
        this->size = size;
        this->dist = dist;
        this->idx = idx;
    }
};

class BShark {
public:
    Pair pos;
    int size;
    int eatCnt;
    BShark(Pair pos, int size) {
        this->pos = pos;
        this->size = size;
        this->eatCnt = 0;
    }
    
    void eatFeed(Pair feedPos) {
        eatCnt++;
        if (eatCnt >= size) {
            eatCnt=0;
            size++;
        }
        G[feedPos.first][feedPos.second] = 0;
        pos = feedPos;
    }
    
    pair<bool, PPair> searchFeed() {
        vector<FeedInfo> goodFeedV;
        queue<PPair> Q;
        Q.push({pos, 0});
        vector<vector<bool>> chkV(N, vector<bool>(N, false));
        chkV[pos.first][pos.second] = true;
        int idx = 0;
        while(!Q.empty()) {
            int x = Q.front().first.first;
            int y = Q.front().first.second;
            int dist = Q.front().second;
            Q.pop();
            for(int i=0; i<4; i++) {
                int nx = x + dx[i];
                int ny = y + dy[i];
                if(nx < 0 || ny < 0 || nx >= N || ny >= N) continue;
                if(G[nx][ny] > this->size) continue;
                if(chkV[nx][ny]) continue;
                chkV[nx][ny] = true;
                if(G[nx][ny] > 0 && G[nx][ny] != 9 && G[nx][ny] < this->size) {
                    goodFeedV.push_back(FeedInfo({nx, ny}, G[nx][ny], dist+1, idx));
                    idx++;
                }
                Q.push({{nx, ny}, dist+1});
            }
        }

        if ((int)goodFeedV.size() == 0) return {false, {{-1, -1}, 0}};
        sort(goodFeedV.begin(), goodFeedV.end(), [](const FeedInfo &a, const FeedInfo & b) {
            return (a.dist < b.dist) ||
            (a.dist == b.dist && (a.pos.first < b.pos.first || (a.pos.first == b.pos.first && a.pos.second < b.pos.second)));
        });
        return {true, {goodFeedV[0].pos, goodFeedV[0].dist}};
    }
};

BShark *bShark;

int main() {
    ios_base :: sync_with_stdio(); cin.tie(0);
    cin>>N;
    G = vector<vector<int>>(N, vector<int>(N, 0));
    Pair bsharkPos = {0, 0};
    int feedCnt = 0;
    for(int i=0; i<N; i++)
        for(int j=0; j<N; j++) {
            cin>>G[i][j];
            if(G[i][j] == 9) {
                bsharkPos = {i, j};
                G[i][j] = 0;
            }
            else if(G[i][j] != 0 && G[i][j] != 9) {
                feedCnt++;
            }
        }
    
    bShark = new BShark(bsharkPos, 2);
    int time=0;
    while (true) {
        if (feedCnt == 0) break;
        G[bShark->pos.first][bShark->pos.second] = 0;
        pair<bool, PPair> searchInfo = bShark->searchFeed();
        if (!searchInfo.first) break;
        else {
            Pair fdPos = searchInfo.second.first;
            int usedTime = searchInfo.second.second;
            time += usedTime;
            bShark->eatFeed(fdPos);
            feedCnt--;
        }
    }

    printf("%d\n", time);
    delete bShark;
}
#endif
