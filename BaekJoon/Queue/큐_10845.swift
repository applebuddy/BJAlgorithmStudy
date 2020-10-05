
// MARK: - 큐 10845

// MARK: Queue swift 문제풀이

let N = Int(readLine()!)!
var Queue = [Int]()
var cur = 0

func iValue(_ str: String) -> Int {
    var result = 0
    for char in str {
        result = result * 10 + (Int(char.asciiValue!) - 48)
    }

    return result
}

let ipQR: (([String]) -> Void) = { list in
    if list[0] == "push" {
        Queue.append(iValue(list[1]))
    } else if list[0] == "pop" {
        if Queue.count <= cur {
            print(-1)
        } else {
            print(Queue[cur])
            cur += 1
        }
    } else if list[0] == "front" {
        print(Queue.count <= cur ? -1 : Queue[cur])
    } else if list[0] == "back" {
        print(Queue.count <= cur ? -1 : Queue.last!)
    } else if list[0] == "size" {
        print(Queue.count - cur)
    } else if list[0] == "empty" {
        print(Queue.count <= cur ? 1 : 0)
    }
}

(0 ..< N).forEach { _ in
    ipQR(readLine()!.split(separator: " ").map { String($0) })
}
