
// MARK: - 싸이버개강총회 1946

// MARK: Hash swift 문제풀이

extension Character {
    func iVal() -> Int {
        return Int(asciiValue!) - 48
    }
}

extension Array where Element == Character {
    func timeValue() -> (Int, Int) {
        return (self[0].iVal() * 10 + self[1].iVal(), self[3].iVal() * 10 + self[4].iVal())
    }
}

let arr = readLine()!.split(separator: " ")
let from = Array(arr[0]).timeValue()
let by = Array(arr[1]).timeValue()
let to = Array(arr[2]).timeValue()

var dic: [String: Bool] = [:]
var cnt = 0

while let log = readLine() {
    if log == "" { continue }
    let arr = log.split(separator: " ")
    let now = Array(arr[0]).timeValue()
    let name = String(arr[1])
    if now.0 < from.0 || (now.0 == from.0 && now.1 <= from.1) {
        dic[name] = false
        continue
    }

    if now.0 < by.0 || (now.0 == by.0 && now.1 < by.1) {
        continue
    }

    if now.0 < to.0 || (now.0 == to.0 && now.1 <= to.1) {
        if dic[name] == false {
            dic[name] = true
            cnt += 1
        }
    }
}

print(cnt)
