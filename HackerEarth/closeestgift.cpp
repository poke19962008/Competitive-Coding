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

int prime(ll a){
    for(ll i=2;i<=sqrt(a);i++)
        if(a%i==0) return 0;
    return 1;
}
int main(){
    ll a;
    cin>>a;
    int c=0,d=0;
    ll i;

    if(a<2) { cout<<2-a; return 0; }

    for(i=a;1;i++)
    {
        if(prime(i)) break;
        c++;
    }
    for(i=a-1;i>0;i--){
        if(prime(i)) break;
        d++;
    }
    if(i<=0) d=INF;
    printf("%d",min(c,d));
    return 0;
}
