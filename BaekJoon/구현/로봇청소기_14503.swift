//
//  로봇청소기_14503.swift
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/03/02.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: - 로봇청소기 14503
// MARK: 구현 swift 문제풀이

/*
import Foundation

let arr = readLine()!.split(separator: " ").map { Int($0)! }
let N = arr[0], M = arr[1]
let arr2 = readLine()!.split(separator: " ").map { Int($0)! }
let X = arr2[0], Y = arr2[1], Dir = arr2[2]
var G = [[Int]](repeating: [Int](), count: N)
var Ans = 0

for i in 0..<N {
    G[i] = readLine()!.split(separator: " ").map { Int($0)! }
}

let dx = [-1,0,1,0]
let dy = [0,1,0,-1]

class Robot {
    var posX = 0
    var posY = 0
    var dir = 0
    
    init(_ x: Int, _ y: Int, _ d: Int) {
        self.posX = x
        self.posY = y
        self.dir = d
    }
    
    func clean() {
        if G[posX][posY] == 0 {
            G[posX][posY] = 2
            Ans += 1
        }
    }
    
    func checkPlace() -> Bool {
        var nowDir = dir
        for _ in 0..<4 {
            nowDir -= 1
            if nowDir < 0 { nowDir = 3 }
            let nx = posX + dx[nowDir]
            let ny = posY + dy[nowDir]
            if nx < 0 || ny < 0 || nx >= N || ny >= M { continue }
            if G[nx][ny] >= 1 { continue }
            move(nx,ny,nowDir)
            return true
        }
        return false
    }
    
    private func move(_ X: Int, _ Y: Int, _ dir: Int) {
        self.posX = X
        self.posY = Y
        self.dir = dir
    }
    
    func back() -> Bool {
        let nx = posX - dx[self.dir]
        let ny = posY - dy[self.dir]
        if nx < 0 || ny < 0 || nx >= N || ny >= M { return false }
        if G[nx][ny] == 1 { return false }
        move(nx,ny,self.dir)
        return true
    }
}

let robot = Robot(X,Y,Dir)

while true {
    robot.clean()
    if !robot.checkPlace() {
        if !robot.back() {
            print(Ans); exit(0)
        }
    }
}
*/
