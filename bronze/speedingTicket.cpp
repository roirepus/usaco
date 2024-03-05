#include <iostream>
using namespace std;

int main() {

  int n, m;
  cin >> n >> m;
  int valid[2 * n]{0};
  int bessie[2 * m]{0};

  for (int i = 0; i < 2 * n; ++i) {
    cin >> valid[i];
  }
  for (int i = 0; i < 2 * m; ++i) {
    cin >> bessie[i];
  }
  for (int i = 2; i < 2 * m - 1; i += 2) {
    bessie[i] += bessie[i - 2];
  }
  for (int i = 2; i < 2 * n - 1; i += 2) {
    valid[i] += valid[i - 2];
  }
  int speed{0};
  for (int i = 0; i < 2 * m - 1; i += 2) {
    for (int j = 0; j < 2 * n - 1; j += 2) {
      if (bessie[i] >= valid[j] && bessie[i] < valid[j + 2]) {
        if (valid[j + 1] > bessie[i + 1] &&
            speed < valid[j + 1] - bessie[i + 1]) {
          speed = valid[j + 1] - bessie[i + 1];
        }
      }
    }
  }
  cout << speed;

  return 0;
}
