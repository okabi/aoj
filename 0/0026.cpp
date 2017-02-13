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

int field[10][10];

void init() {
  for(int i=0; i<10; ++i) {
    for(int j=0; j<10; ++j) {
      field[i][j] = 0;
    }
  }
}

void ink(int x, int y) {
  if(x >= 0 && x < 10 && y >= 0 && y < 10) ++field[x][y];
}

void solve() {
  init();

  int x, y, s;
  while(scanf("%d,%d,%d", &x, &y, &s) != EOF) {
    ink(x, y);
    ink(x-1, y);
    ink(x+1, y);
    ink(x, y-1);
    ink(x, y+1);
    if(s >= 2) {
      ink(x-1, y-1);
      ink(x+1, y-1);
      ink(x-1, y+1);
      ink(x+1, y+1);
    }
    if(s == 3) {
      ink(x-2, y);
      ink(x+2, y);
      ink(x, y-2);
      ink(x, y+2);
    }
  }
  int max_val = 0;
  int zero = 0;
  for(int i=0; i<10; ++i) {
    for(int j=0; j<10; ++j) {
      if(field[i][j] == 0) ++zero;
      max_val = max(max_val, field[i][j]);
    }
  }
  printf("%d\n%d\n", zero, max_val);
}

int main() {
  solve();
  return 0;
}
