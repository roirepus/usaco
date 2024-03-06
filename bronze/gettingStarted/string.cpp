#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
  string s;
  cin >> s;
  for (int i = 0; i < 4; i++) {
    s[i] += s[i];
  }
  cout << s;

  return 0;
}
