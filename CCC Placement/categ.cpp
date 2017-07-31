#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <cstring>
#include <map>
#include <algorithm>
using namespace std;

struct node {
  string name;
  int lim;
};


int main() {
    #ifndef ONLINE_JUDGE
      freopen("test.txt", "r", stdin);
    #endif

    int T;
    cin>>T;

    while(T--) {
      int n;
      cin>>n;

      map<string, int> mp;
      map<string, int> :: iterator it;
      node cat[1000006];

      for(int i=0; i<n; i++) {
        int n_, lim;
        cin>>cat[i].name;
        cin>>n_>>cat[i].lim;

        while(n_--){
          string str;
          cin>>str;
          mp[str] = i;
        }
      }

      string word;
      vector<string> ans;
      int arr[1000006] = {0};
      while(cin>>word) {
        word = tolower(word.c_str());
        if(word[word.size()-1] == '.') word.pop_back();

        it = mp.find(word);

        if(it == mp.end()) continue;

        arr[it->second]++;
        if(arr[it->second] == cat[it->second].lim)
          ans.push_back(cat[it->second].name);

      }

      for(int i=0; i<ans.size(); i++) {
        cout<<ans[i];
        if(i!=ans.size()-1) cout<<",";
      }
    }
    return 0;
}
