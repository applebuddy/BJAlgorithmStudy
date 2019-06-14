//
//  Permutation_nextPermutation_10972.cpp
//  BackJoonPractice
//
//  Created by Min Kyeong Tae on 21/04/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

// 10972_Prev Permutation, 이전순열
// 1부터 N까지의 수로 이루어진 순열이 있다. 이때, 사전순으로 바로 이전에 오는 순열을 구하는 프로그램을 작성하시오.
//
// 사전 순으로 가장 앞서는 순열은 오름차순으로 이루어진 순열이고, 가장 마지막에 오는 순열은 내림차순으로 이루어진  순열이다.
//
// N = 3인 경우에 사전순으로 순열을 나열하면 다음과 같다.
//
// 1, 2, 3
// 1, 3, 2
// 2, 1, 3
// 2, 3, 1
// 3, 1, 2
// 3, 2, 1
// 첫째 줄에 입력으로 주어진 순열의 이전에 오는 순열을 출력한다. 만약, 사전순으로 가장 처음에 오는 순열인 경우에는 -1을 출력한다.

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    
    if(prev_permutation(a.begin(), a.end())){
        for(int i=0; i<n; i++){
            cout << a[i] << " ";
        }
    } else {
        cout << "-1";
    }
    cout << "\n";
    return 0;
}


//// 10972_Next Permutation, 다음순열
////. 1부터 N까지의 수로 이루어진 순열이 있다. 이때, 사전순으로 다음에 오는 순열을 구하는 프로그램을 작성하시오.
////.
////. 사전 순으로 가장 앞서는 순열은 오름차순으로 이루어진 순열이고, 가장 마지막에 오는 순열은 내림차순으로 이루어진 . 순열이다.
////.
////. N = 3인 경우에 사전순으로 순열을 나열하면 다음과 같다.
////.
////. 1, 2, 3
////. 1, 3, 2
////. 2, 1, 3
////. 2, 3, 1
////. 3, 1, 2
////. 3, 2, 1
////  첫째 줄에 입력으로 주어진 순열의 다음에 오는 순열을 출력한다. 만약, 사전순으로 마지막에 오는 순열인 경우에는 -1을 출력한다.
//
//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int main() {
//
//    int n;
//    cin >> n; // n개의 요소를 가진 수열을 입력받는다.
//    vector<int> a(n); // 1~4개의 크기를 가진 벡터 수열
//
//
//    for(int i=0; i<n; i++){
//        cin >> a[i]; // 벡터에 수열을 입력받는다.
//    }
//
//    if(next_permutation(a.begin(),a.end())){ // 해당 수열의 다음수열이 존재해 처리되었다면,,
//        for(int i=0; i<n; i++){
//            cout << a[i] << " ";
//        }
//
//    } else { // 해당 수열의 다음수열이 존재하지 않는다면,
//        // -1을 출력하고 종료시킨다.
//        cout << -1;
//    }
//    cout << "\n";
//
//    return 0;
//}
