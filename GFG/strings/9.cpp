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
// ll pali(string s,ll l,ll r){
// 	if(s=="" || l>r) return 0;

// 	while(l>=0 && r<s.length() && s[l]==s[r]){
// 		l--;
// 		r++;

// 	}
// return r-l-1;
// }

// ll lps(string s,ll n){
// 	ll st=0,e=0;
// 	loop(i,n){
//     		ll len1=pali(s,i,i);
//     		ll len2=pali(s,i,i+1);
//     		ll len=max(len1,len2);
//     		if(len>e-st+1){
//     			st=i-((len-1)/2);
//     			e=i+len/2;
//     		}
    	

//     }

//     return e-st+1;

    
// }



int main(){

    #ifndef ONLINE_JUDGE
    freopen("../../input.txt", "r", stdin);
    freopen("../../output.txt", "w", stdout);
	#endif
    fast
    test{
	    string s,p;
	   
	    cin>>s;
	    p=s;
	    ll n=s.size();
		reverse(all(p));
		ll lcs[n+1][n+1];
		
		loop1(i,n){
			loop1(j,n){
				if(i==0 || j==0) lcs[i][j]=0;
				else if(s[i-1]==p[j-1])
					lcs[i][j]=lcs[i-1][j-1]+1;
				else
					lcs[i][j]=max(lcs[i][j-1],lcs[i-1][j]); 

				
			}

		}
		ll c=lcs[n][n];
		pt(n-c);



	}    
}


/*

// 

*/