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
bool dp[2][lmt];










int main(){

    #ifndef ONLINE_JUDGE
    freopen("../../input.txt", "r", stdin);
    freopen("../../output.txt", "w", stdout);
	#endif
    fast
    test{
    	
    	ll n;
    	cin>>n;
    	ll a[n],sum=0;
    	
    	loop(i,n){
    		cin>>a[i];
    		sum=sum+a[i];
    	}
		if(sum%2!=0){pt("NO"); continue;}

		// int dp[n+1][sum/2+1];
		int flag=0;
		loop1(i,n){
			loop1(j,sum/2){
				if( j==0) dp[flag][j]=1;
				else if(i==0) dp[flag][j]=0;
				else if(a[i-1]>j) dp[flag][j]=dp[1-flag][j];
				else
					dp[flag][j]=dp[1-flag][j] || dp[1-flag][j-a[i-1]];
			}
			flag = 1-flag;
		}   
		if(dp[1-flag][sum/2]) pt("YES");
		else pt("NO");
		

	}


}


/*

// 

*/