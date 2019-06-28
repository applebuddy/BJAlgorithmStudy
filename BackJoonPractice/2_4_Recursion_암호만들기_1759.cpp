//
//  2_4_Recursion_암호만들기_1759.cpp
//  BackJoonPractice
//
//  Created by Min Kyeong Tae on 27/04/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

//문제
//바로 어제 최백준 조교가 방 열쇠를 주머니에 넣은 채 깜빡하고 서울로 가 버리는 황당한 상황에 직면한 조교들은, 702호에 새로운 보안 시스템을 설치하기로 하였다. 이 보안 시스템은 열쇠가 아닌 암호로 동작하게 되어 있는 시스템이다.
//
//암호는 서로 다른 L개의 알파벳 소문자들로 구성되며 최소 한 개의 모음과 최소 두 개의 자음으로 구성되어 있다고 알려져 있다. 또한 정렬된 문자열을 선호하는 조교들의 성향으로 미루어 보아 암호를 이루는 알파벳이 암호에서 증가하는 순서로 배열되었을 것이라고 추측된다. 즉, abc는 가능성이 있는 암호이지만 bac는 그렇지 않다.
//
//새 보안 시스템에서 조교들이 암호로 사용했을 법한 문자의 종류는 C가지가 있다고 한다. 이 알파벳을 입수한 민식, 영식 형제는 조교들의 방에 침투하기 위해 암호를 추측해 보려고 한다. C개의 문자들이 모두 주어졌을 때, 가능성 있는 암호들을 모두 구하는 프로그램을 작성하시오.
//
//입력
//첫째 줄에 두 정수 L, C가 주어진다. (3 ≤ L ≤ C ≤ 15) 다음 줄에는 C개의 문자들이 공백으로 구분되어 주어진다. 주어지는 문자들은 알파벳 소문자이며, 중복되는 것은 없다.
//
//출력
//각 줄에 하나씩, 사전식으로 가능성 있는 암호를 모두 출력한다.

// MARK:- 암호만들기 재귀함수의 형태
// n:만들어야하는 암호의길이, alpha:사용가능한 알파벳, password:현재까지 만든 암호, i: 사용할지 판달할 알파벳인덱스
//getPwd(n, alpha, password, i)

// 1) 불가능한 경우 : 함수호출을 지속못하는 경우 ex) i>alpha의 크기
// 2) 정답을 찾은 경우 : n == password의 길이
// 3) 다음 경우를 호출(인덱스의 선택한다, 하지않는다를 판단)
//    * 사용 했다면? go(n, alpha, password + alpha[i], i+1) // i번째 알파벳을 추가하고, 탐색할 인덱스 값을 1 증가시킨다.
//    * 사용하지 않았다면? go(n, alpha, password, i+1)  => 만약 더이상 탐색할 인덱스가 없을때 동시에 비밀번호가 완성될 경우(중복되는 경우)가 존재하므로, 불가능한경우 전에 정답을 찾은경우를 적어준다.

// 비밀번호를 정하기

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
// 한개의 모음, 두개의 자음으로 구성되어있는지를 판독하여 true, false여부를 판독하는 check 함수
bool checkPwd(string pwd){
    
    int length = pwd.length();
    int jaum = 0; // 자음의 갯수
    int moum = 0; // 모음의 갯수
    
    for(int i=0; i<length; i++){
        char c = pwd[i];
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            moum++;
        } else {
            jaum++;
        }
    }
    // 만약 자음이 2개, 모음이 1개 이상이면 조건을 충족하므로 true를 반환한다.
    if((moum >= 1)&&(jaum >= 2)){
        return true;
    } else {
    return false;
    }
}


void getPwd(int length, vector<char> &alpha, string pwd, int index){
    
    // 1) 만약 암호가 충족이 된다면,
    if(length == pwd.length()) {
        
        if(checkPwd(pwd)){ // 한개모음, 두개의자음이 구성되어있는지 판독한다.
            // 암호조건이 성립하면 출력을 해준다.
            cout << pwd << endl;
        }
        // 성립하지않으면 그대로 해당위치의 작업을 종료한다.
        return;
    }
    
    // 2) 만약 암호 작업의 문제가 있다면,
    // 이미 문자열길이충족이 되고, 암호유효성 검사를 끝낸 상태에서 탐색가능한 문자열크기를 넘어가려하면 해당위치의 작업을 종료한다.
    if(index >= alpha.size()) return;
    
    // 3) 추가적인 작업이 필요하다면,
       // * 해당인덱스의 알파벳을 추가하는 경우 or 추가하지 않고 다음 문자를 사용하는 경우를 각각 확인한다.
    // 탐색한 문자를 pwd에 추가하고, 다음인덱스(index+1)의 문자를 탐색한다.
    getPwd(length,alpha,pwd+alpha[index],index+1);
    getPwd(length,alpha,pwd,index+1);
}

int main() {
    
    int L,C;
    scanf("%d %d",&L,&C); // L과 C를 입력받는다. 암호로 사용가능한 문자 C가지 이중 L개로 구성되는 암호
    vector<char> alpha(C); // C만한 크기의 문자열벡터
    
    for(int i=0; i<C; i++){ // C만한 크기의 문자를 입력받는다.
        scanf("%s",&alpha[i]);
    }
    
    sort(alpha.begin(), alpha.end());
    
    // getPwd의 인자값은 1.암호의길이, 2.사용되는문자열, 3.만들어질암호, 4.탐색할 인덱스가 들어간다.
    getPwd(L,alpha,"",0);

    return 0;
}
