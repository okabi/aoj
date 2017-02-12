#include <cstdio>
#include <cmath>
#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;

#define NUM 1000000
bool flag[NUM];

void init(int n) {
  for(int i=1; i<=n; ++i) {
    flag[i] = true;
  }
}

int main() {
  int n;
  while(cin >> n) {
    init(n);
    int num = 0;
    for(int i=2; i<=n; ++i) {
      if(flag[i]) {
	++num;
	for(int j=2*i; j<=n; j+=i) {
	  flag[j] = false;
	}
      }
    }
    printf("%d\n", num);
  }
  return 0;
}
