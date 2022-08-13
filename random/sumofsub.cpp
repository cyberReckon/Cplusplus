#include<iostream>
using namespace std;
int subsetSumToK(int input[], int length, int output[][50], int k) {
    if ( k == 0 )
     return 1;

    if ( length == 0 && k!=0 )
     return 0;

    if ( input[length-1] <= k)   
     return( subsetSumToK(input+1 ,length-1 , output , k-input[length-1]) || subsetSumToK(input+1 ,length-1 , output , k ) );
                                        //if choosen                                                  if not choosen
  

    if (input[length-1] > k) 
     return( subsetSumToK(input+1 ,length-1 , output, k ) );
    
}

int main()
{
  int input[20], length, output[100][50], k;
  cin >> length;
  for (int i = 0; i < length; i++)
    cin >> input[i];

  cin >> k;

  int size = subsetSumToK(input, length, output, k);
  cout<<size;
//   for (int i = 0; i < size; i++)
//   {
//     for (int j = 1; j <= output[i][0]; j++)
//     {
//       cout << output[i][j] << " ";
//     }
//     cout << endl;
//   }
}