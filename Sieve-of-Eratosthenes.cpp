#include<bits/stdc++.h>
 
#define int long long
#define endl '\n'

using namespace std;
 
signed main()
{
    
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    vector <bool> v(n+1, true);
    for (int i = 2; i <= n; i++)
    {
        if(v[i]==true){
            for (int j = 2; j*i <= n; j++)
            {
                v[j*i] = false;
            }
            
        }
    }
    for (int i = 2; i <= n; i++)
    {
        if(v[i]== true) cout<<i<<endl;
    }
    
    
    
    
    return 0;
}
 