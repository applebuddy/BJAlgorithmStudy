
// MARK: - 문자메시지 2037

// MARK: swift 문제풀이

/*
 let arr = readLine()!.split(separator: " ").map { Int($0)! }
 let p = arr[0], w = arr[1]
 let S = Array(readLine()!).map { String($0) }

 let dic: [String:(Int,Int)] = [
 " ":(1,1)
 , "A":(2,1), "B":(2,2), "C":(2,3)
 , "D":(3,1), "E":(3,2), "F":(3,3)
 , "G":(4,1), "H":(4,2), "I":(4,3)
 , "J":(5,1), "K":(5,2), "L":(5,3)
 , "M":(6,1), "N":(6,2), "O":(6,3)
 , "P":(7,1), "Q":(7,2), "R":(7,3), "S":(7,4)
 , "T":(8,1), "U":(8,2), "V":(8,3)
 , "W":(9,1), "X":(9,2), "Y":(9,3), "Z":(9,4)
 ]

 var prev = 0
 var time = 0
 for i in S.indices {
 let d = dic[S[i]]!
 if d.0 != prev || d.0 == 1 {
   time += p * d.1
 } else {
   time += p * d.1 + w
 }
 prev = d.0
 }

 print(time)
 */
