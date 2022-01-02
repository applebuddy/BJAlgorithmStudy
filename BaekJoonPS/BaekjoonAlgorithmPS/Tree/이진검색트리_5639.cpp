//
//  이진검색트리_5639.cpp
//  BaekjoonAlgorithmPS
//
//  Created by MinKyeongTae on 2021/12/12.
//  Copyright © 2021 MungGu. All rights reserved.
//

#if 0
#include <iostream>
#include <vector>
using namespace std;

vector<int> V;

void printPostOrder(int start, int end) {
    if(start >= end)
        return;
    if(start == end-1) {
        printf("%d\n", V[start]);
        return;
    }
    int idx = start + 1;
    while(idx<end) {
        if(V[start]<V[idx])
            break;
        idx++;
    }
    
    printPostOrder(start+1, idx);
    printPostOrder(idx, end);
    printf("%d\n", V[start]);
}

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    int N=0;
    
    while(cin>>N) {
        V.push_back(N);
    }

    printPostOrder(0, (int)V.size());
}

#endif
