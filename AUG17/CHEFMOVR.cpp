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
typedef long long ll;
typedef long int l;
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<ll> vl;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef vector<pii> vpii;
typedef vector<pll> vpll;

int fastinput(){int t=0;char c;c=getchar_unlocked();while(c<'0' || c>'9')c=getchar_unlocked();while(c>='0' && c<='9'){t=(t<<3)+(t<<1)+c-'0';c=getchar_unlocked();}return t;}

int main(){
  ioS;

  #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
  #endif

  int t;
  cin>>t;

  while(t--) {
    ll n, d, arr[MAXN];
    ll ans=0;
    ll ele = 0, sum=0;

    cin>>n>>d;
    REP(i, n) {cin>>arr[i]; ele += arr[i]; }
    if(ele%n != 0) {cout<<"-1\n";continue;}
    ele = (ll)ele/n;

    bool break_ = false;
    REP(i, n-d ) {
      ll diff = abs(ele-arr[i]);

      if(arr[i] == ele) continue;
      if(arr[i] < ele) arr[i+d] -= diff;
      else arr[i+d] += diff;
      ans += diff;
      arr[i] = ele;
    }

    REP(i, n && !break_) if(arr[i] != ele) break_ = true;
    if(break_) cout<<"-1"<<endl;
    else cout<<ans<<endl;


  }

  return 0;
}
