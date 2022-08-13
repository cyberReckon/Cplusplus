#include <iostream>
using namespace std;

int main() {
	int N,count=0,sum;
    cin>>N;
    long int arr[N];
    for(int i=0;i<N;++i)
    cin>>arr[i];
    for(int i=0;i<N;++i)
    {
    for(int j=i+1;j<N;++j)
    { sum=arr[i]+arr[j];
        if((arr[i]!=0)&&(arr[j]!=0)&&sum%2==0)
       {
        if(sum/2==(arr[i]&arr[j]))
        {count++;
        arr[i]=0;
        arr[j]=0;
       }
       }
    }
    cout<<count;
	return 0;
}

