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

int f(vi v, int start, int k) {
  if(k <= 0) return 0;
  if(start >= v.size()-1) return 0;

  int profMax = 0;
  FOR(i, start+1, v.size(), 1 ) {
    int prof = v[i] - v[start];
    if(prof < 0) prof = 0;
    profMax = max(profMax, prof + f(v, i+1, k-1));
  }

  return max(profMax, f(v, start+1, k));
}

int main(){
  ioS;

  // #ifndef ONLINE_JUDGE
  //   freopen("in.txt", "r", stdin);
  // #endif

  int q;
  vi v;
  cin>>q;

  while(q--) {
    int n, k;

    cin>>k;
    cin>>n;
    v.clear();
    REP(i, n) {
      int x; cin>>x;
      v.pb(x);
    }

    cout<<f(v, 0, k)<<endl;
  }

  return 0;
}
