#include <cstdio>
#include <cmath>
#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;

// 2次元ベクトルクラス。
struct Vector2d {
  float x, y;

  Vector2d() {
    x = 0;
    y = 0;
  }

  Vector2d(float x, float y) {
    this->x = x;
    this->y = y;
  }

  Vector2d(const Vector2d& v) {
    *this = v;
  }

  float norm() {
    return sqrt(norm2());
  }

  float norm2() {
    return x * x + y * y;
  }

  float dot(Vector2d v) {
    return x * v.x + y * v.y;
  }

  float cross(Vector2d v) {
    return x * v.y - y * v.x;
  }

  Vector2d& operator=(const Vector2d& v) {
    x = v.x;
    y = v.y;
    return *this;
  }

  Vector2d operator-() {
    return Vector2d(-x, -y);
  }

  Vector2d& operator+=(const Vector2d& v) {
    x += v.x;
    y += v.y;
    return *this;
  }

  Vector2d operator-=(const Vector2d& v) {
    x -= v.x;
    y -= v.y;
    return *this;
  }

  Vector2d operator*=(float r) {
    x *= r;
    y *= r;
    return *this;
  }

  Vector2d operator+(const Vector2d& v) {
    return Vector2d (x + v.x, y + v.y);
  }

  Vector2d operator-(const Vector2d& v) {
    return Vector2d (x - v.x, y - v.y);
  }

  friend Vector2d operator*(const Vector2d& v, float r) {
    return Vector2d (r * v.x, r * v.y);
  }

  friend Vector2d operator*(float r, const Vector2d& v) {
    return Vector2d (r * v.x, r * v.y);
  }

  Vector2d operator/(float r) {
    return Vector2d (x / r, y / r);
  }
};

// x の符号が正なら 1、負なら -1、ゼロなら 0 を返す。
double sign(double x){
  if(x > 0)       return 1;
  else if(x == 0) return 0;
  return -1;
}

int main() {
  float x[4], y[4];
  while(cin >> x[0] >> y[0] >> x[1] >> y[1] >> x[2] >> y[2] >> x[3] >> y[3]) {
    Vector2d a(x[1] - x[0], y[1] - y[0]);
    Vector2d b(x[2] - x[1], y[2] - y[1]);
    Vector2d c(x[0] - x[2], y[0] - y[2]);
    Vector2d pa(x[3] - x[0], y[3] - y[0]);
    Vector2d pb(x[3] - x[1], y[3] - y[1]);
    Vector2d pc(x[3] - x[2], y[3] - y[2]);
    float ca = sign(a.cross(pa));
    float cb = sign(b.cross(pb));
    float cc = sign(c.cross(pc));
    if(ca == cb && cb == cc)  printf("YES\n");
    else                      printf("NO\n");
  }
  return 0;
}
