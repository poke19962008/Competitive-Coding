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

#define EPS 0.00000001
#define INF 1<<17
#define ioS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(x) cout<<#x<<"="<<x<<"\n";
#define debug_(x,y) cout<<#x<<"="<<x<<" and "<<#y<<"="<<y<<"\n";

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef vector<pii> vpii;
typedef vector<pll> vpll;
using namespace std;

int main(){
  int t;
  cin>>t;

  while(t--) {
    int angle;
    cin>>angle;
    int n = 1;
    bool found= false;
    while(true) {
      if(n*angle == (n-2)*180) { found = true; break; }
      if(n*angle < (n-2)*180) {  break; }
      n++;
    }

    if(!found) cout<<"NO\n";
    else cout<<"YES\n";
  }

  return 0;
}
