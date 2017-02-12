#include <cstdio>
#include <cmath>
#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;

int main() {
  int n;
  while(cin >> n) {
    int num = 0;
    for(int a = 0; a < 10; ++a) {
      for(int b = 0; b < 10; ++b) {
	for(int c = 0; c < 10; ++c) {
	  for(int d = 0; d < 10; ++d) {
	    if(a + b + c + d == n) {
	      ++num;
	    }
	  }
	}
      }
    }
    printf("%d\n", num);
  }

  return 0;
}
