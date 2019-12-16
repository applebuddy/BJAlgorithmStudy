//
//  2_4_Recursion_부분집합의합_1182.cpp
//  BackJoonPractice
//
//  Created by Min Kyeong Tae on 28/04/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <string.h>

using namespace std;

//  MARK:- 1182_부분수열의 합
// 문제
// N개의 정수로 이루어진 수열이 있을 때, 길이가 양수인 부분수열 중에서 그 수열의 원소를 다 더한 값이 S가 되는 경우의  수를 구하는 프로그램을 작성하시오.
//
// 입력
// 첫째 줄에 정수의 개수를 나타내는 N과 정수 S가 주어진다. (1 ≤ N ≤ 20, |S| ≤ 1,000,000) 둘째 줄에 N개의  정수가 빈 칸을 사이에 두고 주어진다. 주어지는 정수의 절댓값은 100,000을 넘지 않는다.
//
// 출력
// 첫째 줄에 합이 S가 되는 부분수열의 개수를 출력한다.
int N,S,ans=0; // N : 정수의개수, S : 합계 정수값
int permutation[20];

void getCase(int sum, int index) {
    // 1) 성공적으로 조건충족하는 경우 => 부분수열의 합이 S, ★index가 N을 충족하는경우 => ans++ 후 리턴종료
    if(index == N) {
        if(sum == S) {
            ans++;
        }
        return;
    }
//
//    // 2) 문제가 발생하는 경우 => 체크가 된 상태에서 index값이 전체수열의 값보다 크거나 같을경우 리턴종료
//    if(index >= N) return;
    
    // 3) 추가작업이 필요한 경우 => 현재 값을 더하고 다음인덱스로 or 현재 값 스킵하고 다음인덱스로
    getCase(sum+permutation[index], index+1);
    getCase(sum,index+1);
    
}

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    memset(permutation, 0, sizeof(permutation));
    
    cin >> N >> S;

    for(int i=0; i<N; i++){
        // 수열의 요소를 입력받는다.
        cin >> permutation[i];
    }
    
    // 수열, permutation의 부분수열값의 값이 S가 되는 경우를 탐색한다.
    // 1.현재 까지의 합, 2.현재 탐색중인 인덱스
    getCase(0,0);
    // 공집합을 제외한 경우의 알고리즘 문제이므로, (공집합의 경우 합이 0이 나옴.. 그러므로 0의 합이 나오는 경우를 구할 경우, 공집합의 경우를 제외시킨다. (★ans--;))
    if(S==0) ans--;
    
    cout << ans << "\n";
    return 0;
}
