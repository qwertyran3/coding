#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define ini(arr, val) memset(arr, (val), sizeof(arr))
#define loop(i,n)  for(ll i=0; i<n; i++)
#define loop1(i,n)  for(ll i=1; i<=n; i++)

#define all(a)      (a).begin(),(a).end()
#define dupli(a)     unique(all(a)),(a).end()
#define exist(s,e)  (s.find(e)!=s.end())
#define dbg(x)  cout << #x << " is " << x << endl;
#define pt(x) cout<<x<<"\n"
#define pts(x) cout<<x<<" "

#define mp make_pair
#define pb push_back
#define f first
#define s second


#define inf (int)1e9
#define eps 1e-9
#define PI 3.1415926535897932384626433832795
#define mod 1000000007


#define fast    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define test   int t; cin>>t; while(t--)

typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<pii> vpii;
typedef vector<vi> vvi;
typedef map<int,int> mii;
typedef set<int> si;

typedef pair<ll, ll> pll;
typedef vector<ll> vl;
typedef vector<string> vs;
typedef vector<pll> vpll;
typedef vector<vl> vvl;
typedef map<ll,ll> mll;
typedef set<ll> sl;


//////////////////////////////////////////////////////////////////////////////////////////
//                      main starts
//////////////////////////////////////////////////////////////////////////////////////////
int const lmt=1e5+5;

vi adj[lmt];
int val[lmt];
int vis[lmt];
bool cyc;


int main(){

    #ifndef ONLINE_JUDGE
    freopen("./input.txt", "r", stdin);
    freopen("./output.txt", "w", stdout);
	#endif
    fast

    
    int n,m; cin>>n>>m; 

    // loop1(i,n){
    // 	cin>>val[i];
    // }

    int u,v;
    while(m--){
    	cin>>u>>v;
    	adj[u].pb(v);
    	adj[v].pb(u);
    }
    
    queue<int>q;
    int sc=0;
    q.push(sc);
    vis[sc]=1;
    while(!q.empty()){
    	int s=q.size();
    	while(s--){
    		int p=q.front(); q.pop();
    		// vis[p]=1;
    		for(auto c:adj[p]){
    			if(!vis[c]){
    				vis[c]=1;
    				q.push(c);
    			}
    		}
    	}
    }
    

}


/*

// 

*/