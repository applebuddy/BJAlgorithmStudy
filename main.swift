
//let arr = readLine()!.split(separator: " ").map { Int($0)! }
//let N = arr[0], L = arr[1], R = arr[2]
//let dx = [0,0,-1,1]
//let dy = [1,-1,0,0]
//
//var G = [[Int]](repeating: [Int](), count: N)
//var C = [[Int]](repeating: [Int](repeating: 0, count: N), count: N)
//var sum = 0, totMove = 0, Ans = 0
//var path = [(Int,Int)]()
//for i in 0..<N {
//    G[i] = readLine()!.split(separator: " ").map { Int($0)! }
//}
//
//func DFS(_ X: Int, _ Y: Int) {
//    for i in 0..<4 {
//        let nx = X + dx[i]
//        let ny = Y + dy[i]
//        if nx < 0 || ny < 0 || nx >= N || ny >= N { continue }
//        let diff = G[X][Y]>G[nx][ny] ? G[X][Y]-G[nx][ny] : G[nx][ny]-G[X][Y]
//        if C[nx][ny] == 1 || diff < L || diff > R { continue }
//        C[nx][ny] = 1
//        totMove += 1
//        sum += G[nx][ny]
//        path.append((nx,ny))
//        DFS(nx,ny)
//    }
//}
//
//while true {
//    C = [[Int]](repeating: [Int](repeating: 0, count: N), count: N)
//    totMove = 0
//    for i in 0..<N {
//        for j in 0..<N {
//            if C[i][j] == 1 { continue }
//            C[i][j] = 1
//            sum = 0
//            path = [(i,j)]
//            sum += G[i][j]
//            DFS(i,j)
//            let mergeValue = sum / path.count
//            for k in path.indices {
//                G[path[k].0][path[k].1] = mergeValue
//            }
//        }
//    }
//    if totMove == 0 { break }
//    else { Ans += 1 }
//}
//
//print(Ans)

//import Foundation
//
//let T = Int(readLine()!)!
//
//func checkIncNum(_ str: String) -> Bool {
//    let arr = Array(str).map { Int(String($0))! }
//    var t = arr[0]
//    for i in 1..<arr.count {
//        if arr[i] < t { return false }
//        t = arr[i]
//    }
//    return true
//}
//
//for _ in 0..<T {
//    let Target = readLine()!
//    let K = Int(Target)!
//    if !checkIncNum(Target) { print(-1); continue }
//    if K < 10 { print(max(0, K-1)) }
//    var cnt = 10
//    var Ans = 0
//    var Q = [String]()
//    for i in 0...9 { Q.append("\(i)") }
//
//    while !Q.isEmpty {
//        let val = Q.first!
//        let target = Int(String(Array(val).last!))!
//        Q.removeFirst()
//        for i in target...9 {
//            let next = "\(val)\(i)"
//            print(next)
//            if next.count > 80 { Ans = -1; break }
//            if next == Target { Ans = cnt; break  }
//            cnt += 1
//            Q.append(next)
//        }
//        if Ans > 0 { continue }
//        if Ans < 0 { print(Ans); continue }
//    }
//}
//
////enum Score: String {
////    case ap = "A+", a0 = "A0", am = "A-"
////    , bp = "B+", b0 = "B0", bm = "B-"
////    , cp = "C+", c0 = "C0", cm = "C-"
////    , dp = "D+", d0 = "D0", dm = "D-"
////    , f = "F"
////
////    var value: Double {
////        switch self {
////            case .ap: return 4.3
////            case .a0: return 4.0
////            case .am: return 3.7
////            case .bp: return 3.3
////            case .b0: return 3.0
////            case .bm: return 2.7
////            case .cp: return 2.3
////            case .c0: return 2.0
////            case .cm: return 1.7
////            case .dp: return 1.3
////            case .d0: return 1.0
////            case .dm: return 0.7
////            case .f: return 0.0
////        }
////    }
////}
////
////let score = readLine()!
////let Ans = Score(rawValue: score)!.value
////print(Ans)
//// let Ans = Score(rawValue: score)
//
////for i in 1...Int(readLine()!)! {
////    let _=Int(readLine()!)!
////    let f = Array(readLine()!)
////    let r = Array(readLine()!)
////    if #available(OSX 10.15, *) {
////        print("Case \(i): \(f.difference(from: r))")
////    } else {
////        // Fallback on earlier versions
////    }
//////}
////
////let S = "fuck"
////if S.index != nil {
////    print("YES")
////} else { print("NO") }
