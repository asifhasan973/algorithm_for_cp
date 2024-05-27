#include<bits/stdc++.h>
 
#define int long long
#define endl '\n'

using namespace std;
 
vector<int> findDivisors(int n) {
    vector<int> divisors;
    int sqrt_n = sqrt(n);
    for (int i = 1; i <= sqrt_n; ++i) {
        if (n%i == 0) {
            divisors.push_back(i);
            if (i != n / i) {
                divisors.push_back(n / i);
            }
        }
    }
    return divisors;
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;

    vector<int> v = findDivisors(n);
    for(auto k: v)cout<<k<<" ";
    
    
    return 0;
}
 
