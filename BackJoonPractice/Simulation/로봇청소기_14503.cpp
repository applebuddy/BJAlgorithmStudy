//
//  로봇청소기_14503.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 01/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// * 아직 못 풀음

//#include <iostream>
//#include <vector>
//using namespace std;
//
//typedef pair<int,int> Pair;
//
//int dirX[4] = {0,1,0,-1};
//int dirY[4] = {1,0,-1,0};
//
//int main() {
//    ios_base::sync_with_stdio(0); cin.tie(0);
//    int N,M; cin>>N>>M;
//    int R,C,D; cin>>R>>C>>D;
//    int Ans=1;
//    
//    vector<vector<int>> Room(N,vector<int>(M,0));
//    vector<vector<int>> CV(N,vector<int>(M,0));
//
//    for(int i=0; i<N; i++) {
//        for(int j=0; j<M; j++) {
//            cin>>Room[i][j];
//        }
//    }
//    CV[R][C]=1;
//    
//    
//    while(1) {
//        
////        printf("CV...\n");
////        for(int i=0; i<N; i++) {
////            for(int j=0; j<M; j++) {
////                printf("%d ",CV[i][j]);
////            }
////            printf("\n");
////        }
////        
////        printf("Room...\n");
////        for(int i=0; i<N; i++) {
////            for(int j=0; j<M; j++) {
////                printf("%d ",Room[i][j]);
////            }
////            printf("\n");
////        }
//
//        // 작동이 끝날 상황인지를 체크하는 isEnd 변수
//        bool isEnd = true;
//        // 우측으로 차례대로 확인을 시작한다.
//        for(int i=0; i<4; i++) {
//            // 확인할 방향을 체크한다.
//            int idx = D+i > 3 ? (D+i)-4 : D+i;
//            int nr = R+dirY[idx];
//            int nc = C+dirX[idx];
//            // 확인할 방향이 범위밖이면 다음 방향을 체크
//            if(nr >= N || nr < 0 || nc >= M || nc < 0) continue;
//            // 이미 청소한 곳이어도 스킵, 다음 방향을 체크
//            if(Room[nr][nc]==1 || CV[nr][nc]==1) continue;
//            
//            // 청소 안된 구역은 청소를 실시하고
//            CV[nr][nc]=1;
//            // 청소 1회 추가
//            Ans++;
//            // 청소한 구역으로 좌표 이동
//            R = nr;
//            C = nc;
//            // 아칙 청소할 여지가 있으므로 isEnd = false, 빠져나간다.
//            isEnd = false;
//            D = i;
//            break;
//        }
//        
//        if(isEnd==true) {
//            int br = R-dirX[D];
//            int bc = C-dirY[D];
//            // 후방으로 이동했을 때, 범위를 벗어난다면, 작동을 종료한다.
//            if(br >= N || br < 0 || bc >= M || bc < 0) break;
//            
//            // 만약 후방으로 이동했을때 벽이라면 작동을 종료한다.
//            if(Room[br][bc]==1) break;
//            else {
//                // 만약 후방 이동 시 청소해야할 구역이라면 청소를 실시하고 탐색을 다시 시작한다.
//                if(CV[br][bc]==0) {
//                    CV[br][bc]=1;
//                    Ans++;
//                }
//            }
//        }
//    }
//    
//    printf("%d\n",Ans);
//    return 0;
//}
