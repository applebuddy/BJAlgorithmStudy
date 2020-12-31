
// MARK: - 주사위

// MARK: swift 문제풀이

/*
 let arr = readLine()!.split(separator: " ").map { Int($0)! }

 let S1 = arr[0], S2 = arr[1], S3 = arr[2]
 var Ans = 0
 var mx = 0

 var dic = [Int](repeating: 0, count: 100)
 for i in 1...S1 {
 for j in 1...S2 {
   for k in 1...S3 {
     dic[i+j+k] += 1
     if mx < dic[i+j+k] {
       mx = dic[i+j+k]
       Ans = i+j+k
     }
   }
 }
 }

 print(Ans)
 */
