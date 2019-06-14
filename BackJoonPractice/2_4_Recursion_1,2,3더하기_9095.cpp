//
//  2_4_Recursion_1,2,3더하기_9095.cpp
//  BackJoonPractice
//
//  Created by Min Kyeong Tae on 26/04/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//
// MARK:- 9095_1,2,3 더하기

#include <string.h>
#include <vector>
#include <queue>
#include <algorithm>
#include <iostream>
using namespace std;

//int findNum(int sum, int sol){
//
//    // MARK:- 재귀함수 구성에 필요한 조건
//    // 1) 비정상적인 경우(불필요한 결과)
//    // 2) 조건을 달성한 경우
//    // 3) 조건을 충족하지 못하여 계속 진행해야하는 경우
//
//    int ans = 0; // 재귀함수 내에서 더하는 경우의 수를 누적할 변수 ans
//
//    // 1) 비정상적인 경우(불필요한 결과)
//    // 총합이 목표달성에 부적합 한 경우 0을 반환
//    if(sum > sol) return 0;
//
//    // 2) 조건을 달성한 경우
//    // 총합이 목표를 달성한 경우, 1을 반환(+1)
//    if(sum == sol) return 1;
//
//    // 3) 조건을 충족하지 못하여 계속 진행해야하는 경우
//    // 모든 경우의수(1, 2, 3을 더하는 경우의 수)를 판단한다.
//    for(int i=1; i<=3; i++){
//        ans += findNum(sum+i,sol);
//    }
//    // 재귀함수를 통해 1,2,3을 통해 만들 수 있는 모든 경우의 수를 출력한다.
//    return ans;
//}

int findCase(int sum, int sol) {
    // 경우의수 결과값을 저장할 변수 ans
    int ans = 0;
    
    // 1) 불가능한 경우
    if(sum > sol) return 0;
    // 2) 답을 찾은 경우
    if(sum == sol) return 1;
    
    // 3) 추가 작업이 필요한 경우
    for(int i=1; i<=3; i++){
       ans += findCase(sum+i,sol);
    }
    
    return ans;
}

int main() {
    
    int t;
    scanf("%d",&t);
    int arr[t];
    
    for(int i=0; i<t; i++){
        scanf("%d",&arr[i]);
    }
    
    for(int i=0; i<t; i++){
        cout << findCase(0,arr[i]) << "\n";
    }
    
    
    return 0;
}
