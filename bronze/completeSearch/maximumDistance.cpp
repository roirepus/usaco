// Problem: A. Maximum Distance
// Contest: USACO Guide Problem Submission
// Judge: Codeforces
// URL: https://codeforces.com/gym/102951/problem/A
// Memory Limit: 256
// Time Limit: 4000
// Start: Wed Mar  6 19:21:12 2024

#include <bits/stdc++.h>
using namespace std;

int main() {

  long long n;
  cin >> n;
  int x[n];
  int y[n];
  for (int i = 0; i < n; i++) {
    cin >> x[i];
  }
  for (int i = 0; i < n; i++) {
    cin >> y[i];
  }
  // sort(x, x + n);
  // sort(y, y + n);
  // long long result = ((x[0] - x[n - 1]) * (x[0] - x[n - 1])) +
  //((y[0] - y[n - 1]) * (y[0] - y[n - 1]));
  // for (auto q : x) {
  //   cout << q << "\t";
  // }
  // cout << endl;
  // for (auto q : y) {
  //   cout << q << "\t";
  // }
  int result{0};
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      int dx = x[i] - x[j];
      int dy = y[i] - y[j];
      int square = dx * dx + dy * dy;

      result = max(result, square);
    }
  }

  cout << result;

  return 0;
}
