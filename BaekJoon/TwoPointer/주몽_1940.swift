
// MARK: - 주몽 1940

// MARK: twoPointer swift 문제풀이

/*
 let N = Int(readLine()!)!
 let K = Int(readLine()!)!
 let arr = readLine()!.split(separator: " ").map { Int($0)! }.sorted()
 var l = 0, r = arr.count-1
 var Ans = 0
 while l < r {
 if arr[l] + arr[r] == K {
   l += 1
   r -= 1
   Ans += 1
 } else if arr[l] + arr[r] > K {
   r -= 1
 } else {
   l += 1
 }
 }

 print(Ans)
 */
