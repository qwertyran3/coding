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
int const lmt=1e4+5;
ll n,f;
ll a[lmt];
long double b[lmt];

bool check(long double mid){
	ll sum=0;
	loop(i,n) {sum+=(b[i]/mid);}
	if(sum>=(f+1)) return 1;
	else return 0;
}

long double bs(){
	long double lo=0,hi=b[n-1],mid;
	ll cnt=100;
	while(cnt--){
		mid=(hi+lo)/2;
		if(check(mid)==1) lo=mid;
		else hi=mid;
	}
	return lo;
}


int main(){

	#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
	#endif
    fast

    test{
	    cin>>n>>f;
	    loop(i,n) cin>>a[i];
	    sort(a,a+n);
	    loop(i,n){
	    	b[i]=(a[i]*a[i]*PI);
	    }
	    long double k=bs();
	    cout<<fixed<<setprecision(3)<<k<<endl;

	}
    
    

    

    
    
    

}


/*

// 

*/