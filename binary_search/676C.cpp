#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define ini(arr, val) memset(arr, (val), sizeof(arr))
#define loop(i,n)  for(ll i=0; i<n; i++)
#define loop1(i,n)  for(ll i=1; i<=n; i++)

#define all(a)      (a).begin(),(a).end()
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
ll p[lmt];
ll n,k;
string s;


void prefix(char x){
	p[0]= 0;
	loop1(i,n){
		p[i] = p[i-1] + (s[i]!=x);
	}
}

ll bs(ll i){
	ll lo=i,mid,hi=n;
	while(lo<=hi){
		mid=lo+((hi-lo)/2);
		if(p[mid]-p[i-1]>k) hi=mid-1;
		else lo=mid+1;
	}
	return (lo-i);
}

ll solve(char x){
	prefix(x);

	ll ans=0;
	loop1(i,n){
		ans = max(ans,bs(i));
	}
	return ans;
}

int main(){

    #ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
	#endif
    fast

    cin>>n>>k;
    cin>>s;
    s = 'x'+s;
    ll ans;
    ans=max(solve('a'),solve('b'));
    cout<<ans<<endl;
    
}


/*

// 

*/