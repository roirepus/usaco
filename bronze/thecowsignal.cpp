#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char *argv[]) {

  int m, n, k;
  cin >> m >> n >> k;
  vector<string> v;
  for (int i = 0; i < m; i++) {
    string s;
    cin >> s;
    v.push_back(s);
  }

  vector<string> temp;
  for (int i = 0; i < n; i++) {

    for (int j = i; j < k + i; j++) {
      temp[i](k * n, " ");
      temp[0][j] = v[0][i];
      temp.push_back(temp[0]);
    }
    v[0] = temp[0];
  }

  for (auto s : temp) {
    cout << s << '\n';
  }
  cout << v[0][0];

  return 0;
}
