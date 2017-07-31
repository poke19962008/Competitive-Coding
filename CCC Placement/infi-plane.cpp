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

    int x1, y1;
    int x2, y2;
    cin>>x1>>y1;

    long long int ans = 0;
    while(cin>>x2>>y2) {
      ans += max(abs(x1 - x2), abs(y1 - y2));
      x1= x2; y1=y2;
    }
    cout<<ans;
    return 0;
}
