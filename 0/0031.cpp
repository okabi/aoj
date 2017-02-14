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

string to_binary(int n, int keta = 0) {
  string ret = "";
  for(int i = 0; n > 0 || i < keta; ++i) {
    int a = n % 2;
    n /= 2;
    char tmp[2];
    sprintf(tmp, "%d", a);
    ret += tmp;
  }
  reverse(ret.begin(), ret.end());
  return ret;
}

void solve() {
  int n;
  while(cin >> n) {
    string tmp = to_binary(n);
    reverse(tmp.begin(), tmp.end());
    for(int i=0; i<tmp.size(); ++i) {
      if(tmp[i] == '1') {
	printf("%d", (int)pow(2, i));
	if(i < tmp.size() - 1) printf(" ");
      }
    }
    printf("\n");
  }
}

int main() {
  solve();
  return 0;
}
