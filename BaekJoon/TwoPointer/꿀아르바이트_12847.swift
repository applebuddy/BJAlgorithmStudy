
// MARK: - 꿀 아르바이트 12847

// MARK: TwoPointer swift 문제풀이

/*
 let arr = readLine()!.split(separator: " ").map { Int($0)! }
 let N = arr[0], M = arr[1]
 let G = readLine()!.split(separator: " ").map { Int($0)! }

 var sum = G[0..<M].reduce(0, +)
 var Ans = sum

 var left = 0, right = M
 while right < G.count {
 sum -= G[left]
 sum += G[right]
 Ans = Ans < sum ? sum : Ans
 left += 1
 right += 1
 }

 print(Ans)
 */
