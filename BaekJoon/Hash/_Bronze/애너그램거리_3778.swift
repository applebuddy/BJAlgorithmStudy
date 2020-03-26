
// MARK: - 애너그램거리 3778
// MARK: Hash swift 문제풀이

/*
let T = Int(readLine()!)!
for i in 1...T {
  var dic = [Character: Int]()
  Array(readLine()!).forEach { dic[$0] = (dic[$0] ?? 0) + 1}
  Array(readLine()!).forEach { dic[$0] = (dic[$0] ?? 0) - 1}
  var Ans = 0
  for d in dic {
    let diff = d.value > 0 ? d.value : d.value * -1
    Ans += diff
  }
  print("Case #\(i): \(Ans)")
}
*
