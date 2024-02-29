#include <bits/stdc++.h>

using namespace std;
typedef pair<int, int> pint;
int main(int argc, char *argv[]) {

  int x1, y1, x2, y2, p1, p2, q1, q2;
  cin >> x1 >> y1 >> x2 >> y2 >> p1 >> q1 >> p2 >> q2;
  int x, y;
  if (x1 >= p1) {
    x = abs(x1 - p1) + (x2 - x1);
  } else {

    x = abs(x1 - p1) + (p2 - p1);
  }
  if (y1 >= q1) {
    y = abs(y1 - q1) + (y2 - q1);
  } else {

    y = abs(y1 - q1) + (y2 - q1);
  }
  if (x >= y) {
    cout << x * x;
  } else {
    cout << y * y;
  }

  return 0;
}
