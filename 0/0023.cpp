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
  int n;
  cin >> n;
  for(int i=0; i<n; ++i) {
    double x[2], y[2], r[2];
    for(int j=0; j<2; ++j) cin >> x[j] >> y[j] >> r[j];
    double dx = x[0] - x[1];
    double dy = y[0] - y[1];
    double d = sqrt(dx * dx + dy * dy);
    bool bina = false;
    double cmp1 = r[1] - r[0];
    if(r[0] > r[1]) {
      bina = true;
      cmp1 = r[0] - r[1];
    }
    double cmp2 = r[0] + r[1];
    if(d < cmp1 && bina)       printf("2\n");
    else if(d < cmp1 && !bina) printf("-2\n");
    else if(d > cmp2)          printf("0\n");
    else                       printf("1\n");
  }
}

int main() {
  solve();
  return 0;
}
