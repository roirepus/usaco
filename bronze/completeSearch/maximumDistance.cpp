#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int x[n];
  int y[n];
  for (int i = 0; i < n; ++i) {
    cin >> x[i];
  }
  for (int i = 0; i < n; ++i) {
    cin >> y[i];
  }
  int dist{0};
  for (int i = 0; i < n; ++i) {
    for (int j = i + 1; j < n; ++j) {
      int dx = x[i] - x[j];
      int dy = y[i] - y[j];
      dist = max(dist, dx * dx + dy * dy);
    }
  }
  cout << dist << '\n';

  return 0;
}
