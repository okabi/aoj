#include <cstdio>
#include <cmath>
#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
#include <functional>
using namespace std;

int main() {
  stack<int> st;
  vector<int> ans;
  int input;
  while(cin >> input) {
    if(input == 0) {
      ans.push_back(st.top());
      st.pop();
    }
    else {
      st.push(input);
    }
  }
  for(int i=0; i<ans.size(); ++i) {
    printf("%d\n", ans[i]);
  }
  return 0;
}
