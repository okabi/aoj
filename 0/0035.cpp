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

// 2次元ベクトルクラス。
struct Vector2d {
  double x, y;

  Vector2d() {
    x = 0;
    y = 0;
  }

  Vector2d(double x, double y) {
    this->x = x;
    this->y = y;
  }

  Vector2d(const Vector2d& v) {
    *this = v;
  }

  double norm() {
    return sqrt(norm2());
  }

  double norm2() {
    return x * x + y * y;
  }

  double dot(Vector2d v) {
    return x * v.x + y * v.y;
  }

  double cross(Vector2d v) {
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

  Vector2d operator*=(double r) {
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

  friend Vector2d operator*(const Vector2d& v, double r) {
    return Vector2d (r * v.x, r * v.y);
  }

  friend Vector2d operator*(double r, const Vector2d& v) {
    return Vector2d (r * v.x, r * v.y);
  }

  Vector2d operator/(double r) {
    return Vector2d (x / r, y / r);
  }
};

// x の符号が正なら 1、負なら -1、ゼロなら 0 を返す。
double sign(double x){
  if(x > 0)       return 1;
  else if(x == 0) return 0;
  return -1;
}

void solve() {
  double x[4], y[4];
  while(scanf("%lf,%lf,%lf,%lf,%lf,%lf,%lf,%lf", &x[0], &y[0], &x[1], &y[1], &x[2], &y[2], &x[3], &y[3]) != EOF) {
    Vector2d ab(x[1] - x[0], y[1] - y[0]);
    Vector2d bc(x[2] - x[1], y[2] - y[1]);
    Vector2d cd(x[3] - x[2], y[3] - y[2]);
    Vector2d da(x[0] - x[3], y[0] - y[3]);
    double a = sign(ab.cross(bc));
    double b = sign(bc.cross(cd));
    double c = sign(cd.cross(da));
    double d = sign(da.cross(ab));
    if(a == b && b == c && c == d && d == a) {
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
