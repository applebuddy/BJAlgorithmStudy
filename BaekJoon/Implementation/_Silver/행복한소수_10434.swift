
// MARK: - 행복한 소수 10434
// MARK: Implementation swift 문제풀이

/*
let T = Int(readLine()!)!
let MAX = 10002
var P = [Bool](repeating: true, count: MAX)
var i = 2, j = i+i
while i*i < MAX {
    if P[i] == true {
        j = i+i
        while j < MAX {
            P[j] = false
            j += i
        }
    }
    i += 1
}

for i in 1...T {
    let arr = readLine()!.split(separator: " ").map { Int($0)! }
    let N = arr[1]
    var num = N
    if num <= 1 || P[num] == false { print("\(i) \(N) NO"); continue}
    var right = false
    var cnt = 0
    while cnt < 100 {
        var sum = 0
        while num > 0 {
            let rem = num % 10
            sum += rem * rem
            num /= 10
        }
        num = sum
        if num == 1 { right = true; break }
        else { cnt += 1 }
    }
    print(right ? "\(i) \(N) YES" : "\(i) \(N) NO")
}
*/
