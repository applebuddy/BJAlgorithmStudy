
// MARK: TLE답안

/*
struct DoubleStackQueue<T> {
    var leftStack = [T]()
    var rightStack = [T]()
    
    mutating func push(_ val: T) {
        rightStack.append(val)
    }
    
    mutating func pop() {
        if leftStack.isEmpty && rightStack.isEmpty { print(-1); return }
        if leftStack.isEmpty {
            leftStack = rightStack.reversed()
            rightStack = []
        }
        print(leftStack.last!)
        leftStack.removeLast()
    }
    
    func size() {
        print(leftStack.count + rightStack.count)
    }
    
    func front() {
        if leftStack.isEmpty && rightStack.isEmpty { print(-1); return }
        if leftStack.isEmpty {
            print(rightStack.first!)
        } else {
            print(leftStack.last!)
        }
    }
    
    func back() {
        if leftStack.isEmpty && rightStack.isEmpty { print(-1); return }
        if leftStack.isEmpty {
            print(rightStack.last!)
        } else {
            print(leftStack.first!)
        }
    }
    
    func isEmpty() {
        print(leftStack.isEmpty && rightStack.isEmpty ? 1 : 0)
    }
}

let T = Int(readLine()!)!
var DQ = DoubleStackQueue<String>()
for _ in 0..<T {
    let arr = readLine()!.split(separator: " ").map { String($0) }
    if arr[0] == "push" { DQ.push(arr[1]) }
    else if arr[0] == "front" { DQ.front() }
    else if arr[0] == "back" { DQ.back() }
    else if arr[0] == "size" { DQ.size() }
    else if arr[0] == "empty" { DQ.isEmpty() }
    else if arr[0] == "pop" { DQ.pop() }
}
*/
