//
//  NBA농구_2852.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 02/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - NBA농구_2852 : 반례 찾는중... 미해결 답안
//#include <iostream>
//#include <string>
//#include <vector>
//using namespace std;
//
//typedef pair<int,int> Pair;
//int main() {
//    ios_base :: sync_with_stdio(0); cin.tie(0);
//    int T; cin>>T;
//    int score[2] = {0,0};
//    Pair t = make_pair(0,0);
//    Pair tmp = make_pair(0,0);
//    vector<Pair> Ans(2,make_pair(0,0));
//    bool isWin=false;
//    while(T--) {
//        int N;
//        string time;
//        cin>>N>>time;
//        score[N-1]++;
//
//        int nowMin = stoi(time.substr(0,2));
//        int nowSec = stoi(time.substr(3,2));
//        tmp.first = nowMin;
//        tmp.second = nowSec;
//
//        if(isWin==false) {
//            isWin=true;
//            t=tmp;
//            continue;
//        }
//
//        if(score[0]+score[1]==1) {
//            t.first = nowMin;
//            t.second = nowSec;
//            continue;
//        }
//        // 점수가 동일하면 그 직전까지 우위에 있던 팀의 이긴 기간을 추가
//        if(score[0]==score[1]) {
//            isWin=false;
//            if(t.second > nowSec) {
//                nowMin-=(t.first+1);
//                nowSec=60-(t.second-nowSec);
//            } else {
//                nowMin = nowMin-t.first;
//                nowSec = nowSec-t.second;
//            }
//            Ans[3-N-1].first += nowMin;
//            Ans[3-N-1].second += nowSec;
//
//        } else if(score[0]>score[1] || score[0]<score[1]) {
//
//            if(t.second > nowSec) {
//                nowMin--;
//                nowSec=60-(t.second-nowSec);
//            } else {
//                nowMin = nowMin-t.first;
//                nowSec = nowSec-t.second;
//            }
//
//            if(score[0] > score[1]) {
//                Ans[0].first += nowMin;
//                Ans[0].second += nowSec;
//            } else {
//                Ans[1].first += nowMin;
//                Ans[1].second += nowSec;
//            }
//        }
//
//        t = tmp;
//    }
//
//    if(score[0]>score[1]) {
//        if(t.second==0) {
//            Ans[0].first += (48-t.first);
//        } else {
//            Ans[0].first += (48-t.first-1);
//            Ans[0].second += (60-t.second);
//        }
//    } else if(score[0]<score[1]){
//        if(t.second==0) {
//            Ans[1].first += (48-t.first);
//        } else {
//            Ans[1].first += (48-t.first-1);
//            Ans[1].second += (60-t.second);
//        }
//    }
//
//    printf("%02d:%02d\n%02d:%02d\n",
//           Ans[0].first+Ans[0].second/60,
//           Ans[0].second%60,
//           Ans[1].first+Ans[1].second/60,
//           Ans[1].second%60);
//    return 0;
//}
