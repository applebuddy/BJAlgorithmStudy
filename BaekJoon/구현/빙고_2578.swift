//
//  빙고_2578.swift
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/02/27.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: - 빙고 2578
// MARK: 구현 swift 문제풀이

/*
import Foundation

var dic = [Int](repeating: 0, count: 26)
var key = [(Int,Int)](repeating: (0,0), count: 26)
var board = [[Int]](repeating: [Int](), count: 5)
var answer = [[Int]](repeating: [Int](), count: 5)
var bingo = 0
var count = 0
var flag = [0,0]
func checkBingo(_ N: Int) {
    dic[N] = 1
    
    let X = key[N].0
    let Y = key[N].1
    
    for i in 0..<5 {
        if X != i && dic[board[i][Y]] == 0 { break }
        if i==4 { bingo += 1 }
    }
    if bingo >= 3 { print(count); exit(0) }
    
    for j in 0..<5 {
        if Y != j && dic[board[X][j]] == 0 { break }
        if j==4 { bingo += 1 }
    }
    if bingo >= 3 { print(count); exit(0) }
    
    for k in 0..<5 {
        if dic[board[k][k]] == 0 || flag[0] == 1 { break }
        if k==4 { bingo += 1; flag[0] = 1 }
    }
    if bingo >= 3 { print(count); exit(0) }
    
    for k in 0..<5 {
        if dic[board[4-k][k]] == 0 || flag[1] == 1 { break }
        if k==4 { bingo += 1; flag[1] = 1 }
    }
    if bingo >= 3 { print(count); exit(0) }
}

for i in 0..<5 {
    board[i] = readLine()!.split(separator: " ").map { Int($0)! }
}

for i in board.indices {
    for j in board[i].indices {
        key[board[i][j]] = (i,j)
    }
}

for i in 0..<5 {
    answer[i] = readLine()!.split(separator: " ").map { Int($0)! }
}

for i in answer.indices {
    for j in answer[i].indices {
        count += 1
        checkBingo(answer[i][j])
    }
}
*/
