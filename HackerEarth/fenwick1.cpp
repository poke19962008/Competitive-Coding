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

int max(int a, int b) { return ((a>b)?a:b); }
int min(int a, int b) { return ((a<b)?a:b); }

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

struct node {
  int freq[26];

  node& operator+(const node& a) {
    REP(i, 26) freq[i] += a.freq[i];
    return *this;
  }

  node& operator-(const node& a) {
    REP(i, 26) freq[i] = abs(a.freq[i]-freq[i]);
    return *this;
  }
};

node BIT[100000];

void update(int ind, char ch, int n) {
  while(ind<=n) {
    BIT[ind].freq[ch-'a'] ++;
    ind += (ind&-ind);
  }
}


void update_(int ind, char ch, char prev, int n) {
  while(ind<=n) {
    BIT[ind].freq[ch-'a'] ++;
    BIT[ind].freq[prev-'a'] --;
    ind += (ind&-ind);
  }
}


node query(int ind, int n) {
  node ans;
  REP(i, 26) ans.freq[i] = 0;
  while(ind>0) {
    ans = ans + BIT[ind];
    ind -= (ind&-ind);
  }
  return ans;
}

int main(){
  ioS;

  #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
  #endif

  int n, q;
  string str;
  cin >> n >> q;
  cin >> str;

  FOR(i, 1, n+1, 1) update(i, str[i-1], n);

  while(q--) {
    int opt;
    cin>>opt;

    if(opt == 1) {
      int ind; char ch;
      cin>>ind>>ch;

      update_(ind, ch, str[ind-1], n);
    }else {
      int l, r;
      cin>>l>>r;

      node ans = query(r, n) - query(l-1, n);

      int odds=0, evens=0;
      REP(i, 26)
        if(ans.freq[i]&1) odds++;
        else evens++;
      if(odds > 1) cout<<"no\n";
      else cout<<"yes\n";
    }
  }

  return 0;
}
