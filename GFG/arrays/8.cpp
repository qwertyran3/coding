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


#define inf (ll)1e9
#define eps 1e-9
#define PI 3.1415926535897932384626433832795
#define mod 1000000007


#define fast    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define test   ll t; cin>>t; while(t--)

typedef pair<ll, ll> pii;
typedef vector<ll> vi;
typedef vector<string> vs;
typedef vector<pii> vpii;
typedef vector<vi> vvi;
typedef map<ll,ll> mii;
typedef set<ll> si;

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
ll const lmt=1e5+5;
ll ans;

void merge(ll arr[], ll l, ll m, ll r)
{
     ll n1=m-l+1;
     ll n2=r-m;
     ll a[n1],b[n2];
     ll i=0,j=0,k=l;
     for(i=0; i<n1; i++) a[i]=arr[l+i];
     for(i=0; i<n2; i++) b[i]=arr[m+1+i];
     i=0;
     
     while(i<n1 && j<n2){
         if(a[i]<=b[j]){
             arr[k]=a[i];
             i++;
         }
         else{
             arr[k]=b[j];
             ans+=n1-i;
             j++;
         }
         k++;
     }
     while(i<n1){arr[k++]=a[i++];}
     while(j<n2){arr[k++]=b[j++];}
     
}

void mergeSort(ll arr[], ll l, ll r) {
    if (l < r)   {
        ll m = l+(r-l)/2;
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);
        merge(arr, l, m, r);
    }
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
    	ll arr[n];
    	loop(i,n){
    		cin>>arr[i];
    	}
    	ans=0;
    	mergeSort(arr,0,n-1);
    	pt(ans);

	}

}


/*

// 

*/