
// MARK: - 스택 10828

// MARK: Stack swift 문제풀이

var STK = [Int]()

func iValue(_ string: String) -> Int {
    var result = 0
    for char in string {
        result = result * 10 + (Int(char.asciiValue!) - 48)
    }

    return result
}

let stkIp: (([String]) -> Void) = { list in
    if list[0] == "push" {
        STK.append(iValue(list[1]))
    } else if list[0] == "pop" {
        print(STK.isEmpty ? -1 : STK.removeLast())
    } else if list[0] == "top" {
        print(STK.isEmpty ? -1 : STK.last!)
    } else if list[0] == "size" {
        print(STK.count)
    } else if list[0] == "empty" {
        print(STK.isEmpty ? 1 : 0)
    }
}

let N = Int(readLine()!)!
(0 ..< N).forEach { _ in
    stkIp(readLine()!.split(separator: " ").map { String($0) })
}
