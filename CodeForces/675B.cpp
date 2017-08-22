#include <iostream>
#define lli long long int
using namespace std;

int main(){
	// freopen("in.txt", "r", stdin);

	lli n, a, b, c, d;
	cin>>n;
	cin>>a;
	cin>>b;
	cin>>c;
	cin>>d;

	// if(a==b==c){
	// 	cout<<n;
	// 	return 0;
	// }
	lli pos = 0;
	for (lli i = 1; i <= n; ++i){
		lli y = i + (b-c);
		lli u = i + (a-d);
		lli v = i + (a+b-c-d);

		if((y>0 && y<=n) && (u>0 && u<=n) && (v>0 && v<=n)) pos++;
	}
	cout<<pos*n;
	// cout<<pos;
	
	return 0;
}
