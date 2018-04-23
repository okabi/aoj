#include <cstdio>
#include <cmath>
using namespace std;

int main() {
  int W, H, x, y, r;
  scanf("%d", &W);
  scanf("%d", &H);
  scanf("%d", &x);
  scanf("%d", &y);
  scanf("%d", &r);

  int xx[2] = {x - r, x + r};
  int yy[2] = {y - r, y + r};
  if(xx[0] >= 0 && yy[0] >= 0 && xx[1] <= W && yy[1] <= H) printf("Yes");
  else printf("No");
  printf("\n");

  return 0;
}
