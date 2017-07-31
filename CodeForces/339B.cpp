#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
  int n, t;
  cin>>n>>t;

  long long int pos = 1, ans = 0;
  while(t--) {
    int x;
    cin>>x;

    if(pos > x) ans += n-pos + x;
    else ans += x-pos;
    pos = x;
  }

  cout<<ans;

  return 0;
}
