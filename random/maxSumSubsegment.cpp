#include <iostream>
using namespace std;

int main() {
    int maxSum=INT_MIN;
    int arr[]={-3,-3,5,6,-1,8,-20}; 
    for (int i = 0; i < 8; i++) {
    int currSum = 0;
    for (int j = i; j < 8; j++) {
      currSum += arr[j];
      if (currSum > maxSum) {
        maxSum = currSum;
      }
    }
  }
cout<<maxSum;
    return 0;
}