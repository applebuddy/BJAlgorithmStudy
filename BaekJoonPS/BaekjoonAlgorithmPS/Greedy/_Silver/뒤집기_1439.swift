
// MARK: - 뒤집기 1439
// MARK: Greedy swift 문제풀이

/*
let arr = Array(readLine()!)

var zero = 0
var one = 0
var zCnt = 0, oCnt = 0

for i in arr.indices {
  if arr[i] == "0" { oCnt = 0; zCnt += 1 }
  else { zCnt = 0; oCnt += 1 }

  if oCnt == 1 { one += 1 }
  else if zCnt == 1 { zero += 1 }
}

print(zero > one ? one : zero)
*/
