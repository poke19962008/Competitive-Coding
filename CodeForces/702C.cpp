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
#define INF (int)1e9
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


int main(){
  ioS;
  int n, m, a[MAXN], b[MAXN];
  long ans = -INF;
  cin>>n>>m;
  REP(i, n) cin>>a[i];
  REP(i, m) cin>>b[i];

  sort(a, a+n);
  sort(b, b+m);

  REP(i, n) {
    int left = lower_bound(b, b+m, a[i])-b;
    int right = upper_bound(b, b+m, a[i])-b;


    if(right>=m) left = m-1;
    else left = (left==0)? 0:right-1;
    right = (right>=m)?m-1:right;

    long temp = min( abs(a[i]-b[left]), abs(a[i]-b[right]) );
    ans = max(ans, temp );
    // debug_(left, right);
  }
  cout<<ans;

  return 0;
}
