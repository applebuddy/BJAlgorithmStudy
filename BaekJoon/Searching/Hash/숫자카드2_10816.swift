//
//  숫자카드2_10816.swift
//  BackJoonPractice
//
//  Created by MinKyeongTae on 2020/02/25.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: - 숫자카드2 10816

// MARK: Hash swift 복습 문제풀이
// -> joined() 활용 출력테스트결과 억지로 joined()를 사용하는것은 성능상 큰 차이가 없다 상황에 따라 joined()를 활용하는게 좋은것 같다. 

/*
import Foundation

let _ = readLine()
let arr = readLine()!.split(separator: " ").map { String($0) }
var dic = [String:Int]()

for i in arr.indices {
 dic[arr[i]] = (dic[arr[i]] ?? 0) + 1
}

let _ = readLine()
let arr2 = readLine()!.split(separator: " ").map { String($0) }
var Ans = ""
for i in arr2.indices {
 if dic[arr2[i]] == nil { Ans += "0 " }
 else { Ans += "\((dic[arr2[i]]!)) " }
}

print(Ans)
*/

// MARK: Hash swift 문제풀이

/*
import Foundation

let N = readLine()
let arr = readLine()!.split(separator: " ").map { String($0) }
let M = readLine()
var dic = [String:Int]()

let arr2 = readLine()!.split(separator: " ").map { String($0) }
for i in arr.indices {
    dic[arr[i]] = (dic[arr[i]] ?? 0) + 1
}

var Ans = ""
for i in arr2.indices {
    if dic[arr2[i]] == nil { Ans += "\(0) " }
    else { Ans += "\(dic[arr2[i]]!) " }
}

print(Ans)
*/
