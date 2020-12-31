
// MARK: - 코스튬 파티 6159

// MARK: swift 문제풀이

/*
 let arr = readLine()!.split(separator: " ").map { Int($0)! }

 let N = arr[0], S = arr[1]
 var cow = [Int]()
 for _ in 0..<N {
 cow.append(Int(readLine()!)!)
 }

 cow.sort()

 var Ans = 0

 for i in 0..<N-1 {
 if cow[i] + cow[i+1] > S { break }
 for j in i+1..<N {
   if cow[i] + cow[j] <= S { Ans += 1 }
   else { break }
 }
 }

 print(Ans)
 */
