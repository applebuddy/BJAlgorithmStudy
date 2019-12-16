////
////  4_1_Graph_미로탐색_2178.cpp
////  BackJoonPractice
////
////  Created by Min Kyeong Tae on 30/05/2019.
////  Copyright © 2019 Min Kyeong Tae. All rights reserved.
////
//
//// ★ 기본적인 DFS, BFS의경우 맵, 맵사이즈 형태를 하나 만들어 체크를 한다.
//// ★ 카운팅할지, 단순체크할지 유무등 체크...
//// ☆ if문 사용한 필터링 습관 기르기.
//// connected component 모든 노드에 대한 for문 탐색, 각각의 BFS결과값 비교 or 출력
//
//#include <iostream>
//#include <vector>
//#include <queue>
//using namespace std;
//typedef pair<int,int> Pair;
//int tx[] = {0,0,1,-1};
//int ty[] = {1,-1,0,0};
//vector<vector<int>> g(101,vector<int>(101,0));
//vector<vector<int>> c(101,vector<int>(101,0));
//
//void checkMiro(int x, int y) {
//    queue<Pair> q;
//    q.push(make_pair(0, 0));
//    c[0][0]=1;
//    
//    while(!q.empty()){
//        int nx=q.front().first;
//        int ny=q.front().second;
//        q.pop();
//        for(int i=0; i<4; i++){
//            int rx=nx+tx[i];
//            int ry=ny+ty[i];
//            if(rx<0 || rx>x || ry<0 || ry>y) continue;
//            if(c[rx][ry]!=0 || g[rx][ry]==0) continue;
//            c[rx][ry]=c[nx][ny]+1;
//            q.push(make_pair(rx,ry));
//        }
//    }
//}
//
//int main() {
//    
//    int N,M;
//    scanf("%d %d",&N,&M);
//    for(int i=0; i<N; i++){
//        for(int j=0; j<M; j++){
//            scanf("%1d",&g[i][j]);
//        }
//    }
//    checkMiro(N, M);
//    printf("%d\n",c[N-1][M-1]);
//    return 0;
//}
