#include <cstdio>
#include <cmath>
#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;

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

int main() {
  int n;
  cin >> n;
  for(int i=0; i<n; ++i) {
    float x[3], y[3];
    for(int j=0; j<3; ++j) cin >> x[j] >> y[j];
    Vector2d ab(x[1] - x[0], y[1] - y[0]);
    Vector2d ac(x[2] - x[0], y[2] - y[0]);
    float a = ab.dot(ac);
    float b = ab.norm2();
    float c = ac.norm2();

    Vector2d ao;
    if(a == 0) {
      ao = ab / 2 + ac / 2;
    }
    else {
      float tmp = a * a - b * c;
      float t = (1 - (a - b) * c / tmp) * b / (2 * a);
      float s = (a - b) * c / (2 * tmp);
      ao = s * ab + t * ac;
    }
    float r = (ac - ao).norm();

    Vector2d ans(Vector2d(x[0], y[0]) + ao);
    printf("%.3f %.3f %.3f\n", ans.x, ans.y, r);
  }
  return 0;
}
