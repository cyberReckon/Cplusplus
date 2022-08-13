#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;

int main() {
  // Declare the variable
  int n,x;
  cin>>n>>x;
  int arr[n];
  for(int i=0;i<n;i++)
   {
     arr[i]=i+1;
   }
   
   for(int i=0;i<n-x+1;++i)
   {
    for(int j=i,k=0;k<x;k++,j++)
    cout<<arr[j]<<" ";
    cout<<endl;
   }
  
  return 0;
}

