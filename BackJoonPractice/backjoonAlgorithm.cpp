//
//  dd.cpp
//  BackJoonPractice
//
//  Created by Min Kyeong Tae on 17/04/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

#include "backjoonAlgorithm.hpp"
#include <iostream>

using namespace std;

// MARK:- 10430번) 나머지
// int는 2^31-1까지
// long long은 2^63-1(약 10^18)까지의 값을 저장할 수 있다.
// 10^50처럼 큰값은 표현할 수가 없기때문에 이런경우에는 나머지처리를 요구하는 경우가 많다.
// * 문제에서 "정답을 ~~~로 나눈 나머지를 출력하라" 라는 말이 있는 이유는 정답이 int나 long long과 같은 자료형의 범위를 넘어가기 때문이다.
// * 0 < a%c - b%c + c < 3c => 뺄셈의 나머지를 구할때 정확한 값을 구하는 방법 공식

// MARK:
//    (A+B)%C는 (A%C + B%C)%C 와 같을까?
//
//    (A×B)%C는 (A%C × B%C)%C 와 같을까?
//
//    세 수 A, B, C가 주어졌을 때, 위의 네 가지 값을 구하는 프로그램을 작성하시오.

int main() {
//    cin.tie(NULL);
//    ios::sync_with_stdio(false);
    
    int a = 0,b = 0,c = 0;
    cin >> a >> b >> c;
    cout << (a+b)%c << endl;
    cout << (a%c + b%c)%c << endl;
    cout << (a*b)%c << endl;
    cout << (a%c * b%c)%c << endl;
    
    
    
    return 0;
}
