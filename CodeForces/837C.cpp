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

// int fastinput(){int t=0;char c;c=getchar_unlocked();while(c<'0' || c>'9')c=getchar_unlocked();while(c>='0' && c<='9'){t=(t<<3)+(t<<1)+c-'0';c=getchar_unlocked();}return t;}

struct cord {
  int x, y;
};
int n, a, b;

int max(int a, int b) { return ((a<b)?b:a); }

int fit(int x1, int y1, int x2, int y2) {
  // cout<<x1<<" "<<y1<<" "<<x2<<" "<<y2<<endl;
  if( (x1+x2<=a && max(y1, y2)<=b) || (max(x1, x2)<=a && y1+y2<=b) )
    return x1*y1 + x2*y2;
  return 0;
}

int f(cord x, cord y) {
  int comb1 = fit(x.x, x.y, y.x, y.y);
  int comb2 = fit(x.y, x.x, y.x, y.y);
  int comb3 = fit(x.x, x.y, y.y, y.x);
  int comb4 = fit(x.y, x.x, y.y, y.x);

  // cout<<comb1<<" "<<comb2<<" "<<comb3<<" "<<comb4<<endl;
  return max( comb1, max(comb2, max(comb3, comb4)));
}


int main(){
  ioS;

  #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
  #endif

  cord arr[300];
  cin>>n>>a>>b;

  REP(i, n) { cin>>arr[i].x; cin>>arr[i].y; }

  int ans = 0;
  REP(i, n) {
    FOR(j, i+1, n, 1){
      ans = max(ans, f(arr[i], arr[j]));
      // debug(f(arr[i], arr[j]));
    }
  }

  cout<<ans;

  return 0;
}
