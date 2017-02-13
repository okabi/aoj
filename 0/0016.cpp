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
  int d, a;
  float px = 0;
  float py = 0;
  float angle = 90;
  while(true) {
    scanf("%d,%d", &d, &a);
    if(d == 0 && a == 0) break;
    float rad = DEG_TO_RAD(angle);
    px += d * cos(rad);
    py += d * sin(rad);
    angle -= a;
  }
  printf("%d\n%d\n", (int)px, (int)py);
}

int main() {
  solve();
  return 0;
}
