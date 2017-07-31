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
#define MAXN 1000006

#define ioS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(x) cout<<#x<<"="<<x<<"\n";
#define debug_(x,y) cout<<#x<<"="<<x<<" and "<<#y<<"="<<y<<"\n";

#define pb push_back
#define mp make_pair
#define ins insert

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

  int n;
  string str;
  set<char> uniq;

  cin>>n;
  cin>>str;

  REP(i, n) uniq.ins(str[i]);

  int total = uniq.size();
  int left=0, right=0, ans = INF;
  int now=1, freq[10000] = {0};
  freq[str[0]]++;
  while(right < n) {
    if(now == total && left<=right) {
      ans = min(ans, right - left +1);
      // debug(ans);
      freq[str[left]]--;
      if(!freq[str[left++]]) now--;
    }else {
      right++;
      if(right < n) {
        now += (!freq[str[right]])?1: 0 ;  
        freq[str[right]]++;
      }
    }
  }

  cout<<ans;

  return 0;
}
