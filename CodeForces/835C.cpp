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

//int fastinput(){int t=0;char c;c=getchar_unlocked();while(c<'0' || c>'9')c=getchar_unlocked();while(c>='0' && c<='9'){t=(t<<3)+(t<<1)+c-'0';c=getchar_unlocked();}return t;}

int main(){
  ioS;

  #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
  #endif

  int n, q, c;
  cin>>n>>q>>c;

  ll dp[11][101][101];
  REP(i, 11) REP(j, 101) REP(k, 101) dp[i][j][k]=0;
  while(n--) {
    int x, y, s;
    cin>>x>>y>>s;
    ++dp[s][x][y];
  }

  REP(s, 11)
    FOR(x, 1, 101, 1)
      FOR(y, 1, 101, 1)
        dp[s][x][y] += (dp[s][x-1][y] + dp[s][x][y-1] - dp[s][x-1][y-1]);

  while(q--) {
    int x, y, x_, y_, t, sum=0;
    cin>>t>>x>>y>>x_>>y_;

    REP(s, 11) {
      int bright = (s+t)%(c+1);
      sum += bright*(dp[s][x_][y_] - dp[s][x-1][y_] - dp[s][x_][y-1] + dp[s][x-1][y-1]);
    }
    cout<<sum<<endl;
  }

  return 0;
}
