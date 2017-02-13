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
  double input;
  while(cin >> input) {
    for(int i=2; ; ++i) {
      double y = 5.0 * i - 5.0;
      if(sqrt(19.6 * y) >= input) {
	printf("%d\n", i);
	break;
      }
    }
  }
}

int main() {
  solve();
  return 0;
}
