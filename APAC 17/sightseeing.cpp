#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#define ll long long int
using namespace std;

struct node {
  ll s, f, d;
};

ll wt(ll T, node bus) {

  if(T == bus.s) return 0;
  else if(T<bus.s) return bus.s - T;
  else {
    ll x = ceil((double)(T-bus.s)/bus.f);
    return bus.s+x*bus.f - T;
  }
}

ll f(ll n, vector<node> sch, ll Ts, ll ind,  ll Tf, ll T, ll ans) {
  if(Tf<0) return -1;
  if(ind == n -1) { return ans; }

  node bus = sch[ind];
  ll wait = wt(T+Ts, bus)+Ts;
  ll wait_ = wt(T, bus);

  wait += bus.d;
  wait_ += bus.d;

  cout<<"Ind:"<<ind<<" Tf:"<<Tf<<" T:"<<T<<" ans:"<<ans;
  cout<<" wait:"<<wait<<" wait_:"<<wait_<<endl;
  return max(  f(n, sch, Ts, ind+1, Tf-wait, T+wait, ans+1),
               f(n, sch, Ts, ind+1, Tf-wait_, T+wait_, ans));
}

int main() {
  #ifndef ONLINE_JUDGE
    freopen("test.txt", "r", stdin);
    // freopen("A-large-practice.in", "r", stdin);
    // freopen("A-small-attempt0.txt", "w", stdout);
  #endif

  ll T;
  cin>>T;

  for(ll j=0; j<T; j++) {
    vector<node> sch;
    ll n, Ts, Tf;
    cin>>n>>Ts>>Tf;

    for(ll i=0; i<n-1; i++) {
      ll s, f, d;
      cin>>s>>f>>d;
      node x;
      x.s = s; x.f = f; x.d = d;
      sch.push_back(x);
    }

    cout<<"Case #"<<j+1<<": ";

    cout<<endl;
    f(n, sch, Ts, 0, Tf, 0, 0);
    cout<<endl<<endl;

    // ll ans = f(n, sch, Ts, 0, Tf, 0, 0);
    // if(ans != -1)cout<<ans<<endl;
    // else cout<<"IMPOSSIBLE"<<endl;

  }

    return 0;
}
