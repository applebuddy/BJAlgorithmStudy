
// MARK: - 구간합 세그먼트트리 swift 구현연습

/*
import Foundation

func initTree(_ arr: inout [Int], _ tree: inout [Int], _ node: Int, _ start: Int, _ end: Int) -> Int {
  if start == end {
    tree[node] = arr[start]
    return tree[node]
  }
  let mid = (start + end) / 2
  tree[node] = initTree(&arr, &tree, node*2, start, mid) + initTree(&arr, &tree, node*2+1, mid+1, end)
  return tree[node]
}

func update(_ tree: inout [Int], _ node: Int, _ start: Int, _ end: Int, _ index: Int, _ diff: Int) {
  if start > index || end < index { return }
  tree[node] += diff
  if start != end {
    let mid = (start + end) / 2
    update(&tree, node*2, start, mid, index, diff)
    update(&tree, node*2+1, mid+1, end, index, diff)
  }
}

func sum(_ tree: inout [Int], _ node: Int, _ start: Int, _ end: Int, _ left: Int, _ right: Int) -> Int {
  if left > end || right < start { return 0 }
  if left <= start && end <= right { return tree[node] }
  let mid = (start + end) / 2
  return sum(&tree, node*2, start, mid, left, right) + sum(&tree, node*2+1, mid+1, end, left, right)
}

let len = Int(readLine()!)!
var arr = readLine()!.split(separator: " ").map { Int($0)! }
let T = Int(readLine()!)!
var h = Int(ceil(log2(Double(len))))
let treeSize = (1<<(h+1))
var tree = [Int](repeating: 0, count: treeSize)

let _ = initTree(&arr, &tree, 1, 0, len-1)

for _ in 0..<T {
  var Ans = 0
  let arr2 = readLine()!.split(separator: " ").map { Int($0)! }
  let I = arr2[0]-1, J = arr2[1]-1, K = arr2[2]

  for i in I...J {
    for j in i...J {
      print(sum(&tree, 1, 0, len-1, i, j))
      if sum(&tree, 1, 0, len-1, i, j) > K { Ans += 1 }
    }
  }
  print(Ans)
}
*/
