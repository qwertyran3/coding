#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define ini(arr, val) memset(arr, (val), sizeof(arr))
#define loop(i,n)  for(ll i=0; i<n; i++)
#define loop1(i,n)  for(ll i=1; i<=n; i++)

#define all(a)      (a).begin(),(a).end()
#define tr(a)      (a).begin(),(a).end(),(a).begin()
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


int dp[lmt][27];
string ans="";
ll cost[26];
void get_str(int tar, int pos){
	if(pos<=0) return;
	if(dp[tar][pos]){
		ans = ans + char('a'+pos-1);
		get_str(tar-cost[pos],pos);
	}else get_str(tar,pos-1);

}
int main(){

	#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
	#endif
    fast

    
    ll tar;
    loop1(i,26) cin>>cost[i];
    cin>>tar;
    
    

    for(int i=0; i<=tar; i++){
    	for(int j=0; j<=26; j++){
    		dp[i][j]=0;
    		if(i==0)dp[i][j]=1;
    		else if(j==0)dp[i][j]=0;

    		if(tar>=cost[j]){
    			dp[i][j] = dp[i-cost[j]][j];
    		}
    		// dp[i][j] |= dp[i][j-1];
    	}
    }
    int ok=0;
    for(int i=0; i<=26; i++)if(dp[tar][i]){ok=i; break;}
    if(!ok){
    	pt(ok); return 0;
    }
    ans = "##";
    get_str(tar, ok);
    pt(ans);
}


/*

// 

*/