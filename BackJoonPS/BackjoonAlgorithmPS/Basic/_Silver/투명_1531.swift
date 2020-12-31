
// MARK: - 투명 1531

// MARK: swift 문제풀이

/*
 let arr = readLine()!.split(separator: " ").map { Int($0)! }
 let N = arr[0], M = arr[1]

 var G = [[Int]](repeating: [Int](repeating: 0, count: 101), count: 101)
 var Ans = 0

 for _ in 0..<N {
 let arr2 = readLine()!.split(separator: " ").map { Int($0)! }
 let x1 = arr2[0], y1 = arr2[1], x2 = arr2[2], y2 = arr2[3]
 for i in x1...x2 {
   for j in y1...y2 {
     G[i][j] += 1
     if G[i][j] == M+1 { Ans += 1 }
   }
 }
 }

 print(Ans)
 */
