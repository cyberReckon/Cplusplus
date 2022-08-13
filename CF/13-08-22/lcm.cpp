#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;
 
 
 
// Utility function to find
// GCD of 'a' and 'b'
ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
 
// Returns LCM of array elements
ll findlcm(ll arr[], int n)
{
    // Initialize result
    ll ans = arr[0];
 
    // ans contains LCM of arr[0], ..arr[i]
    // after i'th iteration,
    for (ll i = 1; i < n; i++)
        ans = (((arr[i] * ans)) /
                (gcd(arr[i], ans)));
 
    return ans;
}
 

int main()
{  
     ll t,l,r;
     ll ans;
    cin>>t;
    while(t)
    { ans=0;
        cin>>l>>r;
        for(ll i=l;i<=(r-2);++i)
        for(ll j=i+1;j<=(r-1);++j)
        for(ll k=j+1;k<=r;++k)
        { ll arr[]={i,j,k};
            if(findlcm(arr,3)>=i+j+k)
            ans++;  
         }
         cout<<ans<<endl;
        t--;
    }
    
    return 0;
}