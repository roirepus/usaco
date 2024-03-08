// Problem: Problem 1. Triangles
// Contest: USACO 2020 February Contest, Bronze
// Judge: USACO
// URL: https://usaco.org/index.php?page=viewproblem2&cpid=1011
// Memory Limit: 256
// Time Limit: 4000
// Start: Thu Mar  7 22:12:53 2024

#include <bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin >> n;
  int x[n];
  int y[n];
  for (int i = 0; i < n; i++) {
    cin >> x[i] >> y[i];
  }
  int maxArea{0};
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      for (int k = 0; k < n; k++) {
        if (y[i] == y[j] && x[i] == x[k]) {
          int area = abs(x[j] - x[i]) * abs(y[k] - y[i]);
          maxArea = max(maxArea, area);
        }
      }
    }
  }
  cout << maxArea;
  return 0;
}
