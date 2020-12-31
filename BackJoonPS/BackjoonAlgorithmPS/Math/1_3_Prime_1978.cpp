////
////  Prime_1978.cpp
////  BackJoonPractice
////
////  Created by Min Kyeong Tae on 17/04/2019.
////  Copyright © 2019 Min Kyeong Tae. All rights reserved.
////
//
//#include <iostream>
//using namespace std;
//
//// MARK: Find PrimeNumber, 소수 찾기
//// 주어진 수 N개 중에서 소수가 몇 개인지 찾아서 출력하는 프로그램을 작성하시오.
//// 첫 줄에 수의 개수 N이 주어진다. N은 100이하이다. 다음으로 N개의 수가 주어지는데 수는 1,000 이하의 자연수이다.
//
//bool checkPrime(int a){
//    if(a<2){
//        return false;
//    }
//    
//    for(int i=2; i*i<=a; i++){
//        if(a%i==0){
//            return false;
//        }
//    }
//    
//    return true;
//}
//
//int main() {
//    
//    int num;
//    int count=0;
//    
//    scanf("%d",&num);
//    int *arr = new int[num];
//    
//    for(int i=0; i<num; i++){
//        cin >> arr[i];
//    }
//    
//    for(int i=0; i<num; i++){
//        if(checkPrime(arr[i])){
//            count++;
//        }
//    }
//    
//    cout << count;
//    
//    return 0;
//}
//
//
//
//
////bool checkPrime(int a) {
////
////    if(a<2) {
////        return false;
////    } else {
////        for(int i=2; i*i<=a; i++){
////            if(a%i == 0){
////                return false;
////            }
////        }
////    }
////
////    return true;
////}
////
////int main(){
////
////    int n = 0;
////    int primeNum = 0;
////    cin >> n;
////
////    int *arr = new int[n];
////    for(int i=0; i<n; i++){
////        cin >> arr[i];
////    }
////
////    // checkPrime
////    for(int i=0; i<n; i++){
////        if(checkPrime(arr[i])){
////            primeNum++;
////        }
////    }
////
////    cout << primeNum;
////
////    return 0;
////}
