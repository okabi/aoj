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

using namespace std;

void solve() {
  int a, b, c, d, e;
  cin >> a >> b >> c >> d >> e;
  array<int, 5> arr {a, b, c, d, e};
  sort(arr.begin(), arr.end(), greater<int>());
  printf("%d %d %d %d %d\n", arr[0], arr[1], arr[2], arr[3], arr[4]);
}

int main() {
  solve();
  return 0;
}
