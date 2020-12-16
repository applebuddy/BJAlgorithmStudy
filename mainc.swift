//
//class Tree {
//    var value: Int
//    var left: Tree?
//    var right: Tree?
//    
//    init(_ value: Int) {
//        self.value = value
//        self.left = nil
//        self.right = nil
//    }
//    
//    func traversePostOrder() {
//        if self.left != nil {
//            self.left!.traversePostOrder()
//        }
//        
//        if self.right != nil {
//            self.right!.traversePostOrder()
//        }
//        
//        if !result.isEmpty { result += "\n" }
//        result += "\(self.value)"
//    }
//}
//
//extension String {
//    var integer: Int {
//        var result = 0
//        self.forEach {
//            let ascii = Int($0.asciiValue! - 48)
//            result = result * 10 + ascii
//        }
//        
//        return result
//    }
//}
//
//var pTree: Tree?
//var tTree: Tree?
//var result = ""
//
//while let string = readLine() {
//    let value = Int(string)!
//    if pTree == nil {
//        pTree = Tree(value)
//        continue
//    }
//    
//    tTree = pTree
//    while tTree != nil {
//        if value < tTree!.value {
//            if tTree!.left == nil {
//                tTree!.left = Tree(value)
//                break
//            }
//            tTree = tTree!.left
//        } else {
//            if tTree!.right == nil {
//                tTree!.right = Tree(value)
//                break
//            }
//            tTree = tTree!.right
//        }
//    }
//}
//
//pTree?.traversePostOrder()
//print(result)
