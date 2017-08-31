#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


bool compare(string a,  string b) {
    if(a.size() != b.size()) return a.size() < b.size();
    else {
        for(int i=0; i<a.size(); i++) 
            if(a[i] != b[i])
                return a[i]<b[i];
        return 0;
    }
}

int main() {
    int N;
    string arr[200005];
    cin>>N;
    
    for(int i=0; i<N; i++) cin>>arr[i];
    
    sort(arr, arr+N, compare);
    
    for(int i=0; i<N; i++)cout<<arr[i]<<endl;
    
    return 0;
}