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
        vector<int> ans;
 
        while(n!=0){
            for (int i = 30; i >= 0 ; i--)
            {
               int p = 1LL<<i;
                if(n>=p){
                    
                    ans.push_back(i);
                    n-= p;
                    break;
                }
            }
            
        }
        
        for (int i = 0; i < ans.size(); i++)
        {
            cout<<"2^"<<ans[i]<<" ";
        }
        
        
    
    
    return 0;
}
