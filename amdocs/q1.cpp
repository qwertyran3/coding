#include<bits/stdc++.h>

using namespace std;

int b,c;
bool check(string ff, string ss){
    int bb=0;
    for(int i=0;i<4; i++){
        if(ff[i]==ss[i])bb++;
    }
    // cout<<"1";
    if(bb!=b)return false;

    int ffre[4]={0};
    int sfre[4]={0};

    for(int i=0;i<4; i++){
        ffre[ff[i]-'A']++;
        sfre[ss[i]-'A']++;
    }
    int cc=0;
    for(int i=0;i<4; i++){
        cc += min(ffre[i], sfre[i]);
    }
    // cout<<"1";

    return (cc == (b+c));
}
int main(int argc, char *a[])
{


    int n; cin>>n;
    string s, g[256],tt="AAAA";

    int idx=0;
    for(int i0=0; i0<4; i0++){
        tt[0] = ('A'+i0);
        for(int i1=0; i1<4; i1++){
            tt[1] = char('A' + i1);
            for(int i2=0; i2<4; i2++){
                tt[2] = char('A'+i2);
                for(int i3=0; i3<4; i3++){
                    tt[3] = char('A' + i3);
                    g[idx++] = tt;
                }
            }
        }
    }
    queue<int> q;

    for(int i=0; i<256; i++)q.push(i);
    for(int i=0; i<n; i++){
        cin>>s>>b>>c;
        // cout<<"level "<<i<<"===\n";
        int sz = q.size();
        while(sz--){
            idx = q.front(); q.pop();
            if(check(g[idx],s)){
                // cout<<g[idx]<<" ";
                q.push(idx);
            }
        }
        // cout<<"\n";
    }
    // cout<<q.size()<<"==>";
    cout<<g[q.front()]<<"\n";

    // b=0; c=2;
    // cout<<"=====================\n";
    // cout<<check("BDAA","DBCC");
}
