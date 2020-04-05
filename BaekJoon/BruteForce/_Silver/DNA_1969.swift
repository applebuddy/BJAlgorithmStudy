
// MARK: - DNA 1969
// MARK: BruteForce swift 문제풀이

/*
let arr = readLine()!.split(separator: " ").map { Int($0)! }
let N = arr[0], L = arr[1]
var G = [[Character]](repeating: [Character](), count: N)

for i in 0..<N {
  G[i] = Array(readLine()!)
}

var Key = [String]()
var Cnt = 0

for i in G[0].indices {
  var MX = 0
  var C = [Int](repeating: 0, count: 26)
  var key = ""
  for j in G.indices {
    let ascii = Int(G[j][i].asciiValue!) - 65
    C[ascii] += 1
    MX = MX < C[ascii] ? C[ascii] : MX
  }

  for k in 0...25 {
    if C[k] != MX {
      Cnt += C[k]
    } else {
      key = "\(Unicode.Scalar(k+65)!)"
      MX = 1001
    }
  }
  Key.append(key)
}

print("\(Key.joined())", Cnt, separator: "\n")
*/
