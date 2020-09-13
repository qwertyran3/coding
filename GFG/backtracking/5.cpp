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
vector<string> genIp(string &s) {
	vector<string>v;
	string ans;
	for(int a=1; a<=3; a++)
		for(int b=1; b<=3; b++)
			for(int c=1; c<=3; c++)
				for(int d=1; d<=3; d++)
					if(a+b+c+d == s.size()){
						int A=stoi(s.substr(0,a));
						int B=stoi(s.substr(a,b));
						int C=stoi(s.substr(a+b,c));
						int D=stoi(s.substr(a+b+c,d));

						if (A<=255 && B<=255 && C<=255 && D<=255){
							ans=to_string(A)+"."+to_string(B)+"."+to_string(C)+"."+to_string(D);
							if(ans.size()==(s.size()+3))
								v.push_back(ans);
						}
					}
	return v;
}












int main(){

    #ifndef ONLINE_JUDGE
    freopen("../../input.txt", "r", stdin);
    freopen("../../output.txt", "w", stdout);
	#endif
    fast
    test{
	   
	}

}


/*

// 

*/