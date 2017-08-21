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

int main(){
  ioS;

  //  #ifndef ONLINE_JUDGE
  //    freopen("in.txt", "r", stdin);
  //  #endif

   int n, m;
   cin>>n>>m;

   int steps[10004];
   REP(i, 10004) steps[i] = -1;

   queue<int> q;
   q.push(n);
   steps[n] = 0;

   while(!q.empty()) {
     int pos = q.front();
     q.pop();
    //  debug(pos);

    if(pos == m) break;
    if(2*pos <= 10000 && steps[2*pos] == -1) {
      q.push(2*pos);
      steps[2*pos] = steps[pos]+1;
    }

    if(pos-1 >= 0 && steps[pos-1] == -1) {
      q.push(pos-1);
      steps[pos-1] = steps[pos]+1;
    }
   }
   cout<<steps[m];


  return 0;
}
