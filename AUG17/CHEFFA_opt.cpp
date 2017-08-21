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
#include <time.h>
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
typedef vector<ll> vl;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef vector<pii> vpii;
typedef vector<pll> vpll;

int fastinput(){int t=0;char c;c=getchar_unlocked();while(c<'0' || c>'9')c=getchar_unlocked();while(c>='0' && c<='9'){t=(t<<3)+(t<<1)+c-'0';c=getchar_unlocked();}return t;}

void display(vl v, ll p) {
  FOR(i, p, v.size(), 1) cout<<v[i]<<' ';
  cout<<endl;
}

ll memo[300][300] = {0};
ll memo1[300][300][300] = {0};
ll memo2[300][300][300][300] = {0};
// ll memo3[51][51][51][51][51] = {0};
// ll memo4[101][101][101][101][101][101] = {0};
ll f(vl v, ll p) {
  // display(v);

  if(v.size()-2 == p && memo[v[p]][v[p+1]]) return memo[v[p]][v[p+1]];
  if(v.size()-3 == p && memo1[v[p]][v[p+1]][v[p+2]]) return memo1[v[p]][v[p+1]][v[p+2]];
  if(v.size()-4 == p && memo2[v[p]][v[p+1]][v[p+2]][v[p+3]]) return memo2[v[p]][v[p+1]][v[p+2]][v[p+3]];
   //if(v.size()-5 == p && memo3[v[p]][v[p+1]][v[p+2]][v[p+3]][v[p+4]]) return memo3[v[p]][v[p+1]][v[p+2]][v[p+3]][v[p+4]];
  // if(v.size()-6 == p && memo4[v[p]][v[p+1]][v[p+2]][v[p+3]][v[p+4]][v[p+5]]) return memo4[v[p]][v[p+1]][v[p+2]][v[p+3]][v[p+4]][v[p+5]];

  ll sum = 0;
  bool break_ = false;
  for(; p<v.size()-1 && !break_; p++) {
    if(p+2 == v.size()) {v.pb(0); break_ = true; }
    ll tmp = v[p], tmp_ = v[p+1], tmp__ = v[p+2];

    ll T = min(v[p], v[p+1]);
    while(T--) {
      v[p]--; v[p+1]--; v[p+2]++;
      ll cal = f(v, p+1);
      sum = (sum%MOD + (1+cal)%MOD )%MOD;
      if(v.size()-2 == p+1) memo[v[p+1]][v[p+2]] = cal;
      if(v.size()-3 == p+1) memo1[v[p+1]][v[p+2]][v[p+3]] = cal;
      if(v.size()-4 == p+1) memo2[v[p+1]][v[p+2]][v[p+3]][v[p+4]] = cal;
      // if(v.size()-5 == p+1) memo3[v[p+1]][v[p+2]][v[p+3]][v[p+4]][v[p+5]] = cal;
      // if(v.size()-6 == p+1) memo4[v[p+1]][v[p+2]][v[p+3]][v[p+4]][v[p+5]][v[p+6]] = cal;
    }
    v[p] = tmp;
    v[p+1] = tmp_;
    v[p+2] = tmp__;
  }

  return sum;
}

ll g(vl v, ll p) {
  // display(v, p);

  if(v.size()-2 == p && memo[v[p]][v[p+1]]) return memo[v[p]][v[p+1]];
  // if(v.size()-3 == p && memo1[v[p]][v[p+1]][v[p+2]]) return memo1[v[p]][v[p+1]][v[p+2]];
  // if(v.size()-4 == p && memo2[v[p]][v[p+1]][v[p+2]][v[p+3]]) return memo2[v[p]][v[p+1]][v[p+2]][v[p+3]];
  ll sum =0;

  ll t = min(v[p], v[p+1])+1;
  REP(i, t) {
    ll cal = g(v, p+1);
    // debug_(v[p], v[p+1]);
    sum = (sum%MOD + (cal+1)%MOD)%MOD;

    // if(v.size()-3 == p+1) memo1[v[p+1]][v[p+2]][v[p+3]] = cal;
    // if(v.size()-4 == p+1) memo2[v[p+1]][v[p+2]][v[p+3]][v[p+4]] = cal;

    v[p+1]--; v[p+2]++;
  }
  return sum;
}

void build() {
  REP(i, 51) REP(j, 51) {
    vl v; v.pb(i); v.pb(j);
    memo[i][j] = f(v, 0);
    // cout<<i<<" "<<j<<": "<<memo[i][j]<<endl;
  }
}

int main(){
  clock_t tStart = clock();
  ioS;

  #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
  #endif

  // REP(i, 51) REP(j, 51) REP(k, 51) memo1[i][j][k] = 0;
  build();
  int t;
  cin>>t;
  while(t--) {
    int n;
    vl v;

    cin>>n;
    REP(i, n) {
      int x;
      cin>>x;
      v.pb(x);
    }

    // debug_(g(v, 0), f(v, 0)+1);
    cout<<g(v, 0)+1<<endl;
    cout<<f(v, 0)+1<<endl;
  }
  // printf("Time taken: %.2fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);

  return 0;
}
