
// MARK: - 줄어드는숫자 1174

// MARK: queue swift 문제풀이

/*
 import Foundation

 let K = Int(readLine()!)!
 if K <= 10 { print(K-1); exit(0) }
 var cnt = 11
 var Q = [Int](0...9)

 while !Q.isEmpty {
 let val = Q.first!
 Q.removeFirst()
 let target = val % 10
 for i in 0..<target {
     let now = val * 10 + i
     if now == 9876543210 && cnt < K { print(-1); exit(0) }
     if cnt == K { print(now); exit(0) }
     Q.append(now)
     cnt += 1
 }
 }
 */
