//
//  OtherAlgorithmStudy.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 18/08/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

#include <stdio.h>

// 각 손가락을 거치기 위해 필요한 (순방향, 역방향 기준)거리 값을 사전에 명시한다.
// * 1,5번째 손가락은 순방향, 역방향 상관없이 8의 거리를 갖고 있다.
int firstDistance[5] = {8,2,4,6,8};
int secondDistance[5] = {8,6,4,2,8};
int main() {
    
    int weakFinger, maxCount, ans=0;
    
    // 아픈손가락, 아픈손가락 사용가능횟수 입력
    scanf("%d %d", &weakFinger,&maxCount); // 아픈손가락위치, 사용가능횟수 입력
    if(maxCount==0) {
        // 사용횟수 0 일경우 아픈손가락 가기전까지 거리만 출력하고 종료
        printf("%d",weakFinger-1);
        return 0;
    }
    
    // 그 이후 일 경우는 아픈손가락을 한번 거친 거리로 설정하고 시작한다.
    ans = weakFinger;

    // 그 이후 반복하는 순방향, 역방향 거리를 계산하여 ans 변수에 합산한다.
    ans += firstDistance[weakFinger-1]*(maxCount/2) + secondDistance[weakFinger-1]*(maxCount-maxCount/2);
    
    // 결과값을 출력한다. 맨 마지막에는 아픈손가락을 거치면 안되기에 -1 처리한다.
    printf("%d\n",ans-1);
    return 0;
}



