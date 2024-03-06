#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {

  freopen("lostcow.in", "r", stdin);
  freopen("lostcow.out", "w", stdout);
  int x, y;
  cin >> x >> y;
  int dist{0};
  for (int i = 1; i <= y; i *= 2) {
    if (x + i > y) {
      dist += abs(x - y);
      break;
    } else
      dist += 2 * abs(x - (x + i));
  }
  cout << dist;
  return 0;
}
