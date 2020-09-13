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
int const lmt=1e3+5;
int x[lmt],y[lmt];
ll m,n;
int a[5];



ll bs(int x){
	ll ans;
	ll lo=0,hi=n-1,mid;
	if(x==0) return 0;
	if(x==1) return 0;
	

	while(lo<=hi){
		mid=lo+(hi-lo)/2;
		if(y[mid]>x) hi=mid-1;
		else lo=mid+1;
	}
	ans=n-lo;
	ans+=a[0]+a[1];
	if(x==2) ans-=(a[3]+a[4]);
	if(x==3) ans+=a[2];

	return ans;
}


int main(){

    #ifndef ONLINE_JUDGE
    freopen("../../input.txt", "r", stdin);
    freopen("../../output.txt", "w", stdout);
	#endif
    fast
    test{
    	
    	cin>>m>>n;
    	loop(i,m){
    		cin>>x[i];
    	}
    	loop(i,n){
    		cin>>y[i];
    	}
    	a[5]={0};
    	loop(i,n){
    		if(y[i]<5) a[y[i]]++;
    	}
    	sort(y,y+n);
    	ll sum=0;
    	loop(i,m){
    		sum=sum+bs(x[i]);
    	}
    	pt(sum);
	}

}


/*

// 

*/