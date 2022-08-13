#include<iostream>
using namespace std;
int main()
{
    int arr[100],n,temp,i,j;
    cin>>n;
    for(int i=0;i<n;++i)
    {
        cin>>arr[i];
    }
    for(i=0;i<n;++i)
    {
        if(arr[i]<0)
        {temp=arr[i];
        for(j=i;j<n-1;++j)
         arr[j]=arr[j+1];
         arr[j]=temp;   
        }

    }
    for(int i=0;i<n;++i)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}