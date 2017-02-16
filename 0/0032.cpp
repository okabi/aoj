#include <cstdio>
#include <cmath>
#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <algorithm>
#include <functional>

#ifndef M_PI
#define M_PI 3.14159265358979
#endif
#define DEG_TO_RAD(deg) (((deg)/360.0)*2.0*M_PI)
#define RAD_TO_DEG(rad) (((rad)/2.0/M_PI)*360.0)
const double EPS = 1e-10;

using namespace std;

void solve() {
  int ans1 = 0;
  int ans2 = 0;
  int a, b, c;
  while(scanf("%d,%d,%d", &a, &b, &c) != EOF) {
    if(a == b) ++ans2;
    if(a * a + b * b == c * c) ++ans1;
  }
  printf("%d\n%d\n", ans1, ans2);
}

int main() {
  solve();
  return 0;
}
