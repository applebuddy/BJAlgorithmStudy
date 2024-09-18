## Problem Solving Note

### Basic

- [재귀의 귀재](https://www.acmicpc.net/problem/25501)

```swift
var count = 0

func recursion(_ arr: inout [Character], _ left: Int, _ right: Int) -> Int {
    count += 1
    if left >= right { return 1 }
    else if arr[left] != arr[right] { return 0 }
    
    return recursion(&arr, left + 1, right - 1)
}

let t = Int(readLine()!)!
var answers: [String] = []
(0..<t).forEach { _ in
    var input = Array(readLine()!)
    count = 0
    answers.append("\(recursion(&input, 0, input.count - 1)) \(count)")
}

print(answers.joined(separator: "\n"))
```

- [팩토리얼 2](https://www.acmicpc.net/problem/27433)

```swift
let n = Int(readLine()!)!

func factorial(_ n: Int) -> Int {
    if n == 0 { return 1 }
    
    return factorial(n - 1) * n
}

print(factorial(n))
```

- [녹색거탑](https://www.acmicpc.net/problem/24723)

```swift
var n = Int(readLine()!)!
var num = 2
var ans = 1

while n > 0 {
    if n % 2 == 0 {
        num *= num
        n /= 2
    } else {
        ans *= num
        n -= 1
    }
}

print(ans)
```

- [커트라인](https://www.acmicpc.net/problem/25305)
  - sorting

```swift
let k = readLine()!.split(separator: " ").compactMap { Int(String($0)) }[1]
print(readLine()!.split(separator: " ").compactMap { Int(String($0)) }.sorted(by: >)[k-1])
```

- [알고리즘 수업 - 알고리즘의 수행 시간 4](https://boj.kr/24265)
  - math

```swift
let n = Int(readLine()!)! - 1
print("\(n * (n + 1) / 2)\n2")
```

- [대지](https://www.acmicpc.net/problem/9063)
  - math

```swift
let n = Int(readLine()!)!
var (minX, minY, maxX, maxY) = (10000, 10000, -10000, -10000)

(0..<n).forEach { _ in 
    let inputs = readLine()!.split(separator: " ").map(String.init).compactMap(Int.init)
    minX = minX > inputs[0] ? inputs[0] : minX
    minY = minY > inputs[1] ? inputs[1] : minY
    maxX = maxX < inputs[0] ? inputs[0] : maxX
    maxY = maxY < inputs[1] ? inputs[1] : maxY
}

print((maxX - minX) * (maxY - minY))
```

- [최댓값](https://www.acmicpc.net/problem/2566)

```swift
var max = 0
var pos: (Int, Int) = (0, 0)

(0..<9).forEach { i in
    readLine()!
        .split(separator: " ")
        .map { Int(String($0))! }
        .enumerated()
        .forEach { j, num in
            if max < num {
                max = num
                pos = (i, j)
            }
        }
}

print("\(max)\n\(pos.0+1) \(pos.1+1)")
```

- [너의 평점은](https://www.acmicpc.net/problem/25206)

```swift
extension String {
    var score: Double {
        switch self {
        case "A+": return 4.5
        case "A0": return 4.0
        case "B+": return 3.5
        case "B0": return 3.0
        case "C+": return 2.5
        case "C0": return 2.0
        case "D+": return 1.5
        case "D0": return 1.0
        default: return 0
        }
    }
}

let (count, sum) = (0..<20).reduce(into: (0, 0.0)) { result, _ in
    let input = readLine()!.split(separator: " ").map(String.init)
    let value = Double(input[1])!
    switch input[2] {
    case "P": break
    case "F":
        result.0 += Int(value)
    default: 
        result.0 += Int(value)
        result.1 += (value * input[2].score)
    }
}

print(sum / Double(count))
```

### DFS

- [알고리즘 수업 - 깊이 우선 탐색 1](boj.kr/24479)

```swift
let input = readLine()!.split(separator: " ").map { Int(String($0))! }
let (n, m, r) = (input[0], input[1], input[2])
var graph = [[Int]](repeating: [Int](), count: n + 1)
var visited = [Bool](repeating: false, count: n + 1)
var list: [Int] = []

func dfs(_ n: Int) {
    if visited[n] { return }
    visited[n] = true
    list.append(n)
    
    graph[n].forEach { node in
        dfs(node)
    }
}

(0..<m).forEach { _ in
    let input2 = readLine()!.split(separator: " ").map { Int(String($0))! }
    graph[input2[0]].append(input2[1])
    graph[input2[1]].append(input2[0])
}

graph = graph.map { $0.sorted() }
dfs(r)

let answer = list
    .enumerated()
    .reduce(into: [String](repeating: "0", count: n)) { result, tp in
        let (index, elem) = tp
        result[elem - 1] = "\(index + 1)"
    }
    .joined(separator: "\n")

print(answer)
```

### Union Find

- [집합의 표현](https://boj.kr/1717)

```swift
import Foundation

let ip = readLine()!.split(separator: " ").map { Int(String($0))! }
let (n, m) = (ip[0], ip[1])
var parents = [Int](0...n)

func getParent(_ node: Int) -> Int {
  if parents[node] == node { return node }
  parents[node] = getParent(parents[node])
  return parents[node]
}

func merge(_ a: Int, _ b: Int) {
  let aParent = getParent(a)  
  let bParent = getParent(b)  
  if parents[aParent] < parents[bParent] {
    parents[bParent] = aParent
  } else {
    parents[aParent] = bParent
  }
}

var answers: [String] = []
(0..<m).forEach { _ in 
  let ip2 = readLine()!.split(separator: " ").map { Int(String($0))! }
  let (op, a, b) = (ip2[0], ip2[1], ip2[2])
  if op == 0 {
    merge(a, b)
    // print("merge \(a) and \(b), parents : \(parents)")
  } else {
    answers.append(
        getParent(a) == getParent(b) ? "YES" : "NO" 
    )
  }
}

print(answers.joined(separator: "\n"))
```
