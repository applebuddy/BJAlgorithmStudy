////
////  Permutation.cpp
////  BackJoonPractice
////
////  Created by Min Kyeong Tae on 20/04/2019.
////  Copyright © 2019 Min Kyeong Tae. All rights reserved.
////
//// MARK:- 순열(Permutation) : 1 ~ N 까지로 이루어진 수열
////        * 크기는 항상 N이 되어야 하고, "겹치는 숫자가 존재하지 않음."
//// 크기가 N인 순열은 총 N!개가 존재한다.
//// 순열을 사전순으로 나열했을 때
//// N = 3인 경우에 사전순은 다음과 같다. 123, 132, 213, 231, 312, 321...
//// ★ 순열문제는 그 문제에서 제시한 N의 크기가 10을 넘지 않는 선에서 제시간 내에 구할 수 있다.(N!개 한도 내)
//// MARK: 다음순열 : 순열을 사전순으로 나열했을 때, 사전순으로 다음에 오는 순열과 이전에 오는 순열을 찾는 방법
//// C++ STL의 algorithm에는 이미 next_permutation과 prev_permutation이 존재하기 때문에 사용하면 된다.
//// * 다음순열을 어떻게 풀까? ex) 7 2 3 6 5 4 1
////   -A[i-1] < A[i] 를 만족하는 가장 큰 i를 찾는다.
////   -즉, 순열의 마지막 수에서 끝나는 가장 긴 감소수열을 찾아야 한다. ex) 7 2 '3(i-1)' | '6(i)' 5 4 1
//
//#include <iostream>
//#include <algorithm>
////#include <vector>
//using namespace std;
//
//// ★ 1. a[i] > a[i-1]이 되는 i-1을 찾아라!!
////   2. i-1보다 크면서 가장 작은 수, j를 i열 <= 에서 찾는다.
////   3. i와 j를 바꾸고, j열  뒤의 수를을 오름차순으로 정렬한다.
//// Next Permutation Function, 시간복잡도 O{N}
//bool next_permutation(int *a, int n){
//    // 1) a[i] > a[i-1]이 되는 i-1을 찾아라!!
//    int i = n-1;
//    while(i <= 0 && a[i-1] >= a[i]) i -= 1; // a[i-1] < a[i]인 경우를 찾으면 밑으로 빠진다.
//
//    if(i <= 0) return false; // 마지막 순열이면 끝낸다.
//
//    // 2) i-1보다 크면서 가장 작은 수, j를 i열 <= 에서 찾는다.
//    int j = n-1;
//    while(a[j] <= a[i-1]) j -= 1; // a[i-1]보다 크면서 가장 작은 수가 발견되면 밑으로 빠지고,
//    swap(a[i-1], a[j]); // a[i-1]과 a[j]를 스왑한다.
//
//    j = n-1; // 스왑 후, index 'j'는 끝자리로 재셋팅한다.
//
//    while(i < j){ // i~j까지의 인덱스 구간을 오름차순으로 정렬을 시킨다.
//        swap(a[i], a[j]);
//        i += 1; j -= 1;
//    }
//
//    return true;
//}
//
//
//int main() {
//    int n = 3;
//    while(n>=0)
//    n--;
//
//    printf("dd");
//
//
//
//    return 0;
//}
