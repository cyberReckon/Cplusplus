#include <iostream>
#include <math.h>
using namespace std;

int solve(int arr[],const int size,int k)
{ int check[size+1]={0},maxSum=INT_MIN,temp=0;
 
 int m=pow(2,k);
 for(int i=1;i<=size-m;++i)
 {
    if(check[i]==0)
    {   check[i]=1;
        check[i+m]=1;        
        temp=arr[i];
        arr[i]=arr[i+m];
        arr[i+m]=temp;
        
    }
 }
 for (int i = 1; i <= size; i++) {
    int currSum = 0;
    for (int j = i; j <= size; j++) {
      currSum += arr[j];
      if (currSum > maxSum) {
        maxSum = currSum;
      }
    }
  }
  return maxSum;
}

int main()
{
    int n,q,k;
  
        cin>>n;
        const int size=pow(2,n);
        int arr[size];
        for(int i=1;i<=size;++i)
        cin>>arr[i];
        cin>>q;
        while(q){
            cin>>k;
        cout<<solve(arr,size,k)<<endl;
        q--;
        }

      return 0;
}