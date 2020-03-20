
// MARK: - 트리순회 1991
// MARK: Tree swift 문제풀이

/*
class Tree {
    var value = ""
    var leftChild: Tree?
    var rightChild: Tree?
    
    init(_ value: String, _ left: Tree?, _ right: Tree?) {
        self.value = value
        self.leftChild = left
        self.rightChild = right
    }
    
    func traversePreOrder() {
        print(value, terminator: "")
        self.leftChild?.traversePreOrder()
        self.rightChild?.traversePreOrder()
    }
    
    func traverseInOrder() {
        self.leftChild?.traverseInOrder()
        print(value, terminator: "")
        self.rightChild?.traverseInOrder()
    }
    
    func traversePostOrder() {
        self.leftChild?.traversePostOrder()
        self.rightChild?.traversePostOrder()
        print(value, terminator: "")
    }
}

var pointer = [Tree?](repeating: nil, count: 26)

let T = Int(readLine()!)!
for _ in 0..<T {
    let arr = readLine()!.split(separator: " ").map { String($0) }
    let idx = Int(arr[0].unicodeScalars.first!.value) - 65
    let leftVal = arr[1] == "." ? nil : arr[1]
    let rightVal = arr[2] == "." ? nil : arr[2]
    var leftChild: Tree?
    var rightChild: Tree?

    if leftVal != nil {
        leftChild = Tree(leftVal!, nil, nil)
        pointer[Int(leftVal!.unicodeScalars.first!.value)-65] = leftChild
    }
    
    if rightVal != nil {
        rightChild = Tree(rightVal!, nil, nil)
        pointer[Int(rightVal!.unicodeScalars.first!.value)-65] = rightChild
    }
    
    if pointer[idx] == nil {
        pointer[idx] = Tree(arr[0], leftChild, rightChild)
    } else {
        pointer[idx]!.leftChild = leftChild
        pointer[idx]!.rightChild = rightChild
    }
}

var root = pointer[0]
root?.traversePreOrder()
print()
root?.traverseInOrder()
print()
root?.traversePostOrder()
print()
*/
