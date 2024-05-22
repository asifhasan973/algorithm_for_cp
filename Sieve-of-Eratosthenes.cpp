#include<bits/stdc++.h>
 
#define int long long
#define endl '\n'

using namespace std;
 
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n = 100;
    
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
    vector<int> prime;

    for (int i = 2; i <= n; i++)
    {
        if(v[i]== true) prime.push_back(i);
    }
    for(auto a: prime) cout<<a<<" ";

    
    return 0;
}
 
