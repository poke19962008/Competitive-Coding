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

struct node {
  int maxOff;
  int maxJob;
  int ind;
  bool hired;
};

bool cmp(node a, node b) {
  if(a.maxOff == b.maxOff) return a.maxJob < b.maxJob;
  else return a.maxOff < b.maxOff;
}

int main(){
  ioS;

  #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
  #endif


  int t;
  cin>>t;

  while(t--) {
    int n, m;
    vi minSal;
    vector <node> comp;
    string qualf[1003];

    cin>>n>>m;
    REP(i, n) {
      int x;
      cin>>x;
      minSal.pb(x);
    }
    REP(i, m) {
        node x_;
        cin>>x_.maxOff;
        cin>>x_.maxJob;
        x_.ind = i;
        x_.hired = false;
        comp.pb(x_);
    }
    REP(i, n) cin>>qualf[i];

    sort(comp.begin(), comp.end(), cmp);

    ll tot=0, sum=0, _hired=m;
    REP(i, n) {
      for(int j=m-1; j>=0; j--) {
        if(comp[j].maxJob == 0 && j==m-1) {m--; continue; }
        if(comp[j].maxOff >= minSal[i] && qualf[i][comp[j].ind] == '1' && comp[j].maxJob > 0) {
          // debug_(i, comp[j].maxOff);
          sum += comp[j].maxOff; tot++; comp[j].maxJob--;
          if(!comp[j].hired){ _hired--;  comp[j].hired=true;}
          break;
        }
      }
    }

    cout<<tot<<" "<<sum<<" "<<_hired<<endl;
  }

  return 0;
}
