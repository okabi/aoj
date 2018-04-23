#include <cstdio>
#include <cmath>
#include <iostream>
using namespace std;

int a[10000];

int main() {
  int n;
  cin >> n;

  int min = 1000000;
  int max = -1000000;
  long long sum = 0;
  for(int i = 0; i < n; ++i) {
    cin >> a[i];
    if(a[i] < min) min = a[i];
    if(max < a[i]) max = a[i];
    sum += a[i];
  }

  printf("%d %d %lld\n", min, max, sum);
  return 0;
}
