#include <iostream>
using namespace std;

int main() {

  int n, m;
  cin >> n >> m;

  int valid[2 * n], bessie[2 * m];
  for (int i = 0; i < 2 * n; i++) {

    cin >> valid[i];
  }
  for (int i = 0; i < 2 * m; i++) {
    cin >> bessie[i];
  }
  for (int i = 2; i < n - 1; i += 2) {
    valid[i] += valid[i - 2];
  }
  for (int i = 2; i < m - 1; i += 2) {
    bessie[i] += bessie[i - 2];
  }
  for (auto x : valid) {
    cout << x << " ";
  }

  return 0;
}
