
// MARK: - 단어사다리 9229
/*
var first = [Character]()
var second = [Character]()
func checkDiff(_ first: inout [Character], _ second: inout [Character]) -> Bool {
    var diff = 0
    for i in first.indices {
        if first[i] != second[i] { diff += 1 }
        if diff > 1 { return false }
    }
    return diff == 1 ? true : false
}

while true {
    var flag = true
    first = []
    second = []
    first = Array(readLine()!)
    if first[0] == "#" { break }
    while true {
        second = Array(readLine()!)
        if second[0] == "#" {
            print(flag ? "Correct" : "Incorrect")
            break
        }
        
        if flag {
            flag = checkDiff(&first, &second)
        }
        first = second
    }
}
*/
