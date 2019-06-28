//
//  N^ForLoop.cpp
//  BackJoonPractice
//
//  Created by Min Kyeong Tae on 19/04/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

#include <iostream>
using namespace std;

// MARK:- N중 for문 : N개 중에 일부를 선택해야 하는 경우에 많이 사용한다.
//                   ★ 재귀 호출이나 비트마스크를 사용하면 더 간결하고 보기 쉬운 코드를 작성할 수 있기 때문에, 사용할 일이 거의 없다.

// MARK: 1,2,3 더하기
// 1~3의 숫자만으로 더하는 조합의 갯수를 구한다. 여기서는 다중 for문으로 구현을 해본다.
// 1~3으로 표현해야하는 N의 크기는 11을 넘지 않는다. N이 최댓값 10인 경우 가장 많이 필요한 숫자의 갯수는 10개이다. (1+1+1+1+....+1) 이 경우는 3^n의 복잡도를 가진다.

int main() {
    
    int num = 0, n = 0;
    
    cin >> num; // 총 몇개의 정수를 알아볼 지 입력한다.
    int *arr = new int[num]; // num번만큼의 정수값을 입력받을 준비를 한다.
    int *sol = new int[num]; // 각 정수 별 결과값을 담는다.
    
    for(int i=0; i<num; i++){
        cin >> arr[i];
    }
    
    
    for(int i=0; i<num; i++){
        n = arr[i];
        
    for(int i1=1; i1<=3; i1++) {
        if(i1 == n) sol[i]++;
        for(int i2=1; i2<=3; i2++) {
            if(i1+i2 == n) sol[i]++;
            for(int i3=1; i3<=3; i3++) {
                if(i1+i2+i3 == n) sol[i]++;
                for(int i4=1; i4<=3; i4++) {
                    if(i1+i2+i3+i4 == n) sol[i]++;
                    for(int i5=1; i5<=3; i5++) {
                        if(i1+i2+i3+i4+i5 == n) sol[i]++;
                        for(int i6=1; i6<=3; i6++) {
                            if(i1+i2+i3+i4+i5+i6 == n) sol[i]++;
                            for(int i7=1; i7<=3; i7++) {
                                if(i1+i2+i3+i4+i5+i6+i7 == n) sol[i]++;
                                for(int i8=1; i8<=3; i8++) {
                                    if(i1+i2+i3+i4+i5+i6+i7+i8 == n) sol[i]++;
                                    for(int i9=1; i9<=3; i9++) {
                                        if(i1+i2+i3+i4+i5+i6+i7+i8+i9 == n) sol[i]++;
                                        for(int i0=1; i0<=3; i0++) {
                                            if(i1+i2+i3+i4+i5+i6+i7+i8+i9+i0 == n) sol[i]++;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    }

    for(int i=0; i<num; i++){
        cout << sol[i] << "\n";
    }
    
    return 0;
}
