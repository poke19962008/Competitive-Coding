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


int arr[MAXN];
ll size[MAXN];

void init(int n) {
  REP(i, n) {
    arr[i] = i;
    size[i] = 1;
  }
}

int root(int x) {
  int i = arr[x];

  while(i != arr[i]) {
    i = arr[ arr[ arr[i] ] ];
  }
  return i;
}

void union_(int x, int y) {
  x = root(x);
  y = root(y);

  if(x == y) return;

  if(size[x] < size[y]) {
    arr[x] = y;
    size[y] += size[x];
    // size[x] = size[y];
  }else {
    arr[y] = x;
    size[x] += size[y];
    // size[y] = size[x];
  }
}

int main(){
  ioS;

  #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
  #endif

  int t;
  t = fastinput();
  while(t--) {
    int n, m;
    ll sum = 0;
    n = fastinput();
    m = fastinput();

    init(n);

    while(m--) {
      int x, y;
      x = fastinput();
      y = fastinput();

      union_(--x, --y);
    }


    ll hash[MAXN] = {0};
    REP(i, n) hash[i] = 0;

    REP(i, n) hash[root(arr[i])]++;

    cout<<sum<<endl;

  }

  return 0;
}
