//
//  ExampleProblem.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 18/08/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//
//
#include <stdio.h>

int main() {
    int weakFinger, maxCount, nowCount=0, weakUsedCount=0; // weakFinger(아픈손가락), maxCount(아픈 손가락 최대사용가능한 횟수), nowCount(현재까지 셈한 숫자, 정답제출 값), weakUsedCount(아픈손가락 사용횟수),
    int calcCount=1; // 현재 셈하는 손가락 위치 인덱스
    bool flag=false; // 셈 방향을 정하는 플래그값
    
    scanf("%d %d", &weakFinger,&maxCount); // 아픈손가락위치, 사용가능횟수 입력
    
    while(1) {
        
        // 현재 셈한 손가락이 아픈 손가락이면
        if(calcCount==weakFinger) {
            weakUsedCount++; // 아픈손가락 사용 카운트 증가
            if(maxCount<weakUsedCount) { // 만약 아픈손가락 사용횟수를 초과하면 셈한숫자(nowCount) 정답 제출 후 종료
                printf("%d",nowCount);
                return 0;
            }
            
        }
        
        // 1번째 손가락이면 순방향 이동
        if(flag==false) {
            calcCount++;
        }else{ // 5번째 손가락이면 역방향 이동
            calcCount--;
        }
        
        nowCount++;
        
        // 1번째 손가락이면 순방향 이동
        if(calcCount==1) {
            flag=false;
        }
        // 5번째 손가락이면 역방향 이동
        if(calcCount==5) {
            flag=true;
        }
    }
    return 0;
}
