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
  int a[4], b[4];
  while(cin >> a[0] >> a[1] >> a[2] >> a[3] >> b[0] >> b[1] >> b[2] >> b[3]) {
    bool flag[10];
    for(int i=0; i<10; ++i) flag[i] = false;
    int hit = 0;
    int blow = 0;
    for(int i=0; i<4; ++i) {
      if(a[i] == b[i]) {
	++hit;
      }
      else {
	flag[a[i]] = true;
      }
    }
    for(int i=0; i<4; ++i) {
      if(flag[b[i]]) ++blow;
    }
    printf("%d %d\n", hit, blow);
  }
}

int main() {
  solve();
  return 0;
}
