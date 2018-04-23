#include <cstdio>
#include <cmath>
#include <iostream>
using namespace std;

int main() {
  while(true) {
    int x, y;
    cin >> x >> y;
    if(x == 0 && y == 0) return 0;
    if(x < y) printf("%d %d\n", x, y);
    else printf("%d %d\n", y, x);
  }
}
