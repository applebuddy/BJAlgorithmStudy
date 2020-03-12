//
//  토마토_7576.swift
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/01/01.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: - 토마토 7576

// MARK: stackQueue 활용 답안
/*
import Foundation

let arr = readLine()!.split(separator: " ").map { Int($0)! }
let M = arr[0], N = arr[1]
var G = [[Int]](repeating: [Int](), count: N)
var Ans = 0
let dx = [0,0,1,-1]
let dy = [1,-1,0,0]

struct DoubleStackQueue<T> {
    var leftStack = [T]()
    var rightStack = [T]()
    
    mutating func push(_ val: T) {
        rightStack.append(val)
    }
    
    mutating func pop() {
        if leftStack.isEmpty {
            leftStack = rightStack.reversed()
            rightStack.removeAll()
        }
        leftStack.removeLast()
    }
    
    mutating func front() -> T? {
        return !leftStack.isEmpty ? leftStack.last! : rightStack.first!
    }
    
    func empty() -> Bool {
        return leftStack.isEmpty && rightStack.isEmpty
    }
}

for i in 0..<N {
    G[i] = readLine()!.split(separator: " ").map { Int($0)! }
}

var DQ = DoubleStackQueue<(Int,Int)>()
var rem = 0

for i in G.indices {
    for j in G[i].indices {
        if G[i][j] == 1 { DQ.push((i,j)) }
        else if G[i][j] == 0 { rem += 1 }
    }
}

if rem == 0 { print(0); exit(0) }

func BFS() {
    while !DQ.empty() {
        let nowQ = DQ.front()!
        let x = nowQ.0
        let y = nowQ.1
        DQ.pop()
        for i in 0..<4 {
            let nx = x + dx[i]
            let ny = y + dy[i]
            if nx < 0 || ny < 0 || nx >= N || ny >= M { continue }
            if G[nx][ny] != 0 { continue }
            G[nx][ny] = G[x][y] + 1
            Ans = Ans < G[nx][ny] ? G[nx][ny] : Ans
            rem -= 1
            if rem <= 0 { break }
            DQ.push((nx,ny))
        }
    }
}

BFS()

if rem > 0 { print(-1) }
else { print(Ans-1) }
*/

// MARK: cursored Queue 활용 답안

/*
import Foundation

let arr = readLine()!.split(separator: " ").map { Int($0)! }
let M = arr[0], N = arr[1]
var G = [[Int]](repeating: [Int](), count: N)
var Ans = 0
let dx = [0,0,1,-1]
let dy = [1,-1,0,0]

for i in 0..<N {
    G[i] = readLine()!.split(separator: " ").map { Int($0)! }
}

var Q = [(Int,Int)]()
var rem = 0

for i in G.indices {
    for j in G[i].indices {
        if G[i][j] == 1 { Q.append((i,j)) }
        else if G[i][j] == 0 { rem += 1 }
    }
}

if rem == 0 { print(0); exit(0) }

func BFS() {
    var cursor = 0
    while Q.count > cursor {
        let nowCur = Q.count - cursor
        for _ in 0..<nowCur {
            let nowQ = Q[cursor]
            let x = nowQ.0
            let y = nowQ.1
            cursor += 1
            
            for i in 0..<4 {
                let nx = nowQ.0 + dx[i]
                let ny = nowQ.1 + dy[i]
                if nx < 0 || ny < 0 || nx >= N || ny >= M { continue }
                if G[nx][ny] != 0 { continue }
                G[nx][ny] = G[x][y] + 1
                Ans = Ans < G[nx][ny] ? G[nx][ny] : Ans
                rem -= 1
                if rem <= 0 { break }
                Q.append((nx,ny))
            }
        }
    }
}

BFS()

if rem > 0 { print(-1) }
else { print(Ans-1) }
*/
