#include <cstdio>
#include <cmath>
using namespace std;

int main() {
  const int Size = 3;
  int sorted[Size];
  for(int i = 0; i < Size; ++i) scanf("%d", &sorted[i]);

  for(int i = 0; i < Size; ++i) {
    for(int j = 0; j < Size - 1 - i; ++j) {
      if(sorted[j] > sorted[j + 1]) {
        int tmp = sorted[j];
        sorted[j] = sorted[j + 1];
        sorted[j + 1] = tmp;
      }
    }
  }

  for(int i = 0; i < Size; ++i) {
    printf("%d", sorted[i]);
    if(i == Size - 1) printf("\n");
    else printf(" ");
  }

  return 0;
}
