
//
//  구간합구하기_2042.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/03/05.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: - 구간합구하기 2042
// MARK: segmentTree 학습 및 C++ 문제풀이 기록

#if 0
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

typedef long long ll;
typedef vector<ll> vll;

ll init(vll &arr, vll &tree, int node, int start, int end) {
    if(start == end) return tree[node] = arr[start];
    int mid = (start + end) / 2;
    return tree[node] = init(arr, tree, node*2, start, mid) + init(arr, tree, node*2+1, mid+1, end);
}

void update(vll &tree, int node, int start, int end, int index, ll diff) {
    if(!(start <= index && index <= end)) return;
    tree[node] += diff;
    if(start != end) {
        int mid = (start + end) / 2;
        update(tree, node*2, start, mid, index, diff);
        update(tree, node*2+1, mid+1, end, index, diff);
    }
}

ll sum(vll &tree, int node, int start, int end, int left, int right) {
    if(left > end || right < start) return 0;
    if(left <= start && end <= right) return tree[node];
    int mid = (start + end) / 2;
    return sum(tree, node*2, start, mid, left, right) + sum(tree, node*2+1, mid+1, end, left, right);
}

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    int N,M,K; cin>>N>>M>>K;
    int h = (int)ceil(log2(N));
    int tree_size = (1 << (h+1));
    vll arr(N);
    vll tree(tree_size);
    
    for(int i=0; i<N; i++) cin>>arr[i];
    init(arr, tree, 1, 0, N-1);
    
    int T = M+K;
    while(T--) {
        int flag; cin>>flag;
        if(flag == 1) {
            int index;
            ll value;
            cin>>index>>value;
            ll diff = value - arr[index-1];
            arr[index-1] = value;
            update(tree, 1, 0, N-1, index-1, diff);
        } else if(flag == 2) {
            int left, right; cin>>left>>right;
            printf("%lld\n",sum(tree, 1, 0, N-1, left-1, right-1));
        }
    }
}
#endif
