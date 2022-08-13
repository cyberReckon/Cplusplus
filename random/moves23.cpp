#include <iostream>
using namespace std;

int solve(int n)
{ if(n==1) return 2;
  if(n%3==0) return n/3;
  if(n%3==1) return n/3-1+2;
  if(n%3==2) return n/3+1;  
  return 0;
}

int main()
{
    int t,n ;
    cin>>t;
    while(t)
    {
        cin>>n;
        cout<<solve(n)<<endl;
        t--;
    }
      return 0;
}