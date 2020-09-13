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
int const lmt=1e5+5;


int main(){

 //    #ifndef ONLINE_JUDGE
 //    freopen("../input.txt", "r", stdin);
 //    freopen("../output.txt", "w", stdout);
	// #endif
 //    fast

    int n;
    int a[3][3];
    loop(i,3){
    	loop(j,3){
    		cin>>a[i][j];
    	}
    }
    cin>>n;
    int b[n];
    loop(i,n) cin>>b[i];
    bool vis[3][3];
    loop(i,3){
    	loop(j,3){
    		vis[i][j]=0;
    		loop(k,n){
    			if(a[i][j]==b[k]) vis[i][j]=1;
    		}
    	}
    }
    int c=0;
    
    loop(i,3){
    	if(vis[i][0] && vis[i][1] && vis[i][2]) {c=1;break;}
    }
    loop(j,3){
    	if(vis[0][j] && vis[1][j] && vis[2][j]) {c=1;break;}
	}
	if(vis[0][0] && vis[1][1] && vis[2][2]) c=1;
	if(vis[0][2] && vis[1][1] && vis[2][0]) c=1;

	if(c) pt("Yes");
	else pt("No");

}


/*

// 

*/