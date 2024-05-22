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
    map<int,int> fact;
    for (int i = 2; i <= n; i++)
    {
        if(n%i==0){
            while (n%i==0)
            {
                fact[i]++;
               n/=i; 
            }

            
        }
        
        
    }
     if (n > 1) {
        fact[n]++;
    }
    for(auto [x,y] : fact) cout<<x<<" "<<y<<endl;
    
    
    return 0;
}
 