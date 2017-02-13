#include <cstdio>
#include <cmath>
#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <algorithm>
#include <functional>
using namespace std;

void solve() {
  int n;
  cin >> n;
  for(int i=0; i<n; ++i) {
    string a, b;
    cin >> a >> b;
    if(a.size() > 80 || b.size() > 80) {
      printf("overflow\n");
      continue;
    }

    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    int plus = 0;
    string ans = "";
    for(int j = 0; plus == 1 || j < a.size() || j < b.size(); ++j) {
      int tmp = plus;
      if(j < a.size()) tmp += a[j] - '0';
      if(j < b.size()) tmp += b[j] - '0';
      plus = tmp / 10;
      char c[4];
      sprintf(c, "%d", tmp % 10);
      ans += c[0];
    }

    if(ans.size() > 80) {
      printf("overflow\n");
      continue;
    }
    reverse(ans.begin(), ans.end());
    cout << ans << endl;
  }
}

int main() {
  solve();
  return 0;
}
