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

char maxc(int a, int b) { return ((a>b)?a:b); }
char minc(int a, int b) { return ((a<b)?a:b); }

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

int ans = INF;
void f(string str, int start, int moves) {
  // debug_(str, moves);
  if(str[0]+str[1]+str[2] == str[3]+str[4]+str[5]) {ans = min(ans, moves); return;}
  // if(moves >= ans) return;
  if(start >= 3) return;

  f(str, start+1, moves);
  int i=str[start]-'0'+1,i_=i-2, j=str[start+3], j_=j-2;
  for(;i<=9 || j<=9 || i_>=0 || j_>=0;i++, i_--, j++, j_--) {
    string tmp = str; tmp[start] = i+'0';
    if( i <= 9)f(tmp, start+1, moves+1);
    tmp = start; tmp[start] = i_+'0';
    if(i_ >= 0)f(tmp, start+1, moves+1);
    tmp = str; tmp[start+3] = j+'0';
    if(j <= 9)f(tmp, start+1, moves+1);
    tmp = start; tmp[start+3] = j_+'0';
    if(j_ >= 0)f(tmp, start+1, moves+1);

    tmp = str; tmp[start] = i+'0'; tmp[start+3] = j+'0';
    if(i<=9 && j<=9)f(tmp, start+1, moves+2);
    tmp = str; tmp[start] = i_+'0'; tmp[start+3] = j_+'0';
    if(i_>=0 && j_>=0)f(tmp, start+1, moves+2);
    tmp = str; tmp[start] = i+'0'; tmp[start+3] = j_+'0';
    if(i<=9 && j_>=0)f(tmp, start+1, moves+2);
    tmp = str; tmp[start] = i_+'0'; tmp[start+3] = j+'0';
    if(i_>=0 && j<=9)f(tmp, start+1, moves+2);
  }

}

int getSum(string str) {
  int sum=0;
  REP(i, 3) sum += str[i]-'0';
  return sum;
}
int main(){
  ioS;

  #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
  #endif

  // int t;
  // cin>>t;
  // while(t--) {
    string str_;
    cin>>str_;

    f(str_, 0, 0);
    cout<<ans<<endl;
  //   ans=INF;
  //   // break;
  // }

  return 0;
}
