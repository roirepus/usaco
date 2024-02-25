#include <bits/stdc++.h>
using namespace std;

int main (int argc, char *argv[]) {
    
    long long k,n,w;
    cin>>k>>n>>w;
    long long total=0;
   total = ((w*(w+1))/2)*k;
    if(total<=n){cout<<"0";}
    else {
      cout<< total-n;
    }
    return 0;
}
