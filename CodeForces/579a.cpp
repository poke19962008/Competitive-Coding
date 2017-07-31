#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long x, ans=0;
    cin>>x;

    while(x){
      if(x&1) ans++;
      x >>=1;
    }
    cout<<ans;
    return 0;
}
