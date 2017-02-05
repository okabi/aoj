#include <cstdio>
#include <cmath>
#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;

int main() {
  float a, b, c, d, e, f;
  while(cin >> a >> b >> c >> d >> e >> f){
    float det = a * e - b * d;
    float x = (c * e - b * f) / det;
    float y = (a * f - c * d) / det;
    if(abs(x) < 0.0005) x = 0;
    if(abs(y) < 0.0005) y = 0;
    printf("%.3f %.3f\n", x, y);
  }

  return 0;
}
