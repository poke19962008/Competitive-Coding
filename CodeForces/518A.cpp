#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
  string a, b, ans;
  cin>>a>>b;
  int len = a.size();

  int i=len-1;
  while(i>=0 && a[i] == 'z') i--;

  if(i<0) cout<<"No such string";
  else {
    a[i]++;

    for(i=i+1; i<len ; i++) {
      a[i] = 'a';
    }
    if(a>=b) cout<<"No such string";
    else cout<<a;
  }

  return 0;
}
