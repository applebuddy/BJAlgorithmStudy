
// MARK: - 로봇 13567
// MARK: Simulation swift 문제풀이

/*
import Foundation

let dx = [1,0,-1,0]
let dy = [0,1,0,-1]

let arr = readLine()!.split(separator: " ").map { Int($0)! }
let M = arr[0], N = arr[1]
var isValid = true

class Robot {
    var dir = 0
    var pos = [0, 0]
    init(_ dir: Int, _ pos: [Int]) {
        self.dir = dir
        self.pos = pos
    }
    
    func move(_ dist: Int) {
        let moveX = dx[dir] * dist
        let moveY = dy[dir] * dist
        pos[0] += moveX
        pos[1] += moveY
        if pos[0] < 0 || pos[1] < 0 || M <= pos[0] || M <= pos[1] {
            isValid = false
        }
    }
}

let robot = Robot(0, [0,0])
for _ in 0..<N {
    let arr2 = readLine()!.split(separator: " ")
    let command = String(arr2[0])
    let value = Int(arr2[1])!
    if command == "MOVE" {
        robot.move(value)
    } else if command == "TURN" {
        robot.dir += value == 0 ? 1 : -1
        if robot.dir < 0 { robot.dir = 3 }
        else if robot.dir >= 4 { robot.dir = 0 }
    }
}

if isValid { print("\(robot.pos[0]) \(robot.pos[1])") }
else { print(-1) }
*/
