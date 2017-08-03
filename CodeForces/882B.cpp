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
typedef vector<ll> vl;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef vector<pii> vpii;
typedef vector<pll> vpll;

vi check(string s, string t, int ind) {
  vi ans;
  REP(i, s.size()){
    if(s[i] != t[i]) { ans.pb(i); }
  }
  return ans;
}

int main(){
  ioS;

  #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
  #endif

  int n, m;
  string s, t;
  cin>>n>>m;
  cin>>s>>t;

  vi ans; bool ok = false;
  REP(i, m-n+1) {
    string sub = t.substr(i, n);
    vi ans_ = check(s, sub, i);

    if(ans.empty() && !ok) {ans = ans_; ok = true;}
    else ans = (ans.size() <= ans_.size())? ans: ans_;
  }

  cout<<ans.size()<<endl;
  REP(i, ans.size()) cout<<ans[i]+1<<" ";


  return 0;
}
