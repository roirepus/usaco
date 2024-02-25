#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;
typedef vector<int> vint;
int dist1 = 0;
int dist2 = 0;
auto viateleport(int a, int b, int x, int y) {
  int start, end;
  if (abs(a - x) >= abs(a - y)) {
    start = y;
    end = x;
  } else {
    start = x;
    end = y;
  }

  dist1 += abs(a - start);
  dist1 += abs(b - end);
  return;
}

auto plain(int a, int b, int x, int y) {

  dist2 += abs(a - b);

  return;
}

int main(int argc, char *argv[]) {
  freopen("teleport.in", "r", stdin);
  freopen("teleport.out", "w", stdout);
  int a, b, x, y;
  cin >> a >> b >> x >> y;
  viateleport(a, b, x, y);
  plain(a, b, x, y);
  if (dist1 >= dist2) {
    cout << dist2;
  } else {
    cout << dist1;
  }

  return 0;
}
