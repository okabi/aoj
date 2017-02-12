#include <cstdio>
#include <cmath>
#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;

int main() {
  int n;
  cin >> n;
  unsigned int money = 100000;
  for(int i=0; i<n; i++) {
    money = money * 1.05;
    if(money % 1000 > 0)  money = (money / 1000 + 1) * 1000;
  }
  printf("%d\n", money);

  return 0;
}
