#include <cstdio>
#include <cmath>
#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <queue>
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
  int l[10], v[2];
  while(scanf("%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d", &l[0], &l[1], &l[2], &l[3], &l[4], &l[5], &l[6], &l[7], &l[8], &l[9], &v[0], &v[1]) != EOF) {
    int sum = 0;
    for(int i=0; i<10; ++i) sum += l[i];
    double time = (double)sum / (v[0] + v[1]);
    double d = v[0] * time;
    int s = 0;
    for(int i=0; i<10; ++i) {
      s += l[i];
      if(d <= s) {
	printf("%d\n", i + 1);
	break;
      }
    }
  }
}

int main() {
  solve();
  return 0;
}
