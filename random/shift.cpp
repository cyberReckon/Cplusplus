#include<iostream>
using namespace std;

void del(int * arr,int i,int n)
{
    for (;i<n-1;++i)
    {
        arr[i]=arr[i+1];
    }
}
int shift(int * arr,int n)
{   int cnt=0;
    for(int i=0;i<n;++i)
    {
        if(arr[i]==0)
        {cnt++; 
        }
    }
    for(int i=0;i<n;++i)
    {
        if(arr[i]==0)
        {
        del(arr,i,n);
        }
    }
    for(int i=n-cnt;i<n;++i)
     arr[i]=0;
    return cnt;
}

int main()
{
    int arr[]={2,3,0,1,0,1,2,0};
    cout<<shift(arr,8)<<endl;
    for(int i=0;i<8;++i)
    cout<<arr[i]<<",";
}