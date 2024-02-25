#include <bits/stdc++.h>
using namespace std;

int main (int argc, char *argv[]) {
    int n;cin>>n;
    int p=0;
    for(int i=0;i<n;i++){
        
        int a,b,c;
        cin>>a>>b>>c;

        if(a+b+c>=2){
            p++;
        }
   
    }cout<<p;
}
