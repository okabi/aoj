#include <cstdio>
#include <cmath>
#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <algorithm>
#include <functional>

#ifndef M_PI
#define M_PI 3.14159265358979
#endif
#define DEG_TO_RAD(deg) (((deg)/360.0)*2.0*M_PI)
#define RAD_TO_DEG(rad) (((rad)/2.0/M_PI)*360.0)
const double EPS = 1e-10;

using namespace std;

char field[10][10];

int v(int y, int x) {
  if(x >= 0 && x < 8 && y >= 0 && y < 8) return field[y][x] - '0';
  return 0;
}

void solve() {
  bool loop = true;
  while(loop) {
    for(int i=0; i<8; ++i) {
      if(scanf("%s", field[i]) == EOF) {
	return;
      }
    }
    for(int i=0; i<8; ++i) {
      for(int j=0; j<8; ++j) {
	// A
	if(v(j, i) == 1 && v(j, i+1) == 1 && v(j+1, i) == 1 && v(j+1, i+1) == 1) {
	  printf("A\n");
	  goto END;
	}
	// B
	if(v(j, i) == 1 && v(j+1, i) == 1 && v(j+2, i) == 1 && v(j+3, i) == 1) {
	  printf("B\n");
	  goto END;
	}
	// C
	if(v(j, i) == 1 && v(j, i+1) == 1 && v(j, i+2) == 1 && v(j, i+3) == 1) {
	  printf("C\n");
	  goto END;
	}
	// D
	if(v(j, i) == 1 && v(j+1, i) == 1 && v(j+1, i-1) == 1 && v(j+2, i-1) == 1) {
	  printf("D\n");
	  goto END;
	}
	// E
	if(v(j, i) == 1 && v(j, i+1) == 1 && v(j+1, i+1) == 1 && v(j+1, i+2) == 1) {
	  printf("E\n");
	  goto END;
	}
	// F
	if(v(j, i) == 1 && v(j+1, i) == 1 && v(j+1, i+1) == 1 && v(j+2, i+1) == 1) {
	  printf("F\n");
	  goto END;
	}
	// G
	if(v(j, i) == 1 && v(j, i+1) == 1 && v(j-1, i+1) == 1 && v(j-1, i+2) == 1) {
	  printf("G\n");
	  goto END;
	}
      }
    }
  END:
    int hoge;
  }
}

int main() {
  solve();
  return 0;
}
