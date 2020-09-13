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
#define F first
#define S second


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
int const lmt=102;
ll m,n;

int di[4]={0,1,0,-1};
int dj[4]={1,0,-1,0};
int vis[lmt][lmt];
bool valid(int i, int j){
	if(i>=0 && j>=0 && i<n && j<m && !vis[i][j]) return 1;
	return 0;
}



int main(){

    #ifndef ONLINE_JUDGE
    freopen("../../input.txt", "r", stdin);
    freopen("../../output.txt", "w", stdout);
	#endif
    fast
    
    test{
    	cin>>n>>m;
    	memset(vis,0,si)
    	int a[n][m];
    	loop(i,n){
    		loop(j,m){
    			cin>>a[i][j];
    		}
    	}
    	int x=0, y=0, k=0;
    	loop(i,n){
    		loop(j,m){
    			vis[x][y]=1;

    			pts(a[x][y]);
    			// int nx=x+di[k]; 
    			// int ny=y+dj[k];
    			if( !valid( x+di[k], y+dj[k] ) ){
    				k = (k+1)%4;
    			}
    			x += di[k];
    			y += di[k];
    		}
    	}
   	}
}
    
    	
    





/*

// 

*/