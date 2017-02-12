#include <cstdio>
#include <cmath>
#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;

// 2数を入れ替える。
void swap(int& a, int& b){
  auto tmp = b;
  b = a;
  a = tmp;
}

// 2数の最大公約数を返す。
int gcd(int a, int b){
  if(a < b) swap(a, b);
  while(b > 0) {
    auto tmp = b;
    b = a % tmp;
    a = tmp;
  }
  return a;
}

int main() {
  int a, b;
  while(cin >> a >> b){
    auto g = gcd(a, b);
    printf("%d %d\n", g, a / g * b);
  }

  return 0;
}
