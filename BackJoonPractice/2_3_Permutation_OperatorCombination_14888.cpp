//
//  Permutation_OperatorCombination_14888.cpp
//  BackJoonPractice
//
//  Created by Min Kyeong Tae on 21/04/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//
//
// MARK:- 14888_Permutation_OperatorCombination, 연산자끼워넣기
  //N개의 수로 이루어진 수열 A1, A2, ..., AN이 주어진다. 또, 수와 수 사이에 끼워넣을 수 있는 N-1개의 연산자가   주어진다. 연산자는 덧셈(+), 뺄셈(-), 곱셈(×), 나눗셈(÷)으로만 이루어져 있다.
  //
  //우리는 수와 수 사이에 연산자를 하나씩 넣어서, 수식을 하나 만들 수 있다. 이때, 주어진 수의 순서를 바꾸면 안된다.
  //
  //예를 들어, 6개의 수로 이루어진 수열이 1, 2, 3, 4, 5, 6이고, 주어진 연산자가 덧셈(+) 2개, 뺄셈(-) 1개,   곱셈(×) 1개, 나눗셈(÷) 1개인 경우에는 총 60가지의 식을 만들 수 있다. 예를 들어, 아래와 같은 식을 만들 수   있다.
  //
  //1+2+3-4×5÷6
  //1÷2+3+4-5×6
  //1+2÷3×4-5+6
  //1÷2×3-4+5+6
  //식의 계산은 연산자 우선 순위를 무시하고 앞에서부터 진행해야 한다. 또, 나눗셈은 정수 나눗셈으로 몫만 취한다.   음수를 양수로 나눌 때는 C++14의 기준을 따른다. 즉, 양수로 바꾼 뒤 몫을 취하고, 그 몫을 음수로 바꾼 것과   같다. 이에 따라서, 위의 식 4개의 결과를 계산해보면 아래와 같다.
  //
  //1+2+3-4×5÷6 = 1
  //1÷2+3+4-5×6 = 12
  //1+2÷3×4-5+6 = 5
  //1÷2×3-4+5+6 = 7
  //N개의 수와 N-1개의 연산자가 주어졌을 때, 만들 수 있는 식의 결과가 최대인 것과 최소인 것을 구하는 프로그램을   작성하시오.
  //
  //입력
  //첫째 줄에 수의 개수 N(2 ≤ N ≤ 11)가 주어진다. 둘째 줄에는 A1, A2, ..., AN이 주어진다. (1 ≤ Ai ≤   100) 셋째 줄에는 합이 N-1인 4개의 정수가 주어지는데, 차례대로 덧셈(+)의 개수, 뺄셈(-)의 개수, 곱셈(×)의   개수, 나눗셈(÷)의 개수이다.
  //
  //출력
  //첫째 줄에 만들 수 있는 식의 결과의 최댓값을, 둘째 줄에는 최솟값을 출력한다. 최댓값과 최솟값이 항상 -10억보다 크거나 같고, 10억보다 작거나 같은 결과가 나오는 입력만 주어진다. 또한, 앞에서부터 계산했을 때, 중간에 계산되는 식의 결과도 항상 -10억보다 크거나 같고, 10억보다 작거나 같다.

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int calculate(int a, int b, int op){
    switch (op) {
        case 0:
            return a+b;
        case 1:
            return a-b;
        case 2:
            return a*b;
        case 3:
            return a/b;
        default:
            break;
    }
    return 0;
}

int main(){
    
    int n, minValue=1000000000, maxValue=-1000000000;
    
    
    
    cin >> n; // 연산자 조합할 수의 갯수를 입력한다.
    vector<int> numV(n);
    vector<int> opV(4); // 각 연산자당 몇개할지 입력받음.
    vector<int> opP; // 연산자 순열
    for(int i=0; i<n; i++){
        cin >> numV[i]; // 수 데이터를 입력한다.
    }
    for(int i=0; i<4; i++){ // 각 연산자 데이터 갯수를 입력한다. 0:+, 1:-, 2:x, 3:%으로 구분하는데 사용할 것이다.
        cin >> opV[i];
    }
    
    for(int i=0; i<4; i++){
        for(int j=0; j<opV[i]; j++){
            if(opV[i]==0){
                break;
            }
            opP.push_back(i);
        }
    }
    
    sort(opP.begin(),opP.end());
    
    // 연산자의 종률
    do {
        int result = 0;
        for(int i=1; i<n; i++){
            if(i==1){
            result = calculate(numV[i-1],numV[i],opP[i-1]); // 계산을 실시한다.
            } else {
                result = calculate(result, numV[i], opP[i-1]);
            }
            
        }
        maxValue = max(maxValue,result);
        minValue = min(minValue,result);
    }while(next_permutation(opP.begin(), opP.end()));
    
    cout << maxValue << "\n" << minValue << "\n";
    
    return 0;
}
