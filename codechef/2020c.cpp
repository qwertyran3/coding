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

string bin(ll n) 
{ 
    string p="";
    while(n){
    	if(n%2==1) p+='1';
    	else p+='0';
    	n/=2;
    }
    reverse(all(p));
    return p;
}
ll myAtoi(string s) 
{ 
    ll res=0;
    loop(i,s.length()){
    	res=2*res+(s[i]-'0');
    }
    return res;
} 
ll func(ll x,ll y){
	string q=bin(x);
	string r=bin(y);
	
	string t=q+r;
	string f=r+q;
	
	ll u=myAtoi(t); 
	ll v=myAtoi(f);
	
	ll c=abs(u-v);
	return c;

} 


int main(){

	#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
	#endif
    fast

    test{
    	ll n;
    	cin>>n;
    	ll a[n],max1=0,ans=0;
    	loop(i,n){
    		cin>>a[i];
    		
    	}
    	loop(i,n){
    		for(ll j=i+1; j<n; j++){
    			ans=max(ans,func(a[i],a[j]));
    		}
    	}

    	pt(ans);



    }

    
    

    
    
    

}


/*

// 

*/