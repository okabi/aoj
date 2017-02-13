#include <cstdio>
#include <cmath>
#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
#include <functional>
using namespace std;

int func(int x) {
  return x * x;
}

int main() {
  int d;
  while(cin >> d) {
    int ans = 0;
    for(int i=d; i<600; i+=d) {
      ans += d * func(i);
    }
    printf("%d\n", ans);
  }
  return 0;
}
