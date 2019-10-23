//
//  KruskalAlgorithm.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 24/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - Kruskal Algorithm : MST Algorithm

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/// MARK: 크루스칼 알고리즘은 순환이 최소신장트리가 순환이 되면 안되므로, Union Find(서로소집합) 알고리즘을 결합하여 사용한다.
/// MARK: Adjusting Union Find Algorithm
// - getParentNode(int node[], int x)
// - unionParent(int node[], int a, int b)
// - checkParent
int getParentNode(int node[], int x) {
    if(node[x]==x) return x;
    return getParentNode(node, node[x]);
}

void unionParent(int node[], int a, int b) {
    a = getParentNode(node,a);
    b = getParentNode(node,b);
    if(a<b) node[b] = a;
    else node[a] = b;
    return;
}

bool checkParent(int node[], int a, int b) {
    a = getParentNode(node, a);
    b = getParentNode(node, b);
    return a!=b ? false : true;
}

// MARK: 간선 노드 클래스를 정의한다.
class Edge {
    public:
    int node[2];
    int weight;
    Edge(int x, int y, int w) {
        this->node[0] = x;
        this->node[1] = y;
        this->weight = w;
    }
};

int main() {
    
    int N = 7; // 노드 갯수
    int M = 11; // 간선 갯수
    vector<Edge> V;
    V.push_back(Edge(1, 7, 12));
    V.push_back(Edge(4, 7, 13));
    V.push_back(Edge(1, 4, 18));
    V.push_back(Edge(1, 2, 67));
    V.push_back(Edge(1, 5, 17));
    V.push_back(Edge(2, 4, 24));
    V.push_back(Edge(2, 5, 62));
    V.push_back(Edge(3, 5, 20));
    V.push_back(Edge(3, 6, 37));
    V.push_back(Edge(5, 6, 45));
    V.push_back(Edge(5, 7, 73));
    
    // 간선 노드의 오름차순 정렬 후, 가장 적은 비용의 노드를 연결하는 경우를 찾는다.
    sort(V.begin(), V.end(), [](Edge &a, Edge &b) {
        return a.weight < b.weight;
    });
    
    int C[N];
    for(int i=0; i<N; i++) C[i]=i;
    
    // 누적합을 저장 할 변수, SUM
    int SUM = 0;
    for(int i=0; i<V.size(); i++) {
        // 만약 노드가 순환되지 않는다면(순환체크를 위해 UnionFind Algorithm을 사용)
        // * 부모노드를 체크하는 C 배열의 인덱스는 0부터 시작하므로, checkParent의 인자값 인덱스는 1씩 감소 후 사용
        if(!checkParent(C, V[i].node[0]-1, V[i].node[1]-1)) {
            // 순환이 일어나지 않으며, 해당 가중치를 누적시킨 후
            SUM+=V[i].weight;
            // 이미 사용 된 간선 루트는 서로소집합(Union Find Algorithm) 적용시킨다.
            unionParent(C, V[i].node[0]-1, V[i].node[1]-1);
        }
    }
    printf("%d\n",SUM);
    
    return 0;
}

