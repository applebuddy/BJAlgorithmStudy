//
//  Set_Func활용하기.cpp
//  BackJoonPractice
//
//  Created by Min Kyeong Tae on 05/06/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

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
