#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#define LIM 100005
#define LL long long int
using namespace std;


int main() {
    int n;
    LL arr[LIM], left[LIM], right[LIM];
    
    cin>>n;
    for(int i=0; i<n; i++) cin>>arr[i];
    
    /*left[0] = arr[0];
    for(int i=1; i<n; i++) left[i] = max(left[i-1], arr[i]);
    right[n-1] = arr[n-1];
    for(int i=n-2; i>=0; i--) right[i] = max(right[i+1], arr[i]);
    
    /*for(int i=0; i<n; i++) cout<<left[i]<<" ";
    cout<<endl;
    for(int i=0; i<n; i++) cout<<right[i]<<" ";*/
    
    LL ans=0;
    int start=0, end = n-1;
    int startMax=arr[start], endMax=arr[end];
    while(start < end) {
        //cout<<start<<" "<<end<<endl;
        int minHeight = min(arr[start], arr[end]);
        ans = max(ans, (end-start)*min(arr[start], arr[end]));
        
        while(arr[start] <= minHeight) start++;
        while(arr[end] <= minHeight) end--;
    }
    
    cout<<ans<<endl;
    return 0;
}