#include <iostream>
#include <vector>
#include<algorithm>
#include<map>

using namespace std;

int main()
{ int t,n,k,p,ans=0;
cin>>t;
map <int,int>mp;
vector<int> vec;
vector<int> vec2;
while(t)
{ 
    cin>>n>>k;
    while(n)
    {   
        cin>>p;
        vec.push_back(p);
        vec2.push_back(p);
        n--;
    }

     sort(vec2.begin(),vec2.end());
     
    for(int i=0;i<k;++i)
     {//cout<<vec2[i]<<";";
      mp[vec2[i]]++;
     }

     for(int i=0;i<k;++i)
     {if( mp[vec[i]]==0)
       ans++;
     }
     cout<<ans<<endl;
    ans=0;
    mp.clear();
    vec.clear();
    vec2.clear();
    t--;
}
    return 0;
}