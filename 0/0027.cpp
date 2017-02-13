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

int tod(int month, int date) {
  int ret = date;
  for(int i=1; i<month; ++i) {
    if(i == 2) ret += 29;
    else if(i == 4 || i == 6 || i == 9 || i == 11) ret += 30;
    else ret += 31;
  }
  return ret;
}

string tos(int date) {
  switch(date % 7) {
  case 0:
    return "Wednesday";
  case 1:
    return "Thursday";
  case 2:
    return "Friday";
  case 3:
    return "Saturday";
  case 4:
    return "Sunday";
  case 5:
    return "Monday";
  case 6:
    return "Tuesday";
  }
}

void solve() {
  while(true) {
    int m, d;
    cin >> m >> d;
    if(m == 0) break;
    cout << tos(tod(m, d)) << endl;
  }
}

int main() {
  solve();
  return 0;
}
