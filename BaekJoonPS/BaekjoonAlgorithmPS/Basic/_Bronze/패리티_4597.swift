
// MARK: - 패리티 4597

// MARK: swift 문제풀이

/*
 while true {
 var S = Array(readLine()!).map { String($0) }
 if S.count == 1 && S.first! == "#" { break }
 let oneCnt = S.filter { $0 == "1" }.count
 if S.last! == "e" {
   S[S.count-1] = oneCnt & 1 == 0 ? "0" : "1"
 } else {
   S[S.count-1] = oneCnt & 1 == 0 ? "1" : "0"
 }

 print(S.joined())
 }
 */
