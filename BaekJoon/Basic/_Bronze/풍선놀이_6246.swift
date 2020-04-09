
// MARK: - 풍선놀이 6246
// MARK: swift 문제풀이

/*
let arr = readLine()!.split(separator: " ").map { Int($0)! }

let N = arr[0], Q = arr[1]
var G = [Bool](repeating: false, count: N+1)
var Ans = N
for _ in 0..<Q {
  let arr2 = readLine()!.split(separator: " ").map { Int($0)! }
  var idx = arr2[0], per = arr2[1]
  while idx <= N {
    if G[idx] == false {
      G[idx] = true
      Ans -= 1
    }
    idx += per
  }
}

print(Ans)
*/
