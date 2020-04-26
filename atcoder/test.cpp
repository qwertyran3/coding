#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define pb push_back
#define vi vector<int>

ll const lmt = 2e3+1;
vi adj[lmt];
int vis[lmt];
int color[lmt];
int ok;

void dfs(int p, int type){
	if(!ok) return;

	vis[p]=1;
	color[p] = type;

	for(int c: adj[p]){
		if(!vis[c]) dfs(c, 1-type);
		else{
			if(color[c]==color[p]) ok=false; 
		}
	}

}
void ini(){
	for(ll i=0; i<lmt; i++){
		vis[i]=0;
		adj[i].clear();
		color[i]=0;
	}
}



int main(){
	ll t;
	cin>>t;
	ll k=1;
	while(t--){
		ini();
		int n,m;

		cin>>n>>m;

		ll a,b;
		for(int i=0; i<m; i++){
			cin>>a>>b;

			adj[a].pb(b);
			adj[b].pb(a);
		}

		ok=true;
		for(int i=1; i<=n; i++){
			if(!ok) break;
			if(!vis[i]) dfs(i,1); 
		}
		if(!ok) {cout<<"Scenario #"<<k++<<":"<<endl<<"Suspicious bugs found!"<<endl;
	    }
		else {cout<<"Scenario #"<<k++<<":"<<endl<<"No suspicious bugs found!"<<endl;
	    }

	} 

}

/*

2
3 3
1 2
2 3
1 3
4 2
1 2
3 4

*/