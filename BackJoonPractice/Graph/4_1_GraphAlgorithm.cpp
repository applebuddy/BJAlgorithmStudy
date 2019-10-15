//
//  GraphAlgorithm.cpp
//  BackJoonPractice
//
//  Created by Min Kyeong Tae on 19/04/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//
// MARK:- 그래프 : 자료구조의 일종
// - 정점(Node, Vertex) + 간선(Edge, 정점간의 관계를 나타냄)으로 구성되어있다.
// - G = (V,E)로 나타낸다.
// - 경로(Path) : 정점 A에서 B로 가는 경로
// - 사이클(Cycle) : 정점 A에서 다시 A로 돌아오는 경로(시작점과 도착점이 같은 경로)
// - ★ 가중치 : 가중치가 없는 경우, 1이라고 보면 된다.
// - 차수 : 정점과 연결되어있는 간선의 개수
//   * 방향 그래프의 경우, In-degree, Out-degree로 나누어서 차수를 계산한다.
// - 루프 : 양 끝점이 하나의 정점으로 동일한 경우 @
// * 방향이 있는 그래프와 방향이 없는 그래프(양방향 그래프(Bidirection Graph))가 존재한다.

// MARK: 그래프를 저장하는 방법
// // 1) 인접행렬(Adjacency-matrix) : 정점의 개수를 V이라고 했을때, VxV크기의 이차원 배열을 사용한다.
//      ex) A[i][j] = 1(i->j 간선이 있을 때), 0(i->j 간선이 없을 때)
// // 2) 인접 리스트(Adjacency-List) : 리스트를 이용해서 구현한다. A[i] = i와 연결된 정점을 리스트로 포함하고 있음.
//      ex) A[1] (2,2) (5,7) => 1에서 2로가는데 가중치가 2 / 1에서 5로가는데 가중치가 7이다.
// *Conclusion) 공간복잡도를 비교해보자면, 인접행렬은 O(V^2), 인접리스트는 O(E)이다. 일반적으로 인접행렬보다 인접리스트가 효율적으로 사용될 수 있다.
// *인접행렬이 인접리스트보다 유리한 경우 1)특정 간선의 존재유무판단, 2) 정점간 간선의/역방향간선이 있는지 확인할떄
//    3) 간선 리스트(Edge-list) : 배열을 이용해서 구현한다., 간선을 모두 저장하고 있다.

// MARK: 13023_ABCDE 문제..
#include <iostream>
using namespace std;


int main(){
    
}
