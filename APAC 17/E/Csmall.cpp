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

#define EPS 1e-7
#define INF 1e15+9
#define MOD 1000000007
#define MAXN 1000006

#define ioS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(x) cout<<#x<<"="<<x<<"\n";
#define debug_(x,y) cout<<#x<<"="<<x<<" and "<<#y<<"="<<y<<"\n";

int max(float a, float b) { return ((a-b>EPS)?a:b); }
int min(float a, float b) { return ((a-b<EPS)?a:b); }

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

struct coord {
  int x, y, z;
};

float dist(coord a, coord b) {
  return sqrt((a.x-b.x)*(a.x-b.x)
              +(a.y-b.y)*(a.y-b.y)
              +(a.z-b.z)*(a.z-b.z));
}

int main(){
  ioS;

  #ifndef ONLINE_JUDGE
    freopen("C-small-practice.in", "r", stdin);
    freopen("out.txt", "w", stdout);
  #endif

  int T;
  cin>>T;

  REP(t, T) {
    coord a, b, c;

    cin>>a.x>>a.y>>a.z;
    cin>>b.x>>b.y>>b.z;
    cin>>c.x>>c.y>>c.z;

    float len=0.0;
    len = max(dist(a, b), dist(b, c));
    len = max(len, dist(a, c));

    cout<<"Case #"<<t+1<<": ";
    printf("%.6f\n", len/6);

  }

  return 0;
}
