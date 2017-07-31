#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
  int n, t;
  string str;
  cin>>n>>t;
  cin>>str;

  while(t--) {
      for(int i=0; i<n-1; i++) {
         if(str[i] == 'B' && str[i+1] == 'G') {swap(str[i], str[i+1]); i++; }
      }
  }
  cout<<str;

  return 0;
}
