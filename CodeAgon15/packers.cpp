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
typedef vector<ll> vll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef vector<pii> vpii;
typedef vector<pll> vpll;

ll max(ll a, ll b) { return ((a>b)?a:b); }
ll min(ll a, ll b) { return ((a<b)?a:b); }
// int fastinput(){int t=0;char c;c=getchar_unlocked();while(c<'0' || c>'9')c=getchar_unlocked();while(c>='0' && c<='9'){t=(t<<3)+(t<<1)+c-'0';c=getchar_unlocked();}return t;}

vll cum;
ll sum_(vi v, int s, int n) {
  if(s == n) return v[s];
  // cout<<s<<":"<<n<<"--"<<cum[n-((n==v.size())?1:0)] - ((s == 0)?s: cum[s-1])<<" "<<sum<<endl;
  return cum[n-((n==v.size())?1:0)] - ((s == 0)?s: cum[s-1]);
}
ll f(vi v, int n, int p) {
  if(n == 1) return v[0];
  if(p == 1) return sum_(v, 0, n);


  ll ans = INF;
  FOR(i, 0, n, 1) {
    ans = min(ans, max(f(v, i, p-1) , sum_(v, i+1, n)));
    // debug_(ans, p);
  }
  return ans;
}

int main(){
  ioS;
  #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
  #endif

  int n, p;
  vi v;

  cin>>n>>p;
  REP(i, p) {
    int x; cin>>x;
    v.pb(x);
    if(!i) cum.pb(x);
    else cum.pb(cum[i-1]+x);
  }
  cout<<f(v, v.size(), n);
  return 0;
}
