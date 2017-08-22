#include <iostream>
#define lli long int
using namespace std;

int main(){
	// freopen("in.txt", "r", stdin);

	lli a, b, c;
	cin>>a;
	cin>>b;
	cin>>c;

	if(c==0){
		if(a==b) cout<<"YES";
		else cout<<"NO";
	}else if(b>=a){
		if(c>0){
			if((b-a)%c == 0) cout<<"YES";
			else cout<<"NO";
		}else cout<<"NO";
	}else if(b<a){
		if(c<0){
			if((a-b)%c == 0) cout<<"YES";
			else cout<<"NO";
		}else cout<<"NO";
	}
	return 0;
}
