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

int bucket[100];

void solve() {
  for(int i=0; i<100; ++i) bucket[i] = 0;
  int max_val = 0;
  int n;
  while(cin >> n) {
    ++bucket[n - 1];
    max_val = max(max_val, bucket[n - 1]);
  }
  for(int i=0; i<100; ++i) {
    if(bucket[i] == max_val) {
      printf("%d\n", i + 1);
    }
  }
}

int main() {
  solve();
  return 0;
}
