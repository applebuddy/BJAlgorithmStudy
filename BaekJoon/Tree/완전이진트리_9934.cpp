//
//  완전이진트리_9934.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/03/07.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: - 완전이진트리 9934
// MARK: Tree C++ 문제풀이

#if 0
#include <iostream>
#include <vector>
using namespace std;

vector<int> arr((2<<11),0);
vector<int> C((2<<11),-1);
int size = 0;
int K = 0;

void visit(int start, int end, int cnt) {
    if(end < start || cnt >= K) return;
    if(start == end && C[start]==-1) {
        C[start] = cnt;
        return;
    }
    
    int mid = (start + end) / 2;
    
    if(C[mid]==-1) C[mid] = cnt;
    visit(start, mid-1, cnt+1);
    visit(mid+1, end, cnt+1);
    return;
}

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    cin>>K;
    int size = ((1<<K)-1);
    vector<vector<int>> Ans(K, vector<int>());
    for(int i=0; i<size; i++) cin>>arr[i];
    visit(0, size-1, 0);
    for(int i=0; i<size; i++) Ans[C[i]].push_back(arr[i]);
    for(int i=0; i<Ans.size(); i++) {
        for(int j=0; j<Ans[i].size(); j++) printf("%d ",Ans[i][j]);
        puts("");
    }
    return 0;
}
#endif
