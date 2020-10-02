
// MARK: - 가위 바위 보 8896

// MARK: swift 문제풀이

let T = Int(readLine()!)!

func eraseRobot(of list: [Int], from rList: inout Set<Int>) {
    list.forEach {
        rList.remove($0)
    }
}

(0 ..< T).forEach { _ in
    let K = Int(readLine()!)!
    var G = [[Character]]()
    var rList = Set<Int>(0 ..< K)
    (0 ..< K).forEach { _ in
        G.append(Array(readLine()!))
    }

    var jdx = 0
    while jdx < G[0].count {
        var nowDic = [Character: [Int]]()
        for idx in 0 ..< K {
            if !rList.contains(idx) { continue }
            if nowDic[G[idx][jdx]] == nil {
                nowDic[G[idx][jdx]] = [idx]
            } else {
                nowDic[G[idx][jdx]]!.append(idx)
            }

            if nowDic.count >= 3 { break }
        }

        if nowDic.count == 2 {
            if nowDic["R"] != nil, nowDic["S"] != nil {
                eraseRobot(of: nowDic["S"]!, from: &rList)
            } else if nowDic["R"] != nil, nowDic["P"] != nil {
                eraseRobot(of: nowDic["R"]!, from: &rList)
            } else if nowDic["S"] != nil, nowDic["P"] != nil {
                eraseRobot(of: nowDic["P"]!, from: &rList)
            }
        }

        if rList.count == 1 { break }
        jdx += 1
    }

    print(rList.count == 1 ? Array(rList).first! + 1 : 0)
}
