#include <algorithm>
#include <iostream>
#include <stdio.h>
#include <stdio.h>
#include <math.h>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <list>
#include <map>
#include <set>
#include <unistd.h>
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

void display(vl v) {
  REP(i, v.size()) cout<<v[i]<<' ';
  cout<<endl;
}

ll f(vl v, ll p) {
  // display(v);
  // usleep(10000);
  ll sum = 0;
  bool break_ = false;
  for(; p<v.size()-1 && !break_; p++) {
    if(p+2 == v.size()) {v.pb(0); break_ = true; }
    ll tmp = v[p], tmp_ = v[p+1], tmp__ = v[p+2];

    ll T = min(v[p], v[p+1]);
    while(T--) {
      v[p]--; v[p+1]--; v[p+2]++;
      sum = (sum%MOD + (1+f(v, p+1))%MOD )%MOD;
    }
    v[p] = tmp;
    v[p+1] = tmp_;
    v[p+2] = tmp__;
  }

  return sum;
}

int main(){
  ioS;

  #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
  #endif

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

    cout<<f(v, 0)+1<<endl;
  }

  return 0;
}
