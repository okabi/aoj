#include <cstdio>
#include <cmath>
using namespace std;

int main() {
  int a, b, c;
  scanf("%d", &a);
  scanf("%d", &b);
  scanf("%d", &c);
  if(a < b && b < c) printf("Yes");
  else               printf("No");
  printf("\n");
  return 0;
}
