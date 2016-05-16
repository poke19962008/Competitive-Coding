/*Author: SAYAN DAS*/

#include <vector>
#include <iostream>
using namespace std;


int main() {
    int n;
    vector<int> v;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int x;
        cin>>x;
        v.push_back(x);
    }
   
    vector<int> x;
    for (int i = 1; i < n; ++i) {
        if (v[i] < v[i-1]) {
            if (x.size() < 2 || i-1-x.back() == 1) {
                x.push_back(i-1);
            }else {
                cout<<"no\n";
                return 0;
            }
        }
    }
    
    if (x.empty()) {
        cout<<"yes\n";
        return 0;
    }
    
    int l  = x[0], r = x.back() + 1;
    if ((l == 0 || v[r] >= v[l-1]) && (r == n - 1 || v[l] <= v[r+1])){
        cout<<"yes\n";
        if(x.size() <= 2) cout<<"swap " ;
        else cout<<"reverse ";
        cout<<l+1<<" "<<r+1<<endl;
     
    }else
        cout<<"no\n";
    return 0;
}




