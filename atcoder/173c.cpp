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
#define yu 1000000007


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
int const mod=1e9+7;

ll maxP(ll A[], int n, int k) 
{ 
    // sorting given input array 
    sort(A, A + n); 
  
    // variable to store final product of all element 
    // of sub-sequence of size k 
    ll product = 1; 
  
    // CASE I 
    // If max element is 0 and 
    // k is odd then max product will be 0 
    if (A[n - 1] == 0 && (k & 1)) 
        return 0; 
  
    // CASE II 
    // If all elements are negative and 
    // k is odd then max product will be 
    // product of rightmost-subarray of size k 
    if (A[n - 1] <= 0 && (k & 1)) { 
        for (int i = n - 1; i >= n - k; i--) 
            product=(product * A[i]+mod)%mod; 
        return product; 
    } 
  
    // else 
    // i is current left pointer index 
    int i = 0; 
  
    // j is current right pointer index 
    int j = n - 1; 
  
    // CASE III 
    // if k is odd and rightmost element in 
    // sorted array is positive then it 
    // must come in subsequence 
    // Multiplying A[j] with product and 
    // correspondingly changing j 
    if (k & 1) { 
        product=(product*A[j]+mod)%mod; 
        j--; 
        k--; 
    } 
  
    // CASE IV 
    // Now k is even 
    // Now we deal with pairs 
    // Each time a pair is multiplied to product 
    // ie.. two elements are added to subsequence each time 
    // Effectively k becomes half 
    // Hence, k >>= 1 means k /= 2 
    k >>= 1; 
  
    // Now finding k corresponding pairs 
    // to get maximum possible value of product 
    for (int itr = 0; itr < k; itr++) { 
  
        // product from left pointers 
        ll left_product = (A[i] * A[i + 1]+mod)%mod; 
  
        // product from right pointers 
        ll right_product = (A[j] * A[j - 1]+mod)%mod; 
  
        // Taking the max product from two choices 
        // Correspondingly changing the pointer's position 
        if (left_product > right_product) { 
            product =(product* left_product+mod)%mod; 
            i += 2; 
        } 
        else { 
            product =(product* right_product+mod)%mod; 
            j -= 2; 
        } 
    } 
  
    // Finally return product 
    return (product+mod)%mod; 
} 

int main(){

    

    int n,k;
    cin>>n>>k;
    ll a[n];
    loop(i,n) cin>>a[i];

   	pt(maxP(a,n,k));
   
    
} 

    
    




/*

// 

*/