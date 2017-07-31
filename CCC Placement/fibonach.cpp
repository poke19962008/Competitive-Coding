#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#define ll unsigned long long
#define N 1000006
#define MOD 100019
using namespace std;

ll nF[N];
void build() {
  ll fact[N];
  fact[0] = 1;
  for(int i=1; i<N; i++) fact[i] = (fact[i-1]*i)%MOD;

  nF[0] = 1; nF[1] = 1;
  for(int i=2; i<N; i++) nF[i] = fact[ nF[i-1] + nF[i-2] ];
}

int main() {
    #ifndef ONLINE_JUDGE
      freopen("test.txt", "r", stdin);
    #endif


    int T;
    build();
    cin>>T;

    while(T--) {
      ll x;

      cin>>x;
      cout<<nF[x]<<endl;
    }

    return 0;
}
