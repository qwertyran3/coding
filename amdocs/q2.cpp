#include<bits/stdc++.h>

using namespace std;
int n,c;
int ans[101], wtaken[101],mtaken[101];
int adj[101][101];
int ok;

void back(int w){
    if(ok) return;
    else if(wtaken[w]){
        back(w+1);
    }
    else if(w==n+1){
        ok=1;
    }else{
        for(int m=1; m<=n; m++){
            if(ok)return;
            if(mtaken[m])continue;
            if(adj[w][m]){
                ans[w]=m;
                // cout<<w<<"*"<<m<<"==>";
                mtaken[m]=1;
                back(w+1);
                mtaken[m]=0;

            }
        }
    }

    

    

}

int main(int argc, char *a[])
{
    cin>>n>>c;
    
    int ww,mm;
    char ch;
    for(int i=1;i<=n; i++){
        mtaken[i]=0;
        wtaken[i]=0;
        for(int j=1; j<=n; j++)adj[i][j]=1;
    }

    for(int i=0; i<c; i++){
        cin>>ch>>ww>>mm;
        if(ch!='#'){
            ans[ww]=mm;
            wtaken[ww]=1;
            mtaken[mm]=1;
        }else{
            adj[ww][mm]=0;
        }
    }
    ok=0;
    back(1);

    for(int i=1; i<=n; i++)cout<<ans[i]<<" ";
}
