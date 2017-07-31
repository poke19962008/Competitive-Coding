#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
  long int n, l, arr[1003];
  cin>>n>>l;
  for(int i=0; i<n; i++) cin>>arr[i];

  sort(arr, arr+n);
  float ans = arr[0];
  for(int i=1; i<n; i++) {
    if(arr[i]-arr[i-1] > (long int)2*ans) {
      // cout<<arr[i]-arr[i-1]<<endl;
      ans = (float)(arr[i]-arr[i-1])/2;
    }
  }

  ans = (ans > l-arr[n-1])? ans: l-arr[n-1];
  printf("%.9f", ans);
  return 0;
}
