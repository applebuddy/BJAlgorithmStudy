
// MARK: - ACM 대회 채점 11531
// MARK: swift 문제풀이

/*
import Foundation

var pro = 0
var pen = 0
var wrong = [Int](repeating: 0, count: 26)
while true {
    let arr = readLine()!.split(separator: " ")
    let time = Int(arr[0])!
    if time == -1 { break }
    if arr[2] == "wrong" { wrong[Int(arr[1].unicodeScalars.first!.value)-65] += 1 }
    else { pro += 1; pen += (time+20*wrong[Int(arr[1].unicodeScalars.first!.value)-65]) }
}

print("\(pro) \(pen)")
*/
