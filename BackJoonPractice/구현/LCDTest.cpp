//
//  LCDTest.cpp
//  BackJoonPractice
//
//  Created by MinKyeongTae on 27/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - LCD TEST : 숫자 그리기
//. - 지민이는 새로운 컴퓨터를 샀다. 하지만 새로운 컴퓨터에 사은품으로 온 LC-디스플레이 모니터가 잘 안나오는 것이다. 지민이의 친한 친구인 지환이는 지민이의 새로운 모니터를 위해 테스트 할 수 있는 프로그램을 만들기로 하였다.
//  ✓ 출력방식 : 길이가 s인 '-'와 '|'를 이용해서 출력해야 한다. 각 숫자는 모두 s+2의 가로와 2s+3의 세로로 이루어 진다. 나머지는 공백으로 채워야 한다. 각 숫자의 사이에는 공백이 한 칸 있어야 한다.

#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> drawCode(10,vector<int>(7,0));

void drawNumber(int N, int size) {
    int height = size*2+3;
    int width = size+2;
    string numStr = to_string(N);
    int maxWidth = size+1+width*((int)numStr.length()-1)+(int)numStr.length()-1;
    vector<vector<char>> drawing(height,vector<char>(maxWidth+1,' '));
    
    for(int k=0; k<numStr.length(); k++) {
        // CODE 1) 상단 중앙
        int n = numStr[k]-'0';
        if(drawCode[n][0]==1)
        for(int j=1; j<width-1; j++) drawing[0][j+width*k+k]='-';
        // CODE 2) 상단 좌측
        if(drawCode[n][1]==1)
        for(int i=1; i<=size; i++) drawing[i][0+width*k+k]='|';
        // CODE 3) 상단 우측
        if(drawCode[n][2]==1)
        for(int i=1; i<=size; i++) drawing[i][size+1+width*k+k]='|';
        // CODE 4) 중앙
        if(drawCode[n][3]==1)
        for(int j=1; j<width-1; j++) drawing[size+1][j+width*k+k]='-';
        // CODE 5) 하단 좌측
        if(drawCode[n][4]==1)
        for(int i=size+2; i<=size*2+1; i++) drawing[i][0+width*k+k]='|';
        // CODE 6) 하단 우측
        if(drawCode[n][5]==1)
        for(int i=size+2; i<=size*2+1; i++) drawing[i][size+1+width*k+k]='|';
        // CODE 7) 하단 중앙
        if(drawCode[n][6]==1)
        for(int j=1; j<width-1; j++) drawing[height-1][j+width*k+k]='-';
    }
    
    for(int i=0; i<height; i++) {
        for(int j=0; j<=maxWidth; j++) {
            printf("%c",drawing[i][j]);
        }
        printf("\n");
    }
    return;
}

void initDrawCode() {
    drawCode = {
    {1,1,1,0,1,1,1},
    {0,0,1,0,0,1,0},
    {1,0,1,1,1,0,1},
    {1,0,1,1,0,1,1},
    {0,1,1,1,0,1,0},
    {1,1,0,1,0,1,1},
    {1,1,0,1,1,1,1},
    {1,0,1,0,0,1,0},
    {1,1,1,1,1,1,1},
    {1,1,1,1,0,1,1}};
    return;
}

//int main() {
//    initDrawCode();
//    int SIZE, NUM;
//    cin >> SIZE >> NUM;
//    drawNumber(NUM,SIZE);
//    
//    return 0;
//}

