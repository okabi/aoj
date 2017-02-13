#include <cstdio>
#include <cmath>
#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <algorithm>
#include <functional>

#ifndef M_PI
#define M_PI 3.14159265358979
#endif
#define DEG_TO_RAD(deg) (((deg)/360.0)*2.0*M_PI)
#define RAD_TO_DEG(rad) (((rad)/2.0/M_PI)*360.0)

using namespace std;

char caesar(char c, int num) {
  if(c >= 'a' && c <= 'z')  return (c - 'a' + num) % ('z' - 'a' + 1) + 'a';
  else                      return c;
}

void solve() {
  string input;
  while(getline(cin, input)) {
    string ans = input;
    for(int i=0; i<='z'-'a'; ++i) {
      for(int j=0; j<ans.size(); ++j) {
	ans[j] = caesar(input[j], i);
      }
      if(ans.find("the") != -1 || ans.find("this") != -1 || ans.find("that") != -1) {
	cout << ans << endl;
	break;
      }
    }
  }
}

int main() {
  solve();
  return 0;
}
