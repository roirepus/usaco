#include <iostream>
using namespace std;

int main() {
  freopen("cbarn.in", "r", stdin);
  freopen("cbarn.out", "w", stdout);
  int n;
  cin >> n;
  int arr[n]{0};
  for (int i = 0; i < n; ++i) {
    cin >> arr[i];
  }
  long long min{1000000000000000000};
  for (int i = 0; i < n; i++) {
    long long sum{0};

    for (int j = 0; j < n; j++) {
      if (j < i) {
        sum += arr[j] * (n - i + j);

      } else if (j == i) {
        sum += 0;
      } else if (j > i) {
        sum += arr[j] * (j - i);
      }
    }
    if (sum <= min) {
      min = sum;
    }
  }
  // int i = 1;
  // for (int j = 0; j < n; j++) {
  //   if (j < i) {
  //     sum += arr[j] * (n - i + j);
  //
  //   } else if (j == i) {
  //     sum += 0;
  //   } else if (j > i) {
  //     sum += arr[j] * (j - i);
  //   }
  // }
  // if (sum < min) {
  //   min = sum;
  // }

  cout << min;

  return 0;
}
