#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define ini(arr, val) memset(arr, (val), sizeof(arr))
#define loop(i,n)  for(ll i=0; i<n; i++)
#define loop1(i,n)  for(ll i=0; i<=n; i++)

#define all(a)      (a).begin(),(a).end()
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
int dp[1001][1001];










int main(){

    #ifndef ONLINE_JUDGE
    freopen("../../input.txt", "r", stdin);
    freopen("../../output.txt", "w", stdout);
	#endif
    fast
    test{
    	
    	int n,W;
    	cin>>n>>W;
    	int v[n],w[n];
    	
    	loop(i,n){
    		cin>>v[i];
    	}
		loop(i,n){
    		cin>>w[i];
    	}

		// int dp[n+1][sum/2+1];
		loop1(i,n){
			loop1(j,W){
				if(j==0) dp[i][j]=0;
				else if(i==0) dp[i][j]=0;
				else if(w[i-1]>j) dp[i][j]=dp[i-1][j];
				else
					dp[i][j]=max(dp[i-1][j],v[i-1]+dp[i-1][j-w[i-1]]);
			}
		}   
		pt(dp[n][W]);
		
		

	}


}


/*

// 

*/