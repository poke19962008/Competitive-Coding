#include <iostream>
#include <string>
#include <stdio.h>
#define lli long long int
using namespace std;
 
int main(){
	#ifndef ONLINE_JUDGE
		freopen("in.txt", "r", stdin);
	#endif
 
	lli T;
	cin>>T;
 
	while(T--){
		bool ans = true;
		string str;
		cin>>str;
 
		lli len = str.length();
 
		if(len%2 == 0 && len != 1){
			// abc abc
			for(lli i=0, j=len/2; (i<len/2) && (j<len); ++i, ++j){
				if(str[i] != str[j]){
					ans = false;
					break;
				}
			}
		}else if(len%2 == 1 && len != 1){
			lli le, rb;
 
			if(str[len/2] == str[0]){
				// abc abXc
				lli i, j;
				le = len/2-1;
				rb = len/2;
				bool again = false;
				// cout<<le<<"."<<rb<<endl;
				for(i =0, j=rb; i<=le; ++i, ++j){
					// cout<<str[i]<<" "<<str[j]<<endl;
					if((!again) && (str[i] != str[j])){
						again = true;

						if((str[i] == str[j+1]) && (j != len-1)) ++j;
						else{
							ans = false;
							break;
						}
					}else if((again) && (str[i] != str[j])){
						ans = false;
						break;
					}
				}
 
			}else if(str[len/2] == str[len-1]){
				// abXc abc
				lli i, j;
 
				le = len/2;
				rb = len/2+1;
				bool again = false;
 
				for(i=le, j=len-1; j>=rb; --i, --j){
					cout<<str[i]<<" "<<str[j]<<endl;
					if((!again) && (str[i] != str[j])){
						again = true;
						if((str[i-1] == str[j]) && (i != 0)) --i;
						else {
							ans = false;
							break;
						}
					}else if((again) && (str[i] != str[j])){
						ans = false;
						break;
					}
				}
 
			}else{
				// abcXabc 
				le = len/2-1;
				rb = len/2+1;
 
				for(lli i=0, j=rb; j<len; ++i, ++j){
					cout<<str[i]<<" "<<str[j]<<endl;
					if(str[i] != str[j]){
						ans = false;
						break;
					}
				}
			}
		}else if(len == 1) ans = false;
 
		if(ans)
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
	return 0;
} 