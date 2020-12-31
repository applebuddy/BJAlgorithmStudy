
// MARK: - 상금헌터 15953
// MARK: swift 문제풀이

/*
let first = [1,2,3,4,5,6]
let firstP = [500, 300, 200, 50, 30, 10]
let second = [1,2,4,8,16]
let secondP = [512, 256, 128, 64, 32]
let T = Int(readLine()!)!
for _ in 0..<T {
    let arr = readLine()!.split(separator: " ").map { Int($0)! }
    let f = arr[0], s = arr[1]
    var temp = 0, Ans = 0
    for i in first.indices {
        if f == 0 { break }
        temp += first[i]
        if f <= temp { Ans += firstP[i]; break }
    }
    temp = 0
    for i in second.indices {
        if s == 0 { break }
        temp += second[i]
        if s <= temp { Ans += secondP[i]; break }
    }
    print(Ans * 10000)
}
*/
