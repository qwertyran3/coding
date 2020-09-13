// Q-maximum length of subarray having the given sum k;

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
	// BRUTE FORCE(TIME COMPLEXITY O(N^2))
	for(int i=0; i<n; i++){
		int sum=0;
		for(int j=i+1; j<n; j++){
			sum=sum+a[j];
			if(sum==k) best=max(best,j-i);
		}
	}
	cout<<best;

	// by using TWO POINTERS(TIME COMPLEXITY O(N))
	int c=0,j=0;
	for(int i=0; i<n; i++){
		c=c+a[i];
		if(c>k){
			while(c>k){
				c=c-a[j++];
			}
		}
		if(c==k)

		best=max(best,i-j);
		
	}
	cout<<best;

	// by using BINARY SEARCH(TIME COMPLEXITY O(N*LOG(N)))
	void pre(int n){
		// p[0]=a[0];
		for(int i=1; i<=n; i++){
			p[i]=p[i-1]+a[i];
		}
	}
	int bs(int i){
		int lo=i,hi=n-1,mid;
		while(lo<=hi){
			mid=lo-(hi-lo)/2;
			if((p[mid]-p[i-1])<=k) lo=mid+1;
			else hi=mid-1;
		}
	if(p[hi]-p[i-1]==k) return hi-i;
	else return 0;
	}
	// main()
	pre(n);
	for(int i=1; i<=n; i++){
		ans=max(ans,bs(i));
	}
	cout<<ans;

	// by using HASHMAP(TIME COMPLEXITY O(N), SPACE COMPLEXITY O(N));-NEGATIVE NUM
	map<int,int>m;
	loop(i,n){
		if(!exist(m,p[i])) m[p[i]]=i;
	}
	loop(i,n){
		if(m[p[i]-k]) c=i-m[p[i]-k];
		best=max(best,c);
	}
	cout<<best;

}


