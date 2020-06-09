
// MARK: - 두 용액 2470

// MARK: TwoPointer swift 문제풀이

/*
 let len = Int(readLine()!)!
 let G = readLine()!.split(separator: " ").map { Int($0)! }.sorted()

 var left = 0, right = len - 1
 var Ans = (0, 0)
 var MN = Int(2e9 + 1)

 while left < right {
 let diff = G[left] + G[right]
 let sbsDiff = diff < 0 ? diff * -1 : diff

 if MN > sbsDiff {
   MN = sbsDiff
   Ans.0 = G[left]
   Ans.1 = G[right]
 }

 if diff < 0 {
   left += 1
 } else {
   right -= 1
 }
 }

 print(Ans.0, Ans.1, separator: " ")
 */
