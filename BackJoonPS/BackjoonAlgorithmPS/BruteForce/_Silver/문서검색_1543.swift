
// MARK: - 문서검색 1543
// MARK: BruteForce swift 문제풀이

/*
let A = Array(readLine()!)
let B = Array(readLine()!)
let aLen = A.count, bLen = B.count

var Ans = 0, idx = 0

func findCnt(_ _idx: Int) -> Int {
  var result = 0, matCnt = 0
  var idx = _idx
  while idx < aLen {
    if aLen - idx < bLen - matCnt { break }
    if A[idx] == B[matCnt] {
      matCnt += 1
    } else if matCnt > 0 {
      matCnt = 0
      continue
    }

    if matCnt == bLen {
      result += 1
      matCnt = 0
    }

    idx += 1
  }
    return result
}

if bLen > aLen { print(0) }
else {
  for i in 0..<aLen-bLen+1 {
   let now = findCnt(i)
   Ans = Ans < now ? now : Ans
  }
  print(Ans)
}
*/
