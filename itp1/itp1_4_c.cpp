#include <cstdio>
#include <cmath>
#include <iostream>
using namespace std;

int main() {
  while(true) {
    int a, b;
    char op;
    cin >> a >> op >> b;
    if(op == '?') return 0;

    if(op == '+') printf("%d\n", a + b);
    if(op == '-') printf("%d\n", a - b);
    if(op == '*') printf("%d\n", a * b);
    if(op == '/') printf("%d\n", a / b);
  }
}
