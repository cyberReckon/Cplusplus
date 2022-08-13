#include <iostream>
#include <algorithm>
using namespace std;

void intersection(int i1[], int i2[], int n, int m) {
    
    int *flag= new int[n];
    for(int i=0;i<n;++i)
    { flag[i]=1;
    }

    for(int j=0;j<m;++j)
    {
        for(int i=0;i<n;++i)
        {
            if( (i1[i]==i2[j])&&(flag[i]==1) )
            {
                cout<<i1[i]<<" ";
                flag[i]=0;
                break;
            }
        }

    }
    cout<<endl;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{

		int size1, size2;

		cin >> size1;
		int *input1 = new int[size1];

		for (int i = 0; i < size1; i++)
		{
			cin >> input1[i];
		}

		cin >> size2;
		int *input2 = new int[size2];

		for (int i = 0; i < size2; i++)
		{
			cin >> input2[i];
		}

		intersection(input1, input2, size1, size2);
		
		delete[] input1;
		delete[] input2;
		
		cout << endl;
	}

	return 0;
}