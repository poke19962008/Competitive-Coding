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
  
  int n, left=0, right=0;
  cin>>n;
  vpii arr;
  REP(i, n) {
    int a, b;
    cin>>a>>b;
    arr.pb(mp(a, b));
    left += a;
    right += b;
  }

  int ind = 0, ans = abs(left-right);
  REP(i, n) {
    int flip = abs( left -arr[i].first + arr[i].second - ( right - arr[i].second + arr[i].first ) );
    if(ans < flip) {
      ind = i+1;
      ans = flip;
    }
  }

  cout<<ind;


  return 0;
}
