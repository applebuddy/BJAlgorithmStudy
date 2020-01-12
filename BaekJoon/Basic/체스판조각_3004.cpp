//
//  체스판조각_3004.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/01/13.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: 체스판조각_3004
// MARK: - 복잡도 O(1) 풀이버전
#if 0
#include <iostream>
using namespace std;

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    int N; cin>>N;
    printf("%d\n",(1+N/2) * (1+(N+1)/2));
    return 0;
}
#endif

// MARK: - 복잡도 O(N) 풀이버전
#if 0
#include <iostream>
using namespace std;

int main() {
    int N; cin>>N;
    int arr[2] = {1, 1};
    bool flag = false;
    
    while(N--) {
        arr[flag ? 0 : 1]++;
        flag = flag==false ? true : false;
    }
    
    printf("%d\n",arr[0] * arr[1]);
    return 0;
}
#endif
