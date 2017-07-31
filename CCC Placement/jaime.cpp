#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#define ll long long int
using namespace std;

ll n, p, arr[1000006];
ll freq[2000006] = {0};
vector<ll> v;
int main() {
  // #ifndef ONLINE_JUDGE
  //   freopen("test.txt", "r", stdin);
  // #endif



    scanf("%lld", &n);
    scanf("%lld", &p);
    for(ll i=0; i<n; i++) scanf("%lld", &arr[i]);

    sort(arr, arr+n);

    for(ll i=0; i<n; i++) {
      ll x = ceil((double) arr[i]/p );
      v.push_back(x);
      freq[x]++;
    }

    ll ans = 0;
    ll start = -1;
    for(ll i=0; i<n; i++) {

      if(freq[ v[i] ] > 1) {

        if(start == -1) start = v[i]+1;
        if(start < v[i]) start = v[i]+1;
        ll j=start;
        while(true){
          if(!freq[j]){
            ans+=j;
            freq[j]++;
            freq[v[i]]--;
            start = j+1;

            // cout<<v[i]<<"->"<<j<<"\n";
            break;
          }
          j++;
        }

      }else {
        ans+=v[i];
        freq[v[i]]--;
      }

    }

    cout<<ans;
    return 0;
}
