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

ll be(ll a, ll n, ll p){
    ll ans =1;
    while(n){
        if(n&1) ans = (ans*a)%p;
        a = (a*a)%p;
        n =n/2;
    }
    return ans;
}
ll inv(ll n, ll p){
    return be(n,p-2,p);
}
ll factmod(ll n, ll p) {
    ll res = 1;
    while (n > 1) {
        res = (res * ((n/p) % 2 ?  p-1 : 1)) % p;
        for (ll i = 2; i <= n%p; ++i)
            res = (res * i) % p;
        n /= p;
    }
    return res % p;
}

int main(){

	#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
	#endif
    fast

    test{
        ll a,b;
        cin>>a>>b;
        // ll rtp = sqrt(p);
        ll bb=b;
        vi pr;
        for(ll i=2; i*i<=b; i++){
            if(b%i==0){
                while(b%i==0) b/=i;
                pr.pb(i);
            }
        }
        if(b>1)pr.pb(b);
        // ll ans=1;
        b=bb;
        int sz = pr.size();
        int r[sz][sz];
        loop(i,sz)loop(j,sz){
            r[i][j] = inv(pr[i],pr[j]);
        }
        int x[sz];
        int k =sz;
        for (int i = 0; i < k; ++i) {
            x[i] = factmod(a,pr[i]); // a[i]
            for (int j = 0; j < i; ++j) {
                x[i] = r[j][i] * (x[i] - x[j]);

                x[i] = x[i] % pr[i];
                if (x[i] < 0)
                    x[i] += pr[i];
            }
        }
        ll ans=x[0]%bb;
        ll p=1;
        loop1(i,k-1){
            p = (p*pr[i-1])%bb;
            ans += (x[i]*p)%bb;
            ans %= bb;
        }
        
        pt(ans);

    }

    
    
    

}


/*

// 

*/