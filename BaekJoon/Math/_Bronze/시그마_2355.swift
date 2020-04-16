
// MARK: - 시그마 2355
// MARK: math swift 문제풀이

/*
let arr = readLine()!.split(separator: " ").map { Int($0)! }
var A = arr[0], B = arr[1]
if A > B { swap(&A, &B) }

func sum(_ a: Int, _ b: Int) -> Int {
  if a == b { return A }
  else {
    if (b - a) & 1 == 0 {
     return ((b - a - 1) / 2 + 1) * (b + a) + (b + a) / 2
   } else {
     return ((b - a - 1) / 2 + 1) * (b + a)
   }
  }
}

if A < 0 && B > 0 {
  print(sum(0,B) - sum(0, -A))
} else {
  print(sum(A,B))
}
*/
