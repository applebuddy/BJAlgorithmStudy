
// MARK: - 기숙사 바닥 2858
// MARK: bruteforce swift 문제풀이

/*
let arr = readLine()!.split(separator: " ").map { Int($0)! }
let R = arr[0], B = arr[1]

for i in 3...R+B {
  if (R+B) % i == 0 {
    let W = i
    let L = (R+B)/i
    if (L-2) * (W-2) == B {
      print("\(L) \(W)")
      break
    }
  }
}
*/
