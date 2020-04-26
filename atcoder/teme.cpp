#include<bits/stdc++.h>

using namespace std;
#define ll long long 
 


int main(){
	ll n,k,c=0,b=0;
	cin>>n>>k;
	string s;
	int a[10];
	ll j=n;
	
	while(n--){

		cin>>s;
		for(int i=0; i<10; i++){
			a[i]=1;
	    }
		for(ll i=0; i<s.length(); i++){
			if(s[i]-'0'<=k){
				a[s[i]-'0']++;
			}
		}
		
		for(int i=0; i<=k; i++){
			if(a[i]==1){
				c++; break;
			}
		}
		
	}	
	cout<<j-c<<endl;
}
