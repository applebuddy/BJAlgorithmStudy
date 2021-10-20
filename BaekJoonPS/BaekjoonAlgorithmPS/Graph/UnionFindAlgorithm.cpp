//
//  UnionFindAlgorithm.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 23/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - Union Find 알고리즘 : 서로소 집합 알고리즘
#if 0
#include <iostream>
using namespace std;

// 부모 노드를 찾아주는 함수
int getParent(int parent[], int x) {
    if(parent[x] == x) {
        // 최종 부모노드
        return x;
    }
    return getParent(parent,parent[x]);
}

// 두 부모 노드를 합치는 함수
int unionParent(int parent[], int a, int b) {
    a = getParent(parent, a);
    b = getParent(parent, b);
    
    // 작은 값을 부모노드로 선택
    if(a<b) {
        parent[b] = a;
        return a;
    } else {
        parent[a] = b;
        return b;
    }
}

// 같은 부모를 가지는지 확인
int findParent(int parent[], int a, int b) {
    a = getParent(parent, a);
    b = getParent(parent, b);
    if(a == b) return 1;
    else return 0;
}

int main() {
    int parent[11];
    for(int i=1; i<=10; i++) parent[i] = i;
    
    unionParent(parent, 1, 2);
    unionParent(parent, 2, 3);
    unionParent(parent, 3, 4);
    unionParent(parent, 5, 6);
    unionParent(parent, 6, 7);
    unionParent(parent, 7, 8);
    unionParent(parent, 9, 10);
    
    // 결과 확인
    for(int i=1; i<=10; i++) {
        printf("node : %d / parent : %d\n", i, parent[i]);
    }
    return 0;
}
#endif
