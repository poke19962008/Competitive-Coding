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

bool check(string str[], int p, int q) {
  str[p][q] = 'X';
  // debug(str[p]);

  REP(i, 10) {
    if(str[p][i] == 'X') {
      int count=0;
      while(str[p][i++] == 'X') count++;
      if(count >= 5)  {str[p][q] = '.'; return true;}
      --i;
    }
  }

  REP(i, 6) {
    REP(j, 6) {
      if(str[i][j]=='X' &&
         str[i+1][j+1]=='X' &&
         str[i+2][j+2]=='X' &&
         str[i+3][j+3]=='X' &&
         str[i+4][j+4]=='X') {str[p][q] = '.';return true;}
    }
  }

  str[p][q] = '.';
  return false;
}

int main(){
  ioS;

  #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
  #endif

  string str[10];
  string str_[10];

  REP(i, 10) cin>>str[i];

  int k=0;
  REP(i, 10){
    RREP(j, 9) str_[k].pb(str[j][i]);
    k++;
  }


  REP(i, 10)
    REP(j, 10)
      if(str[i][j] == '.' && check(str, i, j)) {cout<<"YES"; return 0; }


  REP(i, 10)
    REP(j, 10)
      if(str_[i][j] == '.' && check(str_, i, j)) {cout<<"YES"; return 0; }

  cout<<"NO";

  return 0;
}
