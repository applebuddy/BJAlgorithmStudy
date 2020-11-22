//
//  main.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/08/24.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
////

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int N, K;
int zeroCnt = 0;
int robotNumber = 10000;
int runningRobot = 0;
int stage = 0;
vector<pair<int, int>> pos = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
vector<vector<int>> G = {{}, {}};

void checkTaskEnding() {
    if(K <= zeroCnt) {
        printf("%d\n", stage);
        exit(0);
    }
}

bool isZero(int index) {
    return G[0][index] % robotNumber == 0 ? true : false;
}

bool isRobot(int index) {
    return G[0][index] >= robotNumber;
}

void putRobot() {
    if(isZero(0)) return;
    G[0][0] += robotNumber - 1;
    runningRobot += 1;
    if(isZero(0)) zeroCnt += 1;
    checkTaskEnding();
}

void dropRobot() {
    if(G[0][N-1] >= robotNumber) {
        G[0][N-1] -= robotNumber;
        runningRobot -= 1;
    }
}

void moveRobot() {
    int idx = N - 2;
    int robotCnt = 0;
    while(idx >= 0) {
        if(robotCnt >= runningRobot) return;
        if(isRobot(idx) && idx < N - 1) {
            int next = idx + 1;
            if(isZero(next) || isRobot(next)) {
                idx -= 1; continue;
            }
            G[0][idx] -= robotNumber;
            G[0][next] -= 1;
            G[0][next] += robotNumber;
            if(isZero(next)) zeroCnt += 1;
            checkTaskEnding();
            robotCnt += 1;
        }
        idx -= 1;
    }
}

void rotate() {
    int rotCnt = 0;
    pair<int, int> cur = {0, 0};
    int dir = 0;
    auto tempG = G;
    
    while(rotCnt < 2 * N) {
        int x = cur.first;
        int y = cur.second;
        int nx = x + pos[dir].first;
        int ny = y + pos[dir].second;
        if(x<0 || x>=2 || y<0 || y>=N
           || nx<0 || nx>=2 || ny<0 || ny>=N) {
            dir = (dir+1)%4; continue;
        }
        tempG[nx][ny] = G[x][y];
        rotCnt += 1;
        cur = {nx, ny};
    }
    G = tempG;
}

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    cin>>N>>K;
    
    for (int i=0; i<2*N; i++) {
        int num; cin>>num;
        if(i < N) G[0].push_back(num);
        else G[1].push_back(num);
    }
    
    reverse(G[1].begin(), G[1].end());
    
    while(K > zeroCnt) {
        stage += 1;
        rotate();
        dropRobot();
        moveRobot();
        dropRobot();
        putRobot();
    }
}
