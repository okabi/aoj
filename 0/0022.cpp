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

const int UNDEF = -1000000;

void solve() {
  int n;
  while(true) {
    cin >> n;
    if(n == 0) break;
    int max_val = UNDEF;
    int dp = UNDEF;
    for(int i=0; i<n; ++i) {
      int input;
      cin >> input;
      dp = max(dp + input, input);
      max_val = max(max_val, dp);
    }
    printf("%d\n", max_val);
  }
}

int main() {
  solve();
  return 0;
}
