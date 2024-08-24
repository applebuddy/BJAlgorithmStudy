### Problem Solving Note

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
