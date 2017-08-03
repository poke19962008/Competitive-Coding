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

int part(vs str, int l, int r, int t, int b) {
  char ch = str[t][l];
  FOR(i, t, b, 1) {
    FOR(j, l, r, 1) {
      if(str[i][j] != ch) return false;
    }
  }

  return ch;
}

bool comb1(vs str, int m, int n) {
  if(n%2 == 0 && n%2 ==0 ){
    int a, b, c;
    // #1
    a = part(str, 0, n/2, 0, m);
    b = part(str, n/2, n, 0, m/2);
    c = part(str, n/2, n, m/2, m);
    if(a+b+c == 'R'+'G'+'B') return true;

    // #2
    a = part(str, 0, n, 0, m/2);
    b = part(str, 0, n/2, m/2, m);
    c = part(str, n/2, n, m/2, m);
    if(a+b+c == 'R'+'G'+'B') return true;

    // #3
    a = part(str, 0, n/2, 0, m/2);
    b = part(str, 0, n/2, m/2, m);
    c = part(str, n/2, n, 0, m);
    if(a+b+c == 'R'+'G'+'B') return true;

    // #4
    a = part(str, 0, n/2, 0, m/2);
    b = part(str, n/2, n, 0, m/2);
    c = part(str, n/2, n, m/2, m);
    if(a+b+c == 'R'+'G'+'B') return true;

  }
  return false;
}


bool comb2(vs str, int m, int n) {
  int a, b, c;

  if(m%3 == 0){
    a = part(str, 0, n, 0, m/3);
    b = part(str, 0, n, m/3, 2*m/3);
    c = part(str, 0, n, 2*m/3, m);
    if(a+b+c == 'R'+'G'+'B') return true;

  } else if(n%3 == 0) {

    a = part(str, 0, n/3, 0, m);
    b = part(str, n/3, 2*n/3, 0, m);
    c = part(str, 2*n/3, n, 0, m);

    if(a+b+c == 'R'+'G'+'B') return true;

  }

  return false;
}

int main(){
  ioS;

  #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
  #endif

  int n, m;
  cin>>n>>m;
  vs str;

  REP(i, n) {
    string x;
    cin>>x;
    str.pb(x);
  }


  if(comb1(str, n, m)) {cout<<"YES"; return 0; }
  if(comb2(str, n, m)) {cout<<"YES"; return 0; }
  cout<<"NO";

  return 0;
}
