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

int fastinput(){int t=0;char c;c=getchar_unlocked();while(c<'0' || c>'9')c=getchar_unlocked();while(c>='0' && c<='9'){t=(t<<3)+(t<<1)+c-'0';c=getchar_unlocked();}return t;}

int main(){
  ioS;

  #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
  #endif
  int t;
  cin>>t;

  while(t--) {
    int hashA[26], hashB[26], len;
    string a, b;

    cin>>a;
    cin>>b;
    len = a.size();

    REP(i, 26){ hashA[i] = 0; hashB[i] = 0; }

    REP(i, len) hashA[ a[i]-'a' ]++;
    REP(i, len) hashB[ b[i]-'a' ]++;

    int count1=0, count2=0;
    REP(i, 26)
      if(!hashA[i] && hashB[i]) count1+=hashB[i];
      else if(hashA[i] && !hashB[i]) count2+=hashA[i];

    bool breakA=false;
    if(count2 == 1 && count1 == 0) cout<<"A\n";
    else if((count1 == 0 && count2 == 0) || (count1 == 1 && count2 == 0)) cout<<"B\n";
    else if(count1 == len && count2 == len) {
      REP(i, 26 && !breakA) if(hashA[i]>1) breakA=true;
      cout<<((breakA)?"A":"B")<<endl;
    }else {
      REP(i, 26 && !breakA) {
        if(hashA[i] && hashB[i]) continue;
        if(hashA[i] > 1) {breakA=true;}
      }
      cout<<((breakA)?"A":"B")<<endl;
    }
  }
  return 0;
}
