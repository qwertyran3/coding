#include<bits/stdc++.h>

#define ll long long

using namespace std;

int main(){
	 int t;
        cin >> t;
        for (int i = 0; i < t; ++i)
        {
            string s;
            cin >> s;
            int ans = 0, tmp = 0;
            for (int j = 0; j < s.size (); ++j)
            {
                if (s[j] == 'R')
                {
                    ans = max (ans, tmp);
                    tmp = 0;
                } else
                {
                    ++tmp;
                }
            }
            ans = max (ans, tmp);
            cout << ans + 1 << "\n"; 
        }
        return 0;
    }

