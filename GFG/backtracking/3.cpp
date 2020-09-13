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
#define pts(x) cout<<x

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
set<vi> ans;
vi v;
ll tar,n,m;
vi a;

void back(ll i){
    if(tar<a[i]) return;
    if(tar==a[i]){
        // loop(k,v.size()) pts(v[k]);
        // pt("========"); 
        v.pb(a[i]);
        ans.insert(v); 
        v.pop_back();
        return;
    }

    tar-=a[i]; v.pb(a[i]);

    for(ll j=i+1; j<m; j++){
        back(j);
    
    }

    tar+=a[i]; v.pop_back();

}











int main(){

    #ifndef ONLINE_JUDGE
    freopen("../../input.txt", "r", stdin);
    freopen("../../output.txt", "w", stdout);
    #endif
    fast
    test{
        ll b;
        cin>>n;
        ans.clear();
        v.resize(0);
        a.resize(0);
        loop(i,n){
            cin>>b;
            a.push_back(b);
        }
        cin>>tar;
        sort(all(a));
        
        m=a.size();
        loop(i,m){
            back(i);
        }
        if(!ans.size()){ pt("Empty"); continue;}
        for(auto vv: ans){
            
            cout<<"(";
            loop(j,vv.size()){
                pts(vv[j]);
                if(j==vv.size()-1) continue;
                cout<<" ";
            }
            cout<<")";
        }

        cout<<endl;

    }

}


/*

// 

*/