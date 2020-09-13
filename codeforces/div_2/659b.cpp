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


int main(){

	#ifndef ONLINE_JUDGE
    freopen("../../input.txt", "r", stdin);
    freopen("../../output.txt", "w", stdout);
	#endif
    fast

        test{
        ll n,ele; cin>>n;
        string s[n+1];
        s[0]="";
        loop(i,10)s[0]+='a';
        // debug(s[0]);
        int cur=1;
        loop1(i,n){
            cin>>ele;
            if(ele<=s[i-1].length()){
                s[i]=s[i-1].substr(0,ele);
                s[i] += char('a'+cur);
                // debug(i,cur);
                cur = (cur+1)%26;
            }else{
                int len = s[i-1].length();
                s[i]=s[i-1];
                loop(j,ele-len){
                    s[i-1] += char('a'+cur);
                    s[i] += char('a'+cur);
                }
                s[i] += char('a'+cur);
                cur = (cur+1)%26;
                
            }
        }
        loop(i,n+1)pt(s[i]);
        // pt("========");
    }
    
    
    

    

    
    
    

}


/*

// 

*/