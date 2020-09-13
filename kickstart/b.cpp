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

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
    #endif
    fast;
    int t; cin>>t;
    for(int T=1;T<=t;T++){
       ll n,a,b,c;
       cin>>n>>a>>b>>c;
       ll ar[n],br[9];
       loop(i,9) br[i]=1;
       ll sum=0;
       loop(i,9){
        br[i]+=9;
       }
       loop(i,9){
        sum+=br[i];
       }
       ll cnt1=0,cnt2=0;
       if(((n-c)<(a-c+b-c))||(n>1 && a==1 && b==1 && c==1))
         cout<<"Case #"<<T<<": "<<"IMPOSSIBLE"<<endl;
       else{
         for(int i=0;i<n;i++) ar[i]=1;
         if((a-c)>0){
             cnt1+=(a-c);
             for(int i=0;i<(a-c);i++) ar[i]=n-1;
         }
         if((b-c)>0){
             for(int i=cnt1;i<(cnt1+c);i++) ar[i]=n;
             cnt1+=c;
             for(int i=n-1;i>=0;i--){
                 if(cnt1==(a+b-c)) break;
                 ar[i]=n-1;
                 cnt1++;
             }
         }
         ll gr[10];
         loop(i,10){
            gr[i]=5;
            if(i%2==0) gr[i]=2;
            else gr[i]=6;
         }
         loop(i,5){
            sum+=gr[i];
         }
         loop(i,20){
            sum+=34;
         }
         sum+=5;

         if((b-c)==0){
             ar[n-1]=n;
            for(int i=n-2;i>=0;i--){
               if(cnt2==(n-a)) break;
               ar[i]=1;
               cnt2++;
            }
            ll r=0;
            loop(i,15){
                r+=15;
            }
            sum+=15;
            sum+=r;
            int idx=a-2;
            for(int i=0;i<c-1;i++){
                ar[idx]=n;
                idx--;
            }
         }

         cout<<"Case #"<<T<<": ";
         for(int i=0;i<n;i++)
            cout<<ar[i]<<" ";
         cout<<endl;
       }
    }
}


    
    
    

    

    
    
    




/*

// 

*/