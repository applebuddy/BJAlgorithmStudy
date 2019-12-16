//
//  탑_2493.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 14/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

#if 0
#include <iostream>
#include <stack>
#include <string.h>
using namespace std;

typedef pair<int,int> Pair;
void theTopWithStack() {
    int N; cin>>N;
    int *V = new int[N];
    int *Ans = new int[N];
    stack<Pair> STK;
    for(int i=0; i<N; i++) {
        cin>>V[i];
        while(!STK.empty()) {
            if((int)STK.top().second > V[i]) {
                Ans[i] = STK.top().first;
                break;
            } else STK.pop();
        }
        
        if(STK.empty()) Ans[i] = 0;
        STK.push(make_pair(i+1, V[i]));
    }
    for(int i=0; i<N; i++) {
        printf("%d",Ans[i]);
        (i!=N-1) ? printf(" ") : 0;
    }
    printf("\n");
    delete [] V;
    delete [] Ans;
    return;
}

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    theTopWithStack();
    return 0;
}
#endif

#if 0
/// MARK: Stack 미사용 통과답안
void theTopWithoutStack() {
    int N; cin>>N;
    vector<int> V(N,0);
    vector<int> Ans(N,0);
    Ans[0]=0;
    for(int i=0; i<N; i++) cin>>V[i];
    for(int i=1; i<N; i++) {
        for(int j=i-1; j>=0; j--) {
            if(V[j] >= V[i]) {
                Ans[i] = j+1;
                break;
            }
        }
    }
    for(auto v: Ans) printf("%d ",v);
    printf("\n");
    return;
}
#endif

/// MARK: 스택 사용 시간초과 답안..

#if 0
int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    int N; cin>>N;
    vector<int> V(N,0);
    vector<int> Ans(N,0);
    Ans[0]=0;
    for(int i=0; i<N; i++) cin>>V[i];
    for(int i=1; i<N; i++) {
        stack<int> STK;
        for(int j=0; j<i; j++) STK.push(V[j]);
        while(!STK.empty()) {
            if(STK.top()>=V[i]) {
                Ans[i]=(int)STK.size();
                break;
            } else STK.pop();
        }
    }
    for(auto v: Ans) printf("%d ",v);
    printf("\n");
    return 0;
}
#endif
