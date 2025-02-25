/***
 * @Author: entelechy 2021110871@stu.hit.edu.cn
 * @Date: 2023-10-07 19:26:41
 * @LastEditors: entelechy 2021110871@stu.hit.edu.cn
 * @LastEditTime: 2023-10-07 20:14:40
 * @FilePath: \LuoGu\BigBang.cpp
 * @Description: God said, Let there be light: and there was light.
 * @
 * @Copyright (c) 2023 by future, All Rights Reserved.
 */
#include <bits/stdc++.h>

using namespace std;
int gcd(int a, int b) {
  if (b == 0)
    return a;
  return gcd(b, a % b);
}

int main() {
  int N, Na, Nb;
  cin >> N >> Na >> Nb;
  int A[201], B[201];
  int Ascore = 0, Bscore = 0;
  for (int i = 0; i < Na; i++) {
    cin >> A[i];
  }
  for (int i = 0; i < Nb; i++) {
    cin >> B[i];
  }
  int max = 0;
  if ((Na * Nb) / gcd(Na, Nb) < N)
    max = (Na * Nb) / gcd(Na, Nb);
  else
    max = N;

  for (int i = 0; i < max; i++) {
    switch (A[i%Na]) {
      case 0:
        if (B[i%Nb] == A[i%Na])
          break;
        if (B[i%Nb] == 2 || B[i%Nb] == 3)
          Ascore++;
        else
          Bscore++;
        break;
      case 1:
        if (B[i%Nb] == A[i%Na])
          break;
        if (B[i%Nb] == 0 || B[i%Nb] == 3)
          Ascore++;
        else
          Bscore++;
        break;
      case 2:
        if (B[i%Nb] == A[i%Na])
          break;
        if (B[i%Nb] == 1 || B[i%Nb] == 4)
          Ascore++;
        else
          Bscore++;
        break;
      case 3:
        if (B[i%Nb] == A[i%Na])
          break;
        if (B[i%Nb] == 2 || B[i%Nb] == 4)
          Ascore++;
        else
          Bscore++;
        break;
      case 4:
        if (B[i%Nb] == A[i%Na])
          break;
        if (B[i%Nb] == 0 || B[i%Nb] == 1)
          Ascore++;
        else
          Bscore++;
        break;
      default:
        break;
    }
  }
  if (max == N) {
    cout << Ascore << ' ' << Bscore << '\n';
    return 0;
  }
  int Agroup = Ascore, Bgroup = Bscore;
  Ascore += Agroup * (N / max -1), Bscore += Bgroup * (N / max -1);
  int remain = N % max;
  for (int i = 0; i < remain; i++) {
  switch (A[i%Na]) {
      case 0:
        if (B[i%Nb] == A[i%Na])
          break;
        if (B[i%Nb] == 2 || B[i%Nb] == 3)
          Ascore++;
        else
          Bscore++;
        break;
      case 1:
        if (B[i%Nb] == A[i%Na])
          break;
        if (B[i%Nb] == 0 || B[i%Nb] == 3)
          Ascore++;
        else
          Bscore++;
        break;
      case 2:
        if (B[i%Nb] == A[i%Na])
          break;
        if (B[i%Nb] == 1 || B[i%Nb] == 4)
          Ascore++;
        else
          Bscore++;
        break;
      case 3:
        if (B[i%Nb] == A[i%Na])
          break;
        if (B[i%Nb] == 2 || B[i%Nb] == 4)
          Ascore++;
        else
          Bscore++;
        break;
      case 4:
        if (B[i%Nb] == A[i%Na])
          break;
        if (B[i%Nb] == 0 || B[i%Nb] == 1)
          Ascore++;
        else
          Bscore++;
        break;
      default:
        break;
    }
  }
  cout << Ascore << ' ' << Bscore << '\n';
  return 0;
}