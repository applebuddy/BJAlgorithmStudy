//
//  지구온난화_5212.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 27/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 지구온난화_5212
//  다도해의 지도는 R*C 크기의 그리드로 나타낼 수 있다. 'X'는 땅을 나타내고, '.'는 바다를 나타낸다.
//  50년이 지나면, 인접한 세 칸 또는 네 칸에 바다가 있는 땅은 모두 잠겨버린다는 사실을 알았다.

//  상근이는 50년 후 지도를 그려보기로 했다. 섬의 개수가 오늘날보다 적어질 것이기 때문에, 지도의 크기도 작아져야 한다. 지도의 크기는 모든 섬을 포함하는 가장 작은 직사각형이다.   50년이 지난 후에도 섬은 적어도 한 개 있다. 또, 지도에 없는 곳, 지도의 범위를 벗어나는 칸은 모두 바다이다.

// 예제 입력)
// 3 10
// ..........
// ..XXX.XXX.
// XXX.......
 
// 예제 출력)
// .XX...X
// XX.....

#include <iostream>
#include <vector>
using namespace std;

typedef pair<int,int> Pair;
int posX[] = {0,0,1,-1};
int posY[] = {1,-1,0,0};

void globalWarming() {
    int N,M; cin>>N>>M;
    vector<vector<char>> MAP(N,vector<char>(M,0));
    for(int i=0; i<N; i++) {
        for(int j=0; j<M; j++) {
            cin >> MAP[i][j];
        }
    }
    
    for(int i=0; i<N; i++) {
        for(int j=0; j<M; j++) {
            if(MAP[i][j]!='X') continue;
            int cnt=0;
            for(int k=0; k<4; k++) {
                int nx = i+posX[k];
                int ny = j+posY[k];
                if(nx<0 || nx>=N || ny>=M || ny<0) cnt++;
                else if(MAP[nx][ny]=='.') cnt++;
                if(cnt>=3) {
                    MAP[i][j]='x';
                    break;
                }
            }
        }
    }
    
    Pair minPos = make_pair(10,10);
    Pair maxPos = make_pair(0,0);
    
    for(int i=0; i<N; i++) {
        for(int j=0; j<M; j++) {
            if(MAP[i][j]=='x') MAP[i][j]='.';
            else if(MAP[i][j]=='X') {
                minPos.first = min(minPos.first,i);
                minPos.second = min(minPos.second,j);
                maxPos.first = max(maxPos.first,i);
                maxPos.second = max(maxPos.second,j);
            }
        }
    }
    
    for(int i=minPos.first; i<=maxPos.first; i++) {
        for(int j=minPos.second; j<=maxPos.second; j++) {
            printf("%c",MAP[i][j]);
        }
        printf("\n");
    }
    
}

//int main() {
//    ios_base::sync_with_stdio(0); cin.tie(0);
//    globalWarming();
//
//    return 0;
//}
