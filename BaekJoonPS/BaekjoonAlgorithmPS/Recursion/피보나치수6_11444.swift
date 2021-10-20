//
//  피보나치수6_11444.swift
//  BackjoonAlgorithmPS
//
//  Created by MinKyeongTae on 2021/08/22.
//  Copyright © 2021 MungGu. All rights reserved.
//

/*
struct Matrix {
  var data: [[Int]]

  init() {
    self.data = [[0, 0], [0, 0]]
  }
}

let rem: Int = Int(1e9 + 7)

func getFib(_ N: Int) -> Int {
  let n = N
  var matrix = Matrix()
  // F(1) 설정
  matrix.data = [[1, 1], [1, 0]]
  // 분할
  matrix = divide(matrix, n)
  // F(N)출력
  return matrix.data[0][1]
}

func divide(_ matrix: Matrix, _ x: Int) -> Matrix {
  var m = matrix
  let n = x
  // n == 1이 될때까지 분할
  if n > 1 {
    m = divide(m, n / 2)
    // 분할 된 행렬을 다시 곱함
    m = multiply(m, m)
    // n이 홀수면
    if n % 2 == 1 {
      // 위에서 구한 m과 f(1)을 곱한다.
      var m2 = Matrix()
      m2.data = [[1, 1], [1, 0]]
      m = multiply(m, m2)
    }
  }
  return m
}

func multiply(_ matrix: Matrix, _ matrix2: Matrix) -> Matrix {
  var (m, m2) = (matrix, matrix2)
  var m3 = Matrix()
  m3.data[0][0] = (m.data[0][0] * m2.data[0][0] + m.data[0][1] * m2.data[1][0]) % rem
  m3.data[0][1] = (m.data[0][0] * m2.data[0][1] + m.data[0][1] * m2.data[1][1]) % rem
  m3.data[1][0] = (m.data[1][0] * m2.data[0][0] + m.data[1][1] * m2.data[1][0]) % rem
  m3.data[1][1] = (m.data[1][0] * m2.data[0][1] + m.data[1][1] * m2.data[1][1]) % rem
  return m3
}

let N = Int(readLine()!)!
print(getFib(N))
*/
