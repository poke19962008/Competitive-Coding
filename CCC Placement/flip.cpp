#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    // #ifndef ONLINE_JUDGE
    //   freopen("test.txt", "r", stdin);
    // #endif

    string str;
    int arr[1000006];
    cin>>str;
    int n = str.size(), ones=0;

    for(int i=0; i<n; i++) {
      arr[i] = (str[i]-'0')? -1:1;
      ones += (str[i]-'0');
    }

    if(ones == n){
      cout<<"-1";
      return 0;
    }

    int loc = arr[0];
    int glo = arr[0];

    int x=0, y=0;
    for(int i=1; i<n; i++) {
      if(arr[i] > loc+arr[i]) {
        x=i;
        loc = arr[i];
      }else {
        loc += arr[i];
      }

      if(loc>glo){
        glo = loc;
        y=i;
      }
    }

    cout<<x+1<<" "<<y+1;
    return 0;
}
