#include <algorithm>
#include <iostream>
#include <stdio.h>
#include <math.h>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <list>
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

int max(int a, int b) { return ((a>b)?a:b); }
int min(int a, int b) { return ((a<b)?a:b); }

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
typedef vector<string> vs;
typedef vector<ll> vl;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef vector<pii> vpii;
typedef vector<pll> vpll;

// int fastinput(){int t=0;char c;c=getchar_unlocked();while(c<'0' || c>'9')c=getchar_unlocked();while(c>='0' && c<='9'){t=(t<<3)+(t<<1)+c-'0';c=getchar_unlocked();}return t;}

bool cmp(pll a, pll b) {
  if(a.first != b.first) return a.first < b.first;
  else return a.second > b.second;
}

int main(){
  ioS;

  // #ifndef ONLINE_JUDGE
  //   freopen("in.txt", "r", stdin);
  // #endif

  int n;
  vpll v;
  cin>>n;

  REP(i, n) {
    int x; cin>>x;
    v.pb(mp(x, i+1));
  }
  ll k;
  cin>>k;

  sort(v.begin(), v.end(), cmp);

  ll ans2 = 0;
  REP(i, n) {
    ll stocks = floor(k/v[i].first);
    if(stocks > v[i].second) stocks = v[i].second;
    // debug_(stocks, v[i].first);
    k -= v[i].first*stocks;
    if(k < 0) break;
    ans2 += stocks;
  }

  cout<<ans2;
  return 0;
}
