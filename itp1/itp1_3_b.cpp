#include <cstdio>
#include <cmath>
#include <iostream>
using namespace std;

int main() {
  for(int i = 1; ; ++i) {
    int x;
    cin >> x;
    if(x == 0) return 0;
    printf("Case %d: %d\n", i, x);
  }
}
