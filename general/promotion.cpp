#include <bits/stdc++.h>
#include <utility>
using namespace std;
typedef pair<int, int> pint;
int main(int argc, char *argv[]) {

  freopen("promote.in", "r", stdin);
  freopen("promote.out", "w", stdout);
  pint bronze, silver, gold, platinum;

  cin >> bronze.first >> bronze.second;
  cin >> silver.first >> silver.second;
  cin >> gold.first >> gold.second;
  cin >> platinum.first >> platinum.second;
  if (silver.first == silver.second) {
    cout << silver.first << endl;
  } else {
    cout << silver.second - silver.first << endl;
  }
  if (gold.first == gold.second) {
    cout << gold.first << endl;
  } else {
    cout << gold.second - gold.first << endl;
  }
  if (platinum.first == platinum.second) {
    cout << platinum.first << endl;
  } else {
    cout << platinum.second - platinum.first << endl;
  }
  return 0;
}
