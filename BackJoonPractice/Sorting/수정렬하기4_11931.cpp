//
//  수정렬하기4_11931.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2019/12/16.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

// MARK: 수 정렬하기4 11931

// MARK: - 역 반복자 활용 답안)
#if 0
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    int N; cin>>N;
    vector<int> V(N,0);
    for(int i=0; i<N; i++) cin>>V[i];
    sort(V.begin(),V.end());
    for(auto iter = V.rbegin(); iter!=V.rend(); ++iter) {
        printf("%d\n",*iter);
    }
    
    return 0;
}
#endif

#if 0
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    int N; cin>>N;
    vector<int> V(N,0);
    for(int i=0; i<N; i++) cin>>V[i];
    sort(V.begin(),V.end(),greater<int>());
    for(int i=0; i<V.size(); i++) printf("%d\n",V[i]);
    
    return 0;
}
#endif
