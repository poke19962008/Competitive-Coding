#include <iostream>
#include <stdio.h>
#include <math.h>
#include <stdio.h>
#include <string>
#include <vector>
#include <algorithm>
#include <queue>
#include <list>
#include <stack>
#include <map>
#include <set>
using namespace std;

#define EPS 1e-9
#define INF 1e15+9
#define MOD 1000000007
#define MAXN 1000006

#define ioS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(x) cout<<#x<<"="<<x<<"\n";
#define debug_(x,y) cout<<#x<<"="<<x<<" and "<<#y<<"="<<y<<"\n";

#define pb push_back
#define mp make_pair

#define FOR(i, j, k, in) for (int i=j ; i<k ; i+=in)
#define RFOR(i, j, k, in) for (int i=j ; i>=k ; i-=in)
#define REP(i, j) FOR(i, 0, j, 1)
#define RREP(i, j) RFOR(i, j, 0, 1)

typedef unsigned long long int ul;
typedef long long int ll;
typedef long int l;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef vector<pii> vpii;
typedef vector<pll> vpll;

ll dist(int a, int b, int c) {
  return abs(a-b) + abs(b-c);
}


int main(){
  ioS;

  #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
  #endif

  int n, k, a[MAXN], b[MAXN];
  ll ans = INF, p;
  cin>>n>>k>>p;
  REP(i, n) cin>>a[i];
  REP(i, k) cin>>b[i];

  sort(a, a+n);
  sort(b, b+k);

  REP(i, k-n+1) {
    ll ans_ = -INF;
    REP(j, n) {
      ll tot = dist(a[j], b[j+i], p);
      ans_ = max(ans_, tot);
    }
    ans = min(ans, ans_);
    // debug(ans_);
  }
  cout<<ans;

  return 0;
}
