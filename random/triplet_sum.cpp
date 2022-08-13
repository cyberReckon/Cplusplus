#include <iostream>
#include <algorithm>
using namespace std;

int helper(int input[], int n, int sum, int cnt) {
   
   if(cnt>3)
   return 0;

   else if(cnt==3&&sum==0)
    return 1;

    else if(n==0)
    return 0;
 
    else{
    return ( helper(input,n-1,sum-input[n-1],cnt+1) + helper(input,n-1,sum,cnt) );
    }
   
}

int tripletSum(int input[], int n, int sum) {
    return helper(input,n,sum,0);
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin >> t;

	while (t--)
	{
		int size;
		int x;
		cin >> size;
        

		int *input = new int[size];

		for (int i = 0; i < size; i++)
		{
			cin >> input[i];
		}
		cin >> x;

		cout << tripletSum(input, size, x) << endl;

		delete[] input;
	}

	return 0;
}