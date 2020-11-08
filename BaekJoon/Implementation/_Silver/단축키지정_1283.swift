
// MARK: - 단축키지정 1283

// MARK: String Implementation swift 문제풀이

let ip = { readLine()! }
let N = Int(ip())!
var Ans = [String]()
var dic = [Bool](repeating: false, count: 26)

extension Character {
    var argdAscii: Int {
        let ascii = Int(unicodeScalars.first!.value)
        return ascii >= 97 ? ascii - 97 : ascii - 65
    }
}

(0 ..< N).forEach { _ in
    let S = ip()
    let sArr = S.split(separator: " ").map { Array(String($0)) }
    var isFinished = false
    var result = ""

    // 1. 각 문자 첫자리를 먼저 확인
    for elem in sArr {
        if isFinished {
            result += " " + elem.map { String($0) }.joined()
            continue
        }

        let ascii = elem.first!.argdAscii
        if dic[ascii] == true {
            if !result.isEmpty {
                result += " "
            }
            result += elem.map { String($0) }.joined()
            continue
        }
        dic[ascii] = true
        isFinished = true
        if !result.isEmpty {
            result += " "
        }
        result += "[" + "\(elem[0])" + "]"
        if elem.count >= 1 {
            result += Array(elem[1 ..< elem.count])
                .map { String($0) }.joined()
        }
    }

    // 2. 이미 단축키가 정해졌으면 여기서 스킵 후 다음 단어를 확인
    if isFinished {
        Ans.append(result)
        return
    }

    result = ""

    // 3. 단축키가 정해지지 않았다면 왼쪽부터 차례대로 글자 확인
    for sElem in sArr {
        if isFinished {
            result += " " + sElem.map { String($0) }.joined()
            continue
        }
        for jdx in sElem.indices {
            if dic[sElem[jdx].argdAscii] == true { continue }
            dic[sElem[jdx].argdAscii] = true
            isFinished = true
            if !result.isEmpty {
                result += " "
            }

            if jdx >= 1 {
                result += Array(sElem[0 ... jdx - 1]).map { String($0) }.joined()
            }

            result += "[" + "\(sElem[jdx])" + "]"

            if jdx + 1 < sElem.count {
                result += Array(sElem[jdx + 1 ..< sElem.count]).map { String($0) }.joined()
            }
            break
        }

        if !isFinished {
            if !result.isEmpty {
                result += " "
            }
            result += sElem.map { String($0) }.joined()
        }
    }

    Ans.append(isFinished ? result : S)
}

Ans.forEach { print($0) }
