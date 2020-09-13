// Q-max product of two integers in an array
#include<bits/stdc++.h>

#define ll long long

using namespace std;

int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0; i<n; i++){
		cin>>a[i];
	}	
	int best=0;

	// by using BRUTE FORCE(o(n^2)){
	loop(i,n){
		int sum=0;
		loop(j=i+1,n){
			sum=max(sum,a[i]*a[j]);
		}
		best=best(best,sum);
	}
	cout<<best;
}

// by another method(o(n))
	loop(i,n){
		max2=max1;
		max1=max(max1,a[i]);
		min2=min1;
		min1=min(min1,a[i]);
	}
	ans=max(min1*max1,max1*max2);
	cout<<ans;