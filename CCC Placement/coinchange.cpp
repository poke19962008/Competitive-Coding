#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
  // #ifndef ONLINE_JUDGE
  // freopen("input01.txt", "r", stdin);
  // // freopen("out.txt", "w", stdout);
  // #endif

    int n, amt, coins[261];

    cin>>amt>>n;
    for(int i=0; i<n; i++) cin>>coins[i];

    long dp[261][61]={0};
    for(int i=0; i<=n; i++) dp[0][i] = 1;
    //for(int i=1; i<=amt; i++) dp[i][0] = 0;

    for(int i=1; i<=amt; i++) {
        for(int j=1; j<=n; j++) {
            long consider = i-coins[j-1];
            consider = (consider>=0)?dp[consider][j]:0;
            dp[i][j] = dp[i][j-1] + consider;
        }
    }

    // for(int i=0; i<=amt; i++) {
    //   cout<<i<<": ";
    //   for(int j=0; j<=n; j++) cout<<dp[i][j]<<" ";
    //   cout<<endl;
    // }

    cout<<dp[amt][n];

    return 0;
}
