#include <cstdio>
#include <cmath>
#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;

int main() {
  int N;
  cin >> N;
  for(int i=0; i<N; ++i){
    vector<int> v(3);
    for(int j=0; j<3; ++j){
      cin >> v[j];
    }
    sort(v.begin(), v.end());
    if(v[0]*v[0]+v[1]*v[1] == v[2]*v[2]){
      printf("YES\n");
    }
    else{
      printf("NO\n");
    }
  }

  return 0;
}
