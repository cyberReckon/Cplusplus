#include<iostream>
#include<algorithm>
using namespace std;

void reset(int a[],int b[],int N)
{
    for(int i=0;i<N;++i)
    a[i]=b[i];
}

int median(int arr[],int arr2[],int n)
{ int med;
    int temp,i,j;
    for(i=0;i<n;++i)
    for(j=i+1;j<n;++j)
    if(arr[i]>arr[j])
    {temp=arr[i];;
    arr[i]=arr[j];
    arr[j]=temp;
     }
     med=arr[(n+1)/2-1];
       reset(arr,arr2,n);
 return med;
}

int solve(int arr[],int arr2[],int M,int N,int K,int med)
{ 
    static int count=0;
    if(arr[K]==M)
     {return count;
     }

    else
    {   arr[K]=arr[K]+1;
       arr2[K]=arr2[K]+1;
        if(median(arr,arr2,N)==med)
         {   count++;
         solve(arr,arr2,M,N,K,med);
         return count;
        }
    }
 return count;
}

int main() {
	int N,M,K;
	cin>>N>>M>>K;
	int arr[N],arr2[N];
	for(int i=0;i<N;++i)
	{cin>>arr[i];
    cin>>arr2[i];
    }
    int ans=arr[K];
    int med=median(arr,arr2,N);
    cout<<ans+solve(arr,arr2,M,N,K,med);
    return 0;
}
