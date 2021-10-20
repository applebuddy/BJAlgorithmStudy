
// MARK: - 트로피 진열 1668
// MARK: swift 문제풀이

/*
let N = Int(readLine()!)!
var L = 1, R = 1
var V = [Int]()
for _ in 0..<N {
  let num = Int(readLine()!)!
  V.append(num)
}

var l = V[0], r = V.last!
var ldx = 1, rdx = V.count-2
while ldx < V.count {
  if V[ldx] > l { L += 1; l = V[ldx] }
  if V[rdx] > r { R += 1; r = V[rdx] }
  ldx += 1
  rdx -= 1
}

print(L, R, separator: "\n")
*/
