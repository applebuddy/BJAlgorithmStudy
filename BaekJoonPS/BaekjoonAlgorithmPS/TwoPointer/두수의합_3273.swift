
// MARK: - 두수의합 3273

// MARK: TwoPointer swift 문제풀이

/*
 let N = Int(readLine()!)!
 let arr = readLine()!.split(separator: " ").map { Int($0)! }.sorted()
 let K = Int(readLine()!)!
 var left = 0, right = N-1
 var Ans = 0
 while left < right {
 if arr[left] + arr[right] == K {
     Ans += 1
     left += 1
     right -= 1
 } else if arr[left] + arr[right] > K {
     right -= 1
 } else {
     left += 1
 }
 }

 print(Ans)
 */
