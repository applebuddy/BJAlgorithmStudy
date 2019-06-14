//
//  Permutation_TSP_10971.cpp
//  BackJoonPractice
//
//  Created by Min Kyeong Tae on 21/04/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//
// MARK:- Permutation 순열
// MARK:  10971_외판원순회 TSP
//  외판원 순회 문제는 영어로 Traveling Salesman problem (TSP) 라고 불리는 문제로 computer science  분야에서 가장 중요하게 취급되는 문제 중 하나이다. 여러 가지 변종 문제가 있으나, 여기서는 가장 일반적인 형태의  문제를 살펴보자.
//
// 1번부터 N번까지 번호가 매겨져 있는 도시들이 있고, 도시들 사이에는 길이 있다. (길이 없을 수도 있다) 이제 한  외판원이 어느 한 도시에서 출발해 N개의 도시를 모두 거쳐 다시 원래의 도시로 돌아오는 순회 여행 경로를  계획하려고 한다. 단, 한 번 갔던 도시로는 다시 갈 수 없다. (맨 마지막에 여행을 출발했던 도시로 돌아오는 것은  예외) 이런 여행 경로는 여러 가지가 있을 수 있는데, 가장 적은 비용을 들이는 여행 계획을 세우고자 한다.
//
// 각 도시간에 이동하는데 드는 비용은 행렬 W[i][j]형태로 주어진다. W[i][j]는 도시 i에서 도시 j로 가기 위한  비용을 나타낸다. 비용은 대칭적이지 않다. 즉, W[i][j] 는 W[j][i]와 다를 수 있다. 모든 도시간의 비용은  양의 정수이다. W[i][i]는 항상 0이다. 경우에 따라서 도시 i에서 도시 j로 갈 수 없는 경우도 있으며 이럴  경우 W[i][j]=0이라고 하자.
//
// N과 비용 행렬이 주어졌을 때, 가장 적은 비용을 들이는 외판원의 순회 여행 경로를 구하는 프로그램을 작성하시오.

// 첫째 줄에 도시의 수 N이 주어진다. (2 ≤ N ≤ 10) 다음 N개의 줄에는 비용 행렬이 주어진다. 각 행렬의 성분은 1,000,000 이하의 양의 정수이며, 갈 수 없는 경우는 0이 주어진다. W[i][j]는 도시 i에서 j로 가기 위한 비용을 나타낸다. 항상 순회할 수 있는 경우만 입력으로 주어진다.
//  2,147,483,647 -> Int가 표현하는 죄대의 정수
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int path[30][30]; // 마을 간 경로 비용을 갖는 path배열
int main() {
    
    int n;
    cin >> n; // 1) 먼저 마을의 갯수를 입력한다. 10까지만 인정된다.
    vector<int> a(n);
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> path[i][j]; // 각 마을 간 이동간 비용을 기록한다.
        }
    }
    
    // 순열을 활용한 경로계산을 위해 벡터를 준비한다.
    for(int i=0; i<n; i++){
        a[i] = i;
    }
    
    int answer = 2147483647;
    
    do {
        bool isOk = true;
        int sum = 0;
        // 해당 순열 케이스의 경로에 대한 이동가능유부와 비용을 계산한다.
        for(int i=0; i<n-1; i++){
            if(path[a[i]][a[i+1]] == 0){ // 만약 다음 마을로 가는 방법이 없으면 isOk = false
                isOk = false;
            }else{ // 방법이 있다면 isOk = true 유지한 채로, sum값을 더해준다.
                sum += path[a[i]][a[i+1]];
            }
        }
        
        // 다시 원래 마을로 이동해야 하므로 그 부분을 체크한다.
        if((isOk==true)&&(path[a[n-1]][a[0]] != 0)){ // 경로이상이 없엇고, 되돌아갈 수도 있다면,
            sum+= path[a[n-1]][a[0]]; // 되돌아가는 비용까지 마저 합산 후,
            answer = min(answer,sum); // 최적의 경로를 답할 answer값과 비교항여 최솟경로비용값을 저장한다.
        }
        
    }while(next_permutation(a.begin()+1,a.end())); // 1234 2341 2412.... 등의 경우 최적경로 비용이 동일하다. 이런 중복연산을 해결하는 방법은 순열의 맨 앞자리를 고정하고 계산하는 것이다. 즉, next_permutation(a.begin()+1,a.end()) 가 된다. @^~^@
    
    
    cout << answer << "\n";
    
    return 0;
}

// 결과 예시
///4
//0 10 15 20
//5  0  9 10
//6 13  0 12
//8  8  9  0 => 35
