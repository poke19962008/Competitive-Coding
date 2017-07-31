#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int N;
pair<int, int> A[100000];
int main(){
    #ifndef ONLINE_JUDGE
      freopen("test.txt", "r", stdin);
    #endif

    scanf("%d", &N);
    for(int i=0; i<N; i++)
        scanf("%d", &A[i].first), A[i].second=i;
    sort(A, A+N, greater<pair<int, int>>());

    for(int i=0; i<N; i++) cout<<A[i].first<<":"<<A[i].second<<" ";
    cout<<endl;
    
    int a=A[0].second, b=A[0].second;
    int ans=0;
    for(int i=1; i<N; i++) {
        int x=A[i].second;
        if(x<a || x>b)
            ans++;
        else
            ans+=2;
        a=min(a, x);
        b=max(b, x);
    }
    printf("%d\n", ans);
    return 0;
}
