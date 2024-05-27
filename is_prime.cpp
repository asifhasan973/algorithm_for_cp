#include<bits/stdc++.h>
 
#define int long long
#define endl '\n'

using namespace std;
 
bool isPrime(int n){
    if(n<=1) return false;
    if(n<=3) return true;

    if(n%2==0 || n%3==0) return false;

    for (int i = 5; i*i <= n; i+=6)
    {
        if(n%i==0 || n%(i+2)==0) return false;
    }

    return true;
     
 }

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;cin>>n;
    
    if(isPrime(n)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    
    
    return 0;
}
 