
// MARK: - DNA 해독 1672
// MARK: Hash swift 문제풀이

/*
import Foundation

struct Pair: Hashable {
    var first: Character
    var second: Character
    init(_ f: Character, _ s: Character) {
      self.first = f
      self.second = s
    }
}

let len = Int(readLine()!)!
let dic: [Pair: Character] = [Pair("A","A"):"A", Pair("A","G"):"C", Pair("A","C"):"A", Pair("A","T"):"G",
Pair("G","A"):"C", Pair("G","G"):"G", Pair("G","C"):"T", Pair("G","T"):"A",
Pair("C","A"):"A", Pair("C","G"):"T", Pair("C","C"):"C", Pair("C","T"):"G",
Pair("T","A"):"G", Pair("T","G"):"A", Pair("T","C"):"G", Pair("T","T"):"T"]

var S = Array(readLine()!)
if len == 1 { print(S); exit(0) }

var idx = len-2
while idx >= 0 {
  let temp = dic[Pair(S[idx+1], S[idx])]!
  S[idx] = temp
  idx -= 1
}

print(S[0])
*/
