//
//  testing.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 09/11/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//




#if 0
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
//    vector<int> Ans;
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
//    vector<set<int>> compST;
//    set<int> tempST;
//    for(auto cv: compV) {
//        if(cv.size()==0) {
//            compST.push_back(tempST);
//            tempST.clear();
//        }
//        for(auto v: cv) {
////            printf("%d,",v);
//            tempST.insert(v);
//        }
////        puts("");
//    }
//
//    for(auto vc: compST) {
//
////        for(auto v: vc) {
////            printf("%d ",v);
////        }
////        puts("");
//    }
////
////    sort(compST.begin(), compST.end(), compare);
////    for(auto vc: compST) {
////        set<int>::iterator iter = vc.begin();
////        int value = (*iter);
////        Ans.push_back(value);
////        for(vector<set<int>>::iterator iter=compST.begin(); iter!=compST.end(); iter++) (*iter).erase(value);
////        Ans.erase(Ans.begin());
////        Ans.erase(<#const_iterator __first#>, <#const_iterator __last#>)
////
////        for(auto v: vc) {
////            printf("%d ", v);
////        }
////        puts("");
////    }
//
//    set<int> ST;
//    ST.insert(1);
//    ST.erase(1);
//
//    return Ans;
//}

#include <string>
#include <vector>
#include <queue>
#include <set>

using namespace std;

bool checkBanned(string id, string banStr) {
    bool flag = true;
    if(id.length() != banStr.length()) return false;
    for(int i=0; i<id.length(); i++) {
        if(banStr[i]!='*' && banStr[i]!=id[i]) return false;
    }
    return true;
}

// // BFS 임의로 일단 두기
// void BFS(int startIdx, vector<set<string>> bannedCase) {
//     set<string> startCase = bannedCase[startIdx];
//     set<string> ST;
//     set<int>::iterator iter = ST.begin();
//     ST.insert(startCase);
//     int stSize = ST.size();
//     for(int i=start+1; i<bannedCase.size(); i++) {
//         int nextCase = bannedCase[i];
//         for(auto v: bannedCase[i]) {
//             iter = ST.find(v);
//             // 만약 중복요소가 존재하면 생략한다.
//             if(iter==ST.end()) continue;
//             else {
//                 // 중복되지 않다면 요소를 추가한다.
//                 ST.insert(v);
//             }
//         }
        
//     }
// }

int Ans=0;
int CNT=0;
set<set<string>> SST;
void DFS(set<string> ST, int sIdx, vector<set<string>> bannedCase) {
    CNT++;
    if(sIdx >= bannedCase.size()) {
        SST.insert(ST);
        // for(auto v: ST) {
        //     printf("%s ",v.c_str());
        // }
        puts("");
        return;
    }
    
    set<string>::iterator iter = ST.begin();
    for(int i=sIdx; i<bannedCase.size(); i++) {
        bool flag=false;
        for(auto st: bannedCase[i]) {
            iter = ST.find(st);
            // 만약 중복값이 아니라면 DFS 탐색을 진행한다.
            if(iter==ST.end()) {
                ST.insert(st);
                DFS(ST,sIdx+1,bannedCase);
                flag = true;
                ST.erase(st);
            } else {
                // 만약 중복값이라면 다음 케이스를 확인한다.
            }
        }
        // 꼭 포함되는 케이스 내에 해당할 수 있는 케이스 아이디가 없다면 종료
        if(!flag) return;
    }
}

int solution(vector<string> user_id, vector<string> banned_id) {
    int answer = 0;
    vector<set<string>> bannedCase;
    
    for(int i=0; i<banned_id.size(); i++) {
        set<string> tempST;
        for(int j=0; j<user_id.size(); j++) {
            if(checkBanned(user_id[j], banned_id[i])) {
                // tempST.insert();
                tempST.insert(user_id[j]);
                // printf("%s,%s.. is True\n",banned_id[i].c_str(),user_id[j].c_str());
            } else {
                // printf("%s, %s.. is False\n",banned_id[i].c_str(),user_id[j].c_str());
            }
        }
        if(tempST.size()!=0) bannedCase.push_back(tempST);
    }
    
    set<string> startST;
    DFS(startST, 0, bannedCase);
    // printf("CNT : %d\n",CNT);
    for(auto V: SST) {
        for(auto v: V) {
            printf("%s ",v.c_str());
        }
        puts("");
    }
    return SST.size();
}

int main() {
    //{{20,111},{111}}
    int Ans = solution({"frodo", "fradi", "crodo", "abc123", "frodoc"}, {"fr*d*", "*rodo", "******", "******"});
//    for(auto v : Ans) printf("%d ",v);
    printf("%d\n",Ans);
    puts("");
    return 0;
}
#endif
