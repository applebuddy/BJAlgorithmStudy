
// MARK: - 데이트 1296
// MARK: Implementation swift 문제풀이

/*
let myName = readLine()!

let T = Int(readLine()!)!
let lIdx = Int(Character("L").asciiValue!) - 65
let oIdx = Int(Character("O").asciiValue!) - 65
let vIdx = Int(Character("V").asciiValue!) - 65
let eIdx = Int(Character("E").asciiValue!) - 65
var WV = [(String,Int)]()

for _ in 0..<T {
  let woman = readLine()!
  var dic = [Int](repeating: 0, count: 26)
  let S = Array("\(myName)\(woman)")

  for i in S.indices {
    let ascii = Int(S[i].asciiValue!) - 65
    dic[ascii] += 1
  }

  let L = dic[lIdx]
  let O = dic[oIdx]
  let V = dic[vIdx]
  let E = dic[eIdx]
  let score = ((L + O) * (L + V) * (L + E) * (O + V) * (O + E) * (V + E)) % 100
  WV.append((woman, score))
}

WV.sort { $0.1 > $1.1 || ($0.1 == $1.1 && $0.0 < $1.0) }
print(WV[0].0)
*/
