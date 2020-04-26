#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define pb push_back
#define vi vector<ll>

ll const lmt = 2e5+6;
vi adj[lmt];
ll vis[lmt];
int ok;

void dfs(ll p,ll type){
	vis[p]=1;
	color[p]=type;
	for(int c:adj[p]){
		if(!vis[c] dfs(c,1-type))
		else{
			if(color[c]==color[p]) 
				ok=false;
		}
	}
	if(ok) cout<<"Scenario  #"<<
ll n,m;
	cin>>n>>m;

	ll a,b;
	for(ll i=0; i<m; i++){
		cin>>a>>b;
		adj[a].pb[b];
		adj[b].pb[a];

	}
	ok=true;
	for(ll i=0; i<n; i++){
		if(!vis[i]) dfs(i,1)
	}





}

}

int main(){
	ll t;
	cin>>t;
	ll k=1;
	while(t--){
	ll n,m;
	cin>>n>>m;

	ll a,b;
	for(ll i=0; i<m; i++){
		cin>>a>>b;
		adj[a].pb[b];
		adj[b].pb[a];

	}
	ok=true;
	for(ll i=0; i<n; i++){
		if(!vis[i]) dfs(i,1)
	}





}
