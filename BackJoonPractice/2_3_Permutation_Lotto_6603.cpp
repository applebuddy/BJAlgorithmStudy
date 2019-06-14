
//
//  Permutation_Lotto_6603.cpp
//  BackJoonPractice
//
//  Created by Min Kyeong Tae on 21/04/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//
// MARK:- 6603_Permutation Lotto 로또고르기 문제
//        * 입력으로 주어진 K개의 수 중에서 6개의 수를 고르는 문제

//
  //독일 로또는 {1, 2, ..., 49}에서 수 6개를 고른다.
  //
  //로또 번호를 선택하는데 사용되는 가장 유명한 전략은 49가지 수 중 k(k>6)개의 수를 골라 집합 S를 만든 다음 그   수만 가지고 번호를 선택하는 것이다.
  //
  //예를 들어, k=8, S={1,2,3,5,8,13,21,34}인 경우 이 집합 S에서 수를 고를 수 있는 경우의 수는 총   28가지이다. ([1,2,3,5,8,13], [1,2,3,5,8,21], [1,2,3,5,8,34], [1,2,3,5,13,21], ...,   [3,5,8,13,21,34])
  //
  //집합 S와 k가 주어졌을 때, 수를 고르는 모든 방법을 구하는 프로그램을 작성하시오.
  //
  //입력
  //입력은 여러 개의 테스트 케이스로 이루어져 있다. 각 테스트 케이스는 한 줄로 이루어져 있다. 첫 번째 수는 k (6 <   k < 13)이고, 다음 k개 수는 집합 S에 포함되는 수이다. S의 원소는 오름차순으로 주어진다.
  //
  //입력의 마지막 줄에는 0이 하나 주어진다.
  //
  //출력
  //각 테스트 케이스마다 수를 고르는 모든 방법을 출력한다. 이때, 사전 순으로 출력한다.
  //
  //각 테스트 케이스 사이에는 빈 줄을 하나 출력한다.

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int main(){
    
    while(1){
      
        int n;
        vector<int> testVector; // 순열로 사용할 벡터순열
        vector<vector<int>> answer; // 테스트케이스 정답값들을 넣어 둘 벡터데이터
        cin >> n; //n을 처음에 입력받는다. 이때 n이 0이면 프로그램을 종료한다.
        vector<int> inputVector(n);
        for(int i=0; i<n; i++){
            cin >> inputVector[i];
        }
        if(n==0){
            return 0;
        }
        
        for(int i=0; i<n-6; i++){
            testVector.push_back(0); // 로또 미당첨번호(0)를 n-6개만큼 미리 넣은 뒤,
        }
        
        for(int i=0; i<6; i++){ // 6개 만큼의 로또 당첨번호(1)를 넣어준다.
            testVector.push_back(1);
        }
        
        do {
            // 테스트용 순열을 돌려가면서 테스트케이스를 하나씩 기록한다.
            vector<int> temp;
            for(int i=0; i<n; i++){
                if(testVector[i] == 1){
                    temp.push_back(inputVector[i]); // 1인경우(당점번호로 뽑을경우)를 넣어두고,
                }
            }
            // 다 뽑은 결과값은 하나하나 차례대로 결과값(당첨로또번호 경우의수) 넣어준다.
            answer.push_back(temp);
            
        }while(next_permutation(testVector.begin(), testVector.end()));
    
        sort(answer.begin(), answer.end()); // 경우의수를 오름차순으로 깔끔하게 정돈을 한 뒤,
        for(auto &v : answer){ //이중벡터인 answer의 요소 v벡터 하나하나 마다의 세부 요소를 확인하여 깔끔하게 출력할 준비를 한다.
            for(int i=0; i<v.size(); i++){
                cout << v[i] << " "; // 하나씩 선택 케이스를 정리한다.
            }
            cout << "\n"; // 케이스별 한줄 출력시마다 한번씩 개행을 해준다.
        }
        // 모든 케이스를 출력 후에는 한벋 더 개행을 하여 다른행 입력값에 대한 결과값과 구분을 지은다.
        cout << "\n";
    }
    
    return 0;
}
