
// MARK: - 수2
// MARK: math swift 문제풀이

/*
import Foundation

let L = Int(readLine()!)!
var arr = readLine()!.split(separator: " ").map { Int($0)! }
let N = Int(readLine()!)!
if L == 1 {
    print(arr[0] == N ? "0" : "\(arr[0] - 2)")
    exit(0);
}

arr.sort()
var target = 0
for i in 0..<arr.count {
    if N == arr[i] { print(0); break }
    if N < arr[i] {
        print((N-target) * (arr[i]-N) - 1)
        break
    }
    target = arr[i]
}
*/
