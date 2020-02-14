//
//  콘도선정_2246.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 26/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 콘도선정_2246
//. 콘도를 선정할 때에는 가급적이면 싸고 바닷가에 가까운 곳으로 하려 한다. 이를 위해 우선 적당한 콘도 몇 곳을 후보로 선정하려 하는데, 다음 두 조건을 만족하는 콘도 X가 후보가 된다.
//.
//. X보다 바닷가에 더 가까운 콘도들은 모두 X보다 숙박비가 더 비싸다.
//. X보다 숙박비가 더 싼 콘도들은 모두 X보다 바닷가에서 더 멀다.
//. 각 콘도의 바닷가에서의 거리와 숙박비에 대한 정보가 주어졌을 때, 후보 콘도의 개수를 구해내는 프로그램을 작성하시오.

// ✓ X는 다른 비싼곳보다 바닷가에서 멀어야한다.
// ✓ -> X는 다른 곳보다 비쌀 수 있지만 바닷가에는 더 가까워야 한다.

#include <iostream>
#include <vector>

using namespace std;

void selectTemperature() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int N,Ans=0; cin>>N;
    vector<vector<int>> CON(N,vector<int>(2,0));
    for(int i=0; i<N; i++) cin >> CON[i][0] >> CON[i][1];
    for(int i=0; i<N; i++) {
        bool flag = true;
        for(int j=0; j<N; j++) {
            if(i==j) continue;
            if((CON[j][0]<CON[i][0] && CON[j][1]<=CON[i][1])
               || (CON[j][1]<CON[i][1] && CON[j][0]<=CON[i][0])) {
                flag = false;
                break;
            }
        }
        if(flag==true) Ans++;
    }
    printf("%d\n",Ans);
}

//int main() {
//    selectTemperature();
//    return 0;
//}
