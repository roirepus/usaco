#include <bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[]) {

  freopen("shell.in", "r", stdin);

  freopen("shell.out", "w", stdout);
  int n;
  cin >> n;
  int ctrA{0};
  int ctrB{0};
  int ctrC{0};
  for (int i = 0; i < n; ++i) {
    int a, b, g;
    cin >> a >> b >> g;
    int correct = 1;
    if ((a == correct || b == correct) && g == correct) {

      ctrA++;
    }
    correct = 2;
    if ((a == correct || b == correct) && g == correct) {

      ctrB++;
    }
    correct = 3;
    if ((a == correct || b == correct) && g == correct) {

      ctrC++;
    }
  }

  vector<int> v = {ctrA, ctrB, ctrC};
  sort(v.begin(), v.end());
  cout << v[2] << endl;
  return 0;
}
