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

// 深さ優先探索を行う。ノードクラス T を作成して使う。
// 解が見つかれば true を返し、answer にゴール状態のインスタンスを代入する。
// bool T::is_goal() : インスタンスがゴール状態なら true を返す。
// vector<T> T::next() : インスタンスの状態から遷移可能な次の状態をすべて返す。
// bool T::operator==(T) : インスタンスの状態が等しいなら true を返す。
template <typename T>
bool dfs(vector<T> init_states, T& answer) {
  stack<T> states;
  vector<T> pushed_states;
  for(int i=0; i<init_states.size(); ++i) {
    states.push(init_states[i]);
    pushed_states.push_back(init_states[i]);
  }
  while(states.size() > 0) {
    T s = states.top();
    states.pop();
    // s.draw();  // 取り出した状態を描画する
    if(s.is_goal()) {
      answer = s;
      return true;
    }
    vector<T> next = s.next();
    for(int i=0; i<next.size(); ++i) {
      bool pushed = false;
      for(int j=0; j<pushed_states.size(); ++j) {
	if(next[i] == pushed_states[j]) {
	  pushed = true;
	  break;
	}
      }
      if(pushed) continue;
      states.push(next[i]);
      pushed_states.push_back(next[i]);
    }
  }
  return false;
}

class Node {
  queue<int> stock;
  stack<int> left;
  stack<int> right;

public:
  Node(){}

  Node(int* inits, int inits_num) {
    for(int i=0; i<inits_num; ++i) stock.push(inits[i]);
  }

  bool is_goal() {
    return stock.size() == 0;
  }

  vector<Node> next() {
    vector<Node> ret;
    if(left.size() == 0 || stock.front() > left.top()) {
      Node n = *this;
      n.left.push(n.stock.front());
      n.stock.pop();
      ret.push_back(n);
    }
    if(right.size() == 0 || stock.front() > right.top()) {
      Node n = *this;
      n.right.push(n.stock.front());
      n.stock.pop();
      ret.push_back(n);
    }
    return ret;
  }

  bool operator==(Node n) {
    return stock == n.stock && left == n.left && right == n.right;
  }

  bool operator!=(Node n) {
    return !(*this == n);
  }

  void draw() {
    Node n = *this;
    printf("queue: ");
    while(n.stock.size() > 0) {
      printf("%d ", n.stock.front());
      n.stock.pop();
    }
    printf("\n");
    printf("left: ");
    while(n.left.size() > 0) {
      printf("%d ", n.left.top());
      n.left.pop();
    }
    printf("\n");
    printf("right: ");
    while(n.right.size() > 0) {
      printf("%d ", n.right.top());
      n.right.pop();
    }
    printf("\n\n");
  }
};

void solve() {
  int n;
  cin >> n;
  for(int i=0; i<n; ++i) {
    int a[10];
    for(int j=0; j<10; ++j) cin >> a[j];
    Node init(a, 10);
    Node ans;
    vector<Node> inits;
    inits.push_back(init);
    if(dfs<Node>(inits, ans)) {
      printf("YES\n");
    }
    else {
      printf("NO\n");
    }
  }
}

int main() {
  solve();
  return 0;
}
