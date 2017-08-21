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

bool isPrime[501];
void build() {
  int n = 500;
  REP(i, 501) isPrime[i] = true;
  for(int i=2; i*i <= n; i++) {
    if(isPrime[i])
      for(int j=2*i; j<=n; j+=i)
        if(j%i == 0) { isPrime[j] = false; }
  }
}

ul choose(int n, int k) {
    if (k > n) {
        return 0;
    }
    ul r = 1;
    for (ul d = 1; d <= k; ++d) {
        r *= n--;
        r /= d;
    }
    return r;
}

int main(){
  ioS;

  #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
  #endif

  build();
  int n;
  cin>>n;

  if(n==1) {cout<<0<<endl; return 0; }
  if(n==2) {cout<<1<<endl; return 0; }
  if(n==3) {cout<<2<<endl; return 0; }

  int factors = 0;
  for(int i=2; i<=n ;i++) {
    if(isPrime[i]){
      bool consider = true;
      for(int j=i+1; j<=n && consider; j++)
        if(j%i == 0 ) consider =false;
      if(consider) factors++;
    }
  }
  ul sum =0;
  FOR(i, 1, factors+1, 1) sum += choose(factors, i);
  cout<<sum+1;

  return 0;
}
