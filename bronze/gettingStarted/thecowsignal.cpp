#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char *argv[]) {

  // freopen("cowsignal.in", "r", stdin);
  // freopen("cowsignal.out", "w", stdout);
  int m, n, k;
  cin >> m >> n >> k;
  vector<string> v;
  for (int i = 0; i < m; i++) {
    string s;
    cin >> s;
    v.push_back(s);
  }
  vector<string> temp(m, "");
  for (int l = 0; l < m; l++) {
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < k; j++) {
        temp[l] += v[l][i];
      }
    }
  }
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < k; j++) {
      cout << temp[i] << endl;
    }
  }
  return 0;
}
