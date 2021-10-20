
// MARK: - 맞았는데 왜 틀리죠? 15820
// MARK: swift 문제풀이

/*
let arr = readLine()!.split(separator: " ").map { Int($0)! }
var systemOK = true, sampleOK = true
var s1 = arr[0], s2 = arr[1]
for _ in 0..<s1 {
    let arr2 = readLine()!.split(separator: " ").map { Int($0)! }
    sampleOK = arr2[0] == arr2[1] && sampleOK ? true : false
}

for _ in 0..<s2 {
    let arr2 = readLine()!.split(separator: " ").map { Int($0)! }
    systemOK = arr2[0] == arr2[1] && systemOK ? true : false
}

print(systemOK && sampleOK ? "Accepted" : sampleOK ? "Why Wrong!!!" : "Wrong Answer")
*/
