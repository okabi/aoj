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
  string input;
  getline(cin, input);
  transform(input.begin(), input.end(), input.begin(), ::toupper);
  cout << input << endl;
}

int main() {
  solve();
  return 0;
}
