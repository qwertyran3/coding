// Q-largest subarray sum formed by consecutive integers?

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
	// TIME COMPLEXITY(O(N^3))
	int best=0;
	for(int a=0; a<n; a++){
		for(int b=a; b<n; b++){
			int sum=0;
			for(int k=a; k<b; k++){
				sum=sum+a[k];
			}
			best=max(best,sum);
		}
	}
	cout<<best;

	// TIME COMPLEXITY(o(n^2))
	int best=0;
	for(int a=0; a<n; a++){
		int sum=0;
		for(int b=a; b<n; b++){
			sum=sum+a[b];
			best=max(best,sum)
		}
		
	}
	cout<<best;

	// TIME COMPLEXITY(O(N))
	int best=0;
	for(int i=0; i<n; i++){
		sum=max(a[i],sum+a[i]);
		best=max(best,sum);
	}
	cout<<best;
}