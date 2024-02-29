#include <bits/stdc++.h>
using namespace std;

int main() {

  int x1, y1, x2, y2;
  int p1, q1, p2, q2;
  int s1, t1, s2, t2;
  cin >> x1 >> y2 >> y1 >> x2 >> y2 >> p1 >> q1 >> p2 >> q2 >> s1 >> t1 >> s2 >>
      t2;
  int arBll1 = abs(x1 - x2) * abs(y1 - y2);
  int arBll2 = abs(p1 - p2) * abs(q1 - q2);
  int areaBil = arBll2 + arBll1;
  int truck[4] = {s1, t1, s2, t2};

  return 0;
}
