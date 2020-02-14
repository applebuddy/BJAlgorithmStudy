//
//  컵홀더_2810.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 26/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 컵홀더

//  극장의 한 줄의 정보가 주어진다. 이때, 이 줄에 사람들이 모두 앉았을 때, 컵홀더에 컵을 꽂을 수 있는 최대 사람의 수를 구하는 프로그램을 작성하시오. 모든 사람은 컵을 한 개만 들고   있고, 자신의 좌석의 양 옆에 있는 컵홀더에만 컵을 꽂을 수 있다.
//  S는 일반 좌석, L은 커플석을 의미하며, L은 항상 두개씩 쌍으로 주어진다.
//  어떤 좌석의 배치가 SLLLLSSLL일때, 컵홀더를 *로 표시하면 아래와 같다.
//   -> *S*LL*LL*S*S*LL*

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int cupHolder() {
    int N; string S;
    bool flag = false;
    int Ans = 1;
    cin >> N >> S;
    
    if(N<4) return N;
    
    for(int i=0; i<N; i++) {
        if(S[i]=='S') {
            if(flag==true) {
                flag=false;
                continue;
            }
            else Ans++;
        } else {
            if(flag==true) {
                flag=false;
            } else {
                flag=true;
                Ans++;
            }
        }
    }
    return min(Ans,N);
}

//int main() {
//    ios_base :: sync_with_stdio(0); cin.tie(0);
//    int Ans = cupHolder();
//    printf("%d\n",Ans);
//    return 0;
//}
