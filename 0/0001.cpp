#include <cstdio>
#include <cmath>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;

int main() {
  vector<int> v(10);
  for(int i=0; i<10; ++i) {
    scanf("%d", &v[i]);
  }

  sort(v.begin(), v.end(), greater<int>());

  for(int i=0; i<3; ++i) {
    printf("%d\n", v[i]);
  }

  return 0;
}
