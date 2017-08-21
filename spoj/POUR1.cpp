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

//int fastinput(){int t=0;char c;c=getchar_unlocked();while(c<'0' || c>'9')c=getchar_unlocked();while(c>='0' && c<='9'){t=(t<<3)+(t<<1)+c-'0';c=getchar_unlocked();}return t;}

int solve(int a, int b, int c) {
  int a_=a, b_=0;
  int move=1;

  while(a_!=c || b_!=c) {
    int cont = min(a_, b-b_);
    a_-=cont;
    b_+=cont;

    move++;

    if(a_==c || b_==c) return move;

    if(a_ == 0) {
      a_ = a;
      move++;
    }

    if(b_ == b) {
      b_ = 0;
      move++;
    }
  }
}

int gcd(int a, int b) {
  if(a==0 || b==0) return 0;
  if(a==b) return a;
  if(a>b) return gcd(a-b, b);
  return gcd(a, b-a);
}

int main(){
  ioS;

  #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
  #endif

  int t;
  cin>>t;

  while(t--) {
    int a, b, c;
    cin>>a>>b>>c;
    if(c>a && c>b) cout<<"-1\n";
    else if(c%gcd(a, b) != 0) cout<<"-1\n";
    else cout<<min(solve(a, b, c), solve(b, a, c))<<endl;
  }

  return 0;
}
