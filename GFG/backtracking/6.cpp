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
int const lmt=20;
vvi ans;
vi v;
ll tar,n,m;
int a[lmt][lmt];
bool isvalid( int row, int col){
    for(int i=1; i<=row; i++){
        if(a[i][col]==1) return false;
    }

    for(int i=row-1, j=col-1; i>=1 && j>=1; i--, j-- ){
        if(a[i][j]==1) return false;
    }

    for(int i=row-1, j=col+1; i>=1 && j<=n; i--, j++){
         if(a[i][j]==1) return false;

    }

    return true;

}



void back(int row){
	if(row==n+1){
        ans.push_back(v); return;
    }
	for(int col=1; col<=n; col++){
        if(isvalid(row,col)){
            a[row][col]=1;
            v.pb(col);
            back(row+1);
            a[row][col]=0;
            v.pop_back();
        }
    }

}











int main(){

    #ifndef ONLINE_JUDGE
    freopen("../../input.txt", "r", stdin);
    freopen("../../output.txt", "w", stdout);
	#endif
    fast
    test{
    	
    	cin>>n;
    	ans.resize(0);
    	v.resize(0);
    	ini(a,0);
        int row=1;
    	back(row);
    	
    	if(!ans.size()){ pt("-1"); continue;}
    	loop(i,ans.size()){
    		v=ans[i];
    		cout<<"[";
    		loop(j,v.size()){
    			pts(v[j]);
    			// if(j==v.size()-1) continue;
    			// cout<<" ";
    		}

    		pts("]");
    	}

	   	cout<<endl;
	}
}


/*

// 

*/