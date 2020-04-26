    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        int t;
        cin>>t;
        while(t--)
        {
            int a,b;
            cin>>a>>b;
            int sum=(60-b)+((23-a)*60);
            cout<<sum<<endl;
        }
        return 0;
    
    }

    #include <bits/stdc++.h>
    typedef long long int var;
    using namespace std;
    int main() 
    {
       // ios_base::sync_with_stdio(0);
       // cin.tie(0);
       // cout.tie(0);
        int t;
        cin>>t;
        while(t--)
        {
            int c,k,n,m;
            cin>>c>>k;
            n=c-(c/k)*k;
            m=(c/k)*k+(k/2);
            if(n<=k/2)
            cout<<c<<endl;
            else
            cout<<m<<endl;
            
            
            
        }
        return 0;
    }