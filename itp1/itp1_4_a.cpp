#include <cstdio>
#include <cmath>
#include <iostream>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;

  printf("%d %d %.5f\n", a/b, a%b, (double)a/b);

  return 0;
}
