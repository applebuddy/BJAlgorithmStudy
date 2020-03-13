//
//  로봇청소기_14503.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/03/01.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: - 로봇청소기 14503
// MARK: Simulation C++ 문제풀이

#if 1
#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> G(51, vector<int>(51,0));
int N, M, Ans=0;
int dx[] = {-1,0,1,0};
int dy[] = {0,1,0,-1};

struct Robot {
    int posX = 0;
    int posY = 0;
    int dir = 0;
    
    Robot(int x, int y, int dir) {
        this->posX = x;
        this->posY = y;
        this->dir = dir;
    }
    
    void cleanPlace() {
        if(G[posX][posY]==0) {
            G[posX][posY] = 2;
            
//            printf("Clean %d,%d\n",posX,posY);
//            for(int i=0; i<N; i++) {
//                for(int j=0; j<M; j++) {
//                    printf("%d ",G[i][j]);
//                }
//                puts("");
//            }
            
            Ans++;
        }
    }
    
    bool checkPlace() {
        int nd = dir;
        for(int i=0; i<4; i++) {
            nd--;
            if(nd<0) nd=3;
            int nx = posX + dx[nd];
            int ny = posY + dy[nd];
            if(nx<0 || ny<0 || nx>=N || ny>=M || G[nx][ny]>=1) continue;
            movePlace(nx, ny, nd);
            return true;
        }
        return false;
    }
    
    void movePlace(int x, int y, int d) {
        this->posX = x;
        this->posY = y;
        this->dir = d;
    }
    
    bool moveRear() {
        int nx = posX - dx[dir];
        int ny = posY - dy[dir];
        if(nx<0 || ny<0 || nx>=N || ny>=M || G[nx][ny]==1) return false;
        movePlace(nx, ny, dir);
        return true;
    }
};

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    cin>>N>>M;
    int X, Y, D; cin>>X>>Y>>D;
    Robot robot = Robot(X,Y,D);
    
    for(int i=0; i<N; i++) {
        for(int j=0; j<M; j++) {
            cin>>G[i][j];
        }
    }
    
    while(1) {
        robot.cleanPlace();
        if(!robot.checkPlace()) {
            if(!robot.moveRear()) {
                return !printf("%d\n",Ans);
            }
        }
    }
    
    return 0;
}
#endif

//    3 3
//    1 1 1
//    0 0 0
//    0 0 0
//    0 0 0
