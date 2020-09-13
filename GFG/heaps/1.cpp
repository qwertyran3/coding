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
int const lmt=1e5+5;

int partition(int a[], int l ,int r){
	int pi=a[r];
	int i=l;
	for(int j=l; j<r; j++){
		if(a[j]<=pi){
			swap(a[i],a[j]);
			i++;
		}
	}
	swap(a[i],a[r]);
	return i;
}

int small(int a[],int l,int r,int k){
	
	if(k > 0 && k <= r - l + 1){
		int pos=partition(a,l,r);
		if(pos-l==k-1) return a[pos];
		if(pos-l>k-1) return small(a,l,pos-1,k);
		else return small(a,pos+1,r,l+k-pos-1);
	}
	return INT_MAX;
}

int main(){

    #ifndef ONLINE_JUDGE
    freopen("../../input.txt", "r", stdin);
    freopen("../../output.txt", "w", stdout);
	#endif
    
    test{
    	int n,k;
    	cin>>n;
    	cin>>k;
    	int a[n];
    	loop(i,n){
    		cin>>a[i];
    	}
    	small(a,0,n-1,n-k+1);

    	for(int i=n-1; i>=n-k; i--){
    		pts(a[i]);
    	}
    	cout<<endl;
	}

}


/*

// 

*/