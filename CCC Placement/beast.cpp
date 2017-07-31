#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

    #ifndef ONLINE_JUDGE
      freopen("input01.txt", "r", stdin);
      // freopen("out.txt", "w", stdout);
    #endif
    int t;
    cin>>t;

    while(t--) {
        int n, x, y;

        cin>>n;
        int count = ((2*n) % 3) * 5;
        if(count > n) cout<<"-1\n";
        else {
          int x = n-count;
          while(x--) cout<<"5";
          while(count--) cout<<"3";
          cout<<endl;
        }
    }
    return 0;
}
