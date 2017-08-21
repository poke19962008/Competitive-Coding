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
#define MAXN 100005

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
typedef map<int, int> mii;
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<ll> vl;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef vector<pii> vpii;
typedef vector<pll> vpll;

// int fastinput(){int t=0;char c;c=getchar_unlocked();while(c<'0' || c>'9')c=getchar_unlocked();while(c>='0' && c<='9'){t=(t<<3)+(t<<1)+c-'0';c=getchar_unlocked();}return t;}
int n, q;
pll tree[10000006];
pll arr[MAXN];

void build(int node, int start, int end) {
  if(start == end) {
    tree[node].first = arr[start].second;
    tree[node].second = arr[start].second;
    return;
  }

  int mid = (start + end)/2;
  build(2*node, start, mid);
  build(2*node+1, mid+1, end);

  tree[node].first = max(tree[2*node].first, tree[2*node+1].first);
  tree[node].second = min(tree[2*node].second, tree[2*node+1].second);
}

int query(int node, int start, int end, int v) {
  if(start == end) {
    return tree[node].first;
  }

  int left = 2*node;
  int right = 2*node+1;
  int mid = (start+end)/2;

  if(tree[left].first == tree[left].second) return tree[left].first;

  if(tree[left].second <= v && v <= tree[left].first ){
    return query(left, start, mid, v);
  }else {
    return query(right, mid+1, end, v);
  }
}

int main(){
  ioS;

  #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
  #endif

  cin>>n>>q;
  int t[MAXN], p[MAXN], cumT[MAXN], maxP = -INF, maxT = -INF;
  mii mapper;
  REP(i, n) cin>>t[i];
  REP(i, n) cin>>p[i];
  REP(i, n) {
    arr[i] = mp(t[i], p[i]);
    maxP = max(maxP, p[i]);
    maxT = max(maxT, t[i]);

    mii :: iterator it = mapper.find(p[i]);
    if(it != mapper.end()) continue;
    else mapper[p[i]] = t[i];
  }

  cumT[n-1] = p[n-1];
  RREP(i, n-2) cumT[i] = max(p[i], cumT[i+1]);


  build(1, 0, n-1);

  // REP(i, 10) debug_(tree[i].first, tree[i].second);

  while(q--) {
    int opt, v;
    cin>>opt>>v;

    if(opt == 1) {
      if(v > maxP) {cout<<"-1\n"; continue; }
      int find = query(1, 0, n-1, v);
      cout<<mapper[find]<<endl;

    }else {
      if(v > maxT) {cout<<"-1\n"; continue; }
      int find = lower_bound(t, t+n, v)-t;
      cout<<cumT[find]<<endl;
    }
  }

  return 0;
}
