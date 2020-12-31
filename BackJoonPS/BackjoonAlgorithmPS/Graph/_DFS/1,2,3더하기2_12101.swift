
// MARK: - 1,2,3더하기2
// MARK: DFS swift 문제풀이

/*
let arr = readLine()!.split(separator: " ").map { Int($0)! }
let N = arr[0], K = arr[1]
var SV = [String]()
var tS = [String]()

func DFS(_ sum: Int) {
  if N <= sum {
    if N == sum {
      SV.append(tS.joined())
    }
    return
  }

  tS += tS.isEmpty ? ["1"] : ["+", "1"]
  let len = tS.count
  DFS(sum+1)
  tS.removeSubrange(max(0,len-2)..<len)

  tS += tS.isEmpty ? ["2"] : ["+", "2"]
  DFS(sum+2)
  tS.removeSubrange(max(0,len-2)..<len)

  tS += tS.isEmpty ? ["3"] : ["+", "3"]
  DFS(sum+3)
  tS.removeSubrange(max(0,len-2)..<len)
}

DFS(0)
print(SV.count >= K ? SV[K-1] : -1)
*/
