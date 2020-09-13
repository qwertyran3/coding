#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define ini(arr, val) memset(arr, (val), sizeof(arr))
#define loop(i,n)  for(ll i=0; i<n; i++)

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
ll n;
string s,p;

void chan(ll j){
	loop(i,j){
		if(s[i]=='1') s[i]='0';
		else s[i]='1'; 
	}
	reverse(s.begin(),s.begin()+j+1);
}



int main(){

    #ifndef ONLINE_JUDGE
    freopen("../../input.txt", "r", stdin);
    freopen("../../output.txt", "w", stdout);
	#endif
    fast

    test{
    	ll n;
    	cin>>n;
    	string s,p;
    	cin>>s>>p;
    	int c=1;
    	vi v;
    	for(int i=n-1; i>0; i--){
    		if(s[i]!=p[i] && s[n-1-i]!=p[i]) {v.pb(i+1); chan(i);}

    		else if(s[i]!=p[i]){ v.pb(c); v.pb(i+1); chan(i);}
    		
    	}

    	pts(v.size());
    	for(auto c:v) pts(c);

    	pt("");
    
    }

    

    

}


/*

// 

*/