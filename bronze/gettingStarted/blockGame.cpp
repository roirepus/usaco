#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char *argv[]) {
  int n;
  cin >> n;
  string arr[2 * n];
  for (int i = 0; i < 2 * n; i++) {
    cin >> arr[i];
  }
  int alph[26]{0};
  int ctr{0};
  for (int i = 0; i < 2 * n; i++) {
    for (int j = 0; j < arr[i].length(); j++) {
      int a = (int(arr[i][j])) - 97;
      alph[a]++;
    }
  }
  for (int i = 0; i < 26; i++) {
    cout << alph[i] << '\n';
  }
  return 0;
}
