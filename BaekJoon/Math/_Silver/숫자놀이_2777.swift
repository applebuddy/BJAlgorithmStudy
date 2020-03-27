
// MARK: - 숫자놀이
// MARK: math swift 문제풀이

/*
let T = Int(readLine()!)!
for _ in 0..<T {
  var N = Int(readLine()!)!
  if N <= 9 { print(1); continue }
  var two = 0
  var three = 0
  var five = 0
  var seven = 0

  while N % 2 == 0 {
    two += 1
    N /= 2
  }

  while N % 3 == 0 {
    three += 1
    N /= 3
  }

  while N % 5 == 0 {
    five += 1
    N /= 5
  }

  while N % 7 == 0 {
    seven += 1
    N /= 7
  }

  if N >= 10 { print(-1); }
  else {
    var tt = (two % 3)
    var tht = (three % 2)
    let thtt = min(tt, tht)
    tt -= thtt
    tht -= thtt
    tt = tt > 0 ? 1 : 0
    tht = tht > 0 ? 1 : 0
    print(tt + two/3 + tht + thtt + three/2 + five + seven)
  }
}
*/
