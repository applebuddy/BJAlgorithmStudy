//
//  Set_Func활용하기.cpp
//  BackJoonPractice
//
//  Created by Min Kyeong Tae on 05/06/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//



//// 하노이탑 이동 순서_11729
//#include <stdio.h>
//#include <vector>
//using namespace std;
//int cnt=0;
//typedef pair<int,int> Pair;
//vector<Pair> sol;
//
//void move(int from, int to){
//    cnt++;
//    sol.push_back(make_pair(from,to));
//}
//
//void hanoi(int n, int from, int by, int to){
//    if(n==1){
//        move(from,to);
//    }else{
//    hanoi(n-1,from,to,by);
//    move(from,to);
//    hanoi(n-1,by,from,to);
//    }
//}
//
//int main(){
//    int N; scanf("%d",&N);
//    hanoi(N,1,2,3);
//    printf("%d\n",cnt);
//    for(int i=0; i<(int)sol.size(); i++) printf("%d %d\n",sol[i].first,sol[i].second);
//    return 0;
//}

//#include <iostream>
//using namespace std;
//int main()
//{
//    bool count = false;
//    int words=0;
//    char name = ' ';
//    while (scanf("%c", &name) != -1) { // 입력받은게 끝날때까지 계속 진행
//        if ((count==true)&&(name == ' ')) { // 단어가 하나 인식되었고, 공백이 다시 발견되었다면, 다음 단어를 확인할 준비를 한다.
//            count = false;
//        } else if (((count == false) && (name != ' '))||name=='\n') { // 공백이후, 단어가 다시 발견되었다면 word++ 후, count==false => 다시 공백을 기다린다.
//            count = true;
//            words++;
//            if(name=='\n') break;
//        }
//    }
//    printf("%d\n", words-1);
//    return 0;
//}
