//
//  FloydWarchallAlgorithm.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 26/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - Floyd Wharshall Algorithm
//  하나의 정점에서 모든 정점으로의 최단경로를 구하는 알고리즘
#if 0
#include <iostream>
using namespace std;

int number = 4;
int INF = 1000000000;

// 자료 배열의 초기화
int A[4][4] = {
    {0, 5, INF, 8},
    {7, 0, 9, INF},
    {2, INF, 0, 4},
    {INF, INF, 3, 0}
};

void floydWarshall() {
    // 결과 그래프의 초기화
    int C[number][number];
    
    for(int i=0; i<number; i++) {
        for(int j=0; j<number; j++) {
            C[i][j] = A[i][j];
        }
    }
    
    // k는 거쳐갈 노드의 경우를 순회하는 인덱스
    for(int k=0; k<number; k++) {
        for(int i=0; i<number; i++) {
            for(int j=0; j<number; j++) {
                C[i][j] = C[i][j]>C[i][k]+C[k][j] ? C[i][k]+C[k][j] : C[i][j];
            }
        }
    }
    
    // FlaydWarshall Algorithm Result
    for(int i=0; i<number; i++) {
        for(int j=0; j<number; j++) {
            printf("%d ", C[i][j]);
        }
        puts("");
    }
}

int main() {
    floydWarshall();
    return 0;
}
#endif
