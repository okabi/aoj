#include <cstdio>
#include <cmath>
using namespace std;

int main() {
  int a, b;
  scanf("%d", &a);
  scanf("%d", &b);
  if(a < b)      printf("a < b");
  else if(a > b) printf("a > b");
  else           printf("a == b");
  printf("\n");
  return 0;
}
