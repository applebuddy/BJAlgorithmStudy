//
//  dd.cpp
//  BackJoonPractice
//
//  Created by Min Kyeong Tae on 17/04/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//


//#if 0
//#include <iostream>
//#include <vector>
//#include <cmath>
//using namespace std;
//
//int first[] = {2,3,5,7};
//
//bool isPrime(int N) {
//    if(N < 2) return false;
//    for(int i=2; i*i<=N; i++) {
//        if(N%i == 0) return false;
//    }
//    return true;
//}
//
//void checkWierdPrime(int N, int cnt) {
//    if(cnt == 0) {
//        printf("%d\n", N);
//        return;
//    }
//
//    for(int i=1; i<=9; i+=2) {
//        int now = N*10 + i;
//        if(isPrime(now)) {
//            checkWierdPrime(now, cnt-1);
//        }
//    }
//}
//
//int main() {
//    ios_base :: sync_with_stdio(0); cin.tie(0);
//    int N; cin>>N;
//
//    for(int i=0; i<4; i++) {
//        checkWierdPrime(first[i], N-1);
//    }
//    return 0;
//}
//#endif

//#include <iostream>
//#include <string>
//#include <vector>
//using namespace std;
//
//int tx[] = {0,0,1,-1};
//int ty[] = {1,-1,0,0};
//int Ans = 1;
//int N, M;
//
//vector<string> SV(21, string(21,' '));
//vector<int> C(26,0);
//
//void DFS(int x, int y, int depth) {
//    
//    for(int i=0; i<4; i++) {
//        int nx = x + tx[i];
//        int ny = y + ty[i];
//        if(nx<0 || ny<0 || nx>=N || ny>=M) continue;
//        if(C[SV[nx][ny]-'A']>0) continue;
//        C[SV[nx][ny]-'A'] = 1;
//        depth += 1;
//        Ans = depth > Ans ? depth : Ans;
//        DFS(nx, ny, depth);
//        C[SV[nx][ny]-'A'] = 0;
//        depth -= 1;
//        
//    }
//}
//
//int main() {
//    ios_base :: sync_with_stdio(0); cin.tie(0);
//    cin>>N>>M;
//    for(int i=0; i<N; i++) {
//        string S; cin>>S;
//        SV[i] = S;
//    }
//    
//    C[SV[0][0]-'A']=1;
//    DFS(0,0,1);
//    
//    printf("%d\n",Ans);
//    return 0;
//}

//#include <string>
//#include <vector>
//#include <algorithm>
//#include <set>
//#include <iostream>
//#include <sstream>
//
//using namespace std;
//
//bool compare (set<int> &a, set<int> &b) {
//    return a.size() < b.size();
//}
//
//vector<int> solution(string s) {
//    vector<int> answer;
//    vector<string> temp;
//    string tempStr = "";
//    vector<vector<string>> setV;
//    char prev=' ';
//    for(int i=0; i<s.length(); i++) {
//        if(s[i]=='}') {
//           temp.push_back(tempStr);
//           setV.push_back(temp);
//           temp.clear();
//           tempStr = "";
//        } else {
//            if(s[i]-'0'>=0 && s[i]-'0'<=9) {
//                tempStr+=s[i];
//            } else if(s[i]==',') {
//                temp.push_back(tempStr);
//                tempStr = "";
//            }
//        }
//        if(prev=='}' && s[i]=='}') break;
//        prev = s[i];
//    }
//    
//    vector<set<int>> compV;
//    // vector<set<int>> compV2;
//    for(auto sV: setV) {
//        for(auto v: sV) {
//            string tempS;
//            set<int> tempST;
//            for(stringstream ss(v); ss>>tempS;) {
//                tempST.insert(stoi(tempS));
//            }
//            compV.push_back(tempST);
//        }
//    }
//
//    for(auto cv: compV) {
//        for(auto v: cv) {
//            printf("%d,",v);
//        }
//        puts("");
//    }
//    
//    return answer;
//}
//
//int main() {
//    
//    return 0;
//}
//#include <iostream>
//
//using namespace std;
//
//int main() {
//    
//    
//    return 0;
//}

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

//int main() {
////    cin.tie(NULL);
////    ios::sync_with_stdio(false);
//    
//    int a = 0,b = 0,c = 0;
//    cin >> a >> b >> c;
//    cout << (a+b)%c << endl;
//    cout << (a%c + b%c)%c << endl;
//    cout << (a*b)%c << endl;
//    cout << (a%c * b%c)%c << endl;
//
//    return 0;
//}

