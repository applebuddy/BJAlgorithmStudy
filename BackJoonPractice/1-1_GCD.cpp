//
//  example_GCD.cpp
//  BackJoonPractice
//
//  Created by Min Kyeong Tae on 17/04/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.

#include <iostream>

// MARK: 최대공약수 Greatest Common Divisor(GCD), 줄여서 GCD라고 쓴다.
// MARK: 최소공배수는 a*b/CGD(a,b)를 해주면 된다.
// 최대공약수가 1인 두 수를 서로소(Coprime)라고 한다.
// * 기약분수 형태 구하기 -> 분수의 분자,분모에 각각 최대공약수를 나눠주면 기약분수가 된다.
using namespace std;

// ★유클리드 호제법 GCD를 쉽게 구할 수 있다. (O(N) 보다 더 효율적으로(O(logN)) 처리가 가능하다.)
//int getGCD(int a, int b) {
//    if(b==0){
//        return a;
//    } else {
//        return getGCD(b,a%b);
//    }
//}


// a를 b로, b를 a%b로 바꾸면 된다.
int getGCD(int a, int b) {
    while(b != 0){
        int r = a%b;
        a = b;
        b = r;
    }
    return a;
}

int getLCM(int a, int b) {
    return a*b/getGCD(a,b);
}

int main() {
    int gcdValue = 1; // 최대공약수가 될 수 있는 최소조건의 값 1을 초기값으로 둔다.
    int a = 0, b = 0;
    cin >> a >> b;
    
    // 시간복잡도는 O(N) => ★ 유클리드 호제법을 사용하면 더 효율적인 알고리즘 사용이 가능하다.
//    for(int i=2; i<=min(a,b); i++){ // 두 수 중 더 작은 값까지 루프를 돌린다.
//        if((a%i==0)&&(b%i==0)){
//            gcdValue = i;
//        }
//    }
    
    cout << a << "와 " << b << "의 최대공약수는 " << getGCD(a,b) << "입니다. ^-^" << endl;
    cout << "최소공배수는 " << getLCM(a,b) << "입니다. ^-^" << endl;
    
    return 0;
}
