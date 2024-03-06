#include <bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[]) {

  int ma, mb, mc, ca, cb, cc, ra{0}, rb{0}, rc{0};
  cin >> ca >> ma >> cb >> mb >> cc >> mc;
  // for (int i = 0; i < 4; ++i) {
  if (cb >= ma + mb) {
    ra = 0;
    mb = ma + mb;
  } else {

    ra = ma + mb - cb;
    mb = cb;
  }
  if (cc >= mb + mc) {
    rb = 0;
    mc = mb + mc;

  } else {
    rb = mb + mc - cc;
    mc = cc;
  }
  if (ca >= ra + mc) {
    rc = 0;
    ma = ra + mc;
  } else {
    rc = mc + ra - ca;
    ma = ca;
  }
  // }
  cout << ra << '\n' << rb << '\n' << rc;
  return 0;
}
