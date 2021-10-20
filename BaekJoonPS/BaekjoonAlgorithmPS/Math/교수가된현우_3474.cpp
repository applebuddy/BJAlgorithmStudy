//
//  교수가된현우_3474.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 29/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 교수가된현우_3474
//. * 시간초과 문제 해결못함
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

//int C1[1000000001] = {0,};
//int C2[1000000001] = {0,};

//void professorHyenwoo2() {
//
//    int T; cin>>T;
//       for(int i=0; i<T; i++) {
//           int N; cin>>N;
//           C1[2] = 1;
//           C2[5] = 1;
//           int two=0,five=0;
//           if(C2[N]!=0) {
//               printf("%d\n",min(C1[N],C2[N]));
//               break;
//           }
//
//           for(int i=6; i<=N; i++) {
//               if(C2[i]==1) continue;
//               int n = i;
//               while(n%2==0) {
//                   n/=2;
//                   two++;
//               }
//               n = i;
//               while(n%5==0) {
//                   n/=5;
//                   five++;
//               }
//               C1[N] = C1[N-1]+two;
//               C2[N] = C2[N-1]+five;
//           }
//           printf("%d\n",min(C1[N],C2[N]));
//       }
//    return;
//}

//// 시간초과 답안)
//void professorHyenwoo() {
//    int T; cin>>T;
//       for(int i=0; i<T; i++) {
//           int N; cin>>N;
//           int two=0,five=0;
//               for(int i=2; i<=N; i++) {
//                   int n = i;
//                   while(n%2==0) {
//                       n/=2;
//                       two++;
//                   }
//                   n = i;
//                   while(n%5==0) {
//                       n/=5;
//                       five++;
//                   }
//               }
//               printf("%d\n",min(two,five));
//       }
//    return;
//}

//int main() {
//    professorHyenwoo2();
//    return 0;
//}
