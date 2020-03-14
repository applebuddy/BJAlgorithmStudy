
// MARK: - 사분면 9610
// MARK: math swift 문제풀이

/*
let N = Int(readLine()!)!
var Ans = [0,0,0,0,0]
for _ in 0..<N {
    let arr = readLine()!.split(separator: " ").map { Int($0)! }
    let X = arr[0], Y = arr[1]
    if X == 0 || Y == 0 { Ans[4] += 1; continue }
    if X > 0 && Y > 0 { Ans[0] += 1 }
    else if X > 0 && Y < 0 { Ans[3] += 1 }
    else if X < 0 && Y < 0 { Ans[2] += 1 }
    else if X < 0 && Y > 0 { Ans[1] += 1 }
}

for i in 1...4 { print("Q\(i): \(Ans[i-1])") }
print("AXIS: \(Ans.last!)")
*/
