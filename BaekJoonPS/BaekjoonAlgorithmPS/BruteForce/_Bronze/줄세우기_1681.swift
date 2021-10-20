
// MARK: - 줄세우기 1681
// MARK: BruteForce swift 문제풀이

/*
let arr = readLine()!.split(separator: " ").map { Int($0)! }
let N = arr[0], L = arr[1]
var Q = [Int]()
var cnt = 0
var now = 1
while cnt <= N {
  var flag = true
  var tmp = now
  while tmp > 0 {
    if tmp % 10 == L { flag=false; break }
    tmp /= 10
  }

  if flag {
    cnt += 1
    if cnt == N { break }
  }
  now += 1
}

print(now)
*/
