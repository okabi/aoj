#include <cstdio>
#include <cmath>
#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;

struct Join {
  int a, b;
};

Join joins[30];

// 2数を入れ替える。
void swap(int& a, int& b){
  auto tmp = b;
  b = a;
  a = tmp;
}

int main() {
  int w, n;
  cin >> w >> n;
  for(int i=0; i<n; ++i) scanf("%d,%d", &joins[i].a, &joins[i].b);

  int ans[30];
  for(int i=0; i<w; ++i) ans[i] = i + 1;

  for(int i=0; i<n; ++i) {
    swap(ans[joins[i].a - 1], ans[joins[i].b - 1]);
  }

  for(int i=0; i<w; ++i) printf("%d\n", ans[i]);
  return 0;
}
