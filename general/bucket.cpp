#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vint;

int main() {
  char arr[10] = {};
  pair<int, int> barn, rock, lake;
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      cin >> arr[j];
      switch (arr[j]) {
      case 'B':
        barn.first = i;
        barn.second = j;
        break;
      case 'R':
        rock.first = i;
        rock.second = j;
        break;
      case 'L':
        lake.first = i;
        lake.second = j;
        break;
      }
    }
  }

  // pair<int, int> posi;
  // posi.first = lake.first;
  // posi.second = lake.second;
  // //cow += abs(lake.second - barn.second);
  //  if (lake.second > barn.second) {
  //    posi.second -= lake.second - barn.second;
  //  }
  //
  //  else if (lake.second < barn.second) {
  //    posi.second += lake.second - barn.second;
  //  }
  //  if (posi.second != rock.second) {
  //    cow += barn.second - posi.second;
  //  }
  // if(barn.second==lake.second ){

  // }

  int cows = abs(barn.first - lake.first) + abs(barn.second - lake.second) - 1;
  if (barn.first == lake.first && rock.first == barn.first &&

      ((lake.second < rock.second && rock.second < barn.second) ||

       (barn.second < rock.second && rock.second < lake.second))) {

    cows += 2;

  } else if (barn.second == lake.second && rock.second == barn.second &&

             ((lake.first < rock.first && rock.first < barn.first) ||

              (barn.first < rock.first && rock.first < lake.first))) {

    cows += 2;
  }
  cout << cows << endl;
  return 0;
}
