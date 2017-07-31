#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

vector<int> divisors(int n) {
    vector <int> v;
    for(int i=1; i<=sqrt(n); i++) {
        if(!(n%i))
            if(n/i == i) { v.push_back(i); }
            else { v.push_back(i); v.push_back(n/i); }
    }
    return v;
}

int main() {
    #ifndef ONLINE_JUDGE
      freopen("test.txt", "r", stdin);
    #endif

    string str;
    std::vector<int> div;
    cin>>str;
    div = divisors(str.size());
    // cout<<str.size()<<endl;
    sort(div.begin(), div.end());

    for (size_t i = 0; i < div.size(); i++) {
      // cout<<"div[i]:"<<div[i]<<endl;
      string sub = "-1";
      bool break_ = false;
      for (size_t j = 0; j <= str.size()-div[i]; j +=div[i]) {
          if(sub.compare("-1") == 0) sub = str.substr(j, div[i]);
          else {
            if(sub.compare(str.substr(j, div[i])) != 0){ break_=true; break; }
          }
          //cout<<str.substr(j, div[i])<<endl;
      }
      if(!break_) { cout<<sub; break; }
      // cout<<"--------------------------";
    }

    return 0;
}
