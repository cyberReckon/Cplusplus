#include <iostream>
using namespace std;

void sort(int input[], int si, int li)
{
    if (si >= li)
    {
        return ;
    }

    int mid = (si + li) / 2;

    sort(input, si, mid);
    sort(input, mid + 1, li);

    int i = si, j = mid + 1, k = 0;

    int * aux = new int[li + 1];

    while (i <= mid && j <= li)
    {
        if (input[i] < input[j])
        {
            aux[k++] = input[i++];
        }
        else
            aux[k++] = input[j++];
    }

    while (i <= mid)
    {
        aux[k++] = input[i++];
    }

    while (j <= li)
    {
        aux[k++] = input[j++];
    }

    int p = si, q = 0;

    while (q < k)
    {
        input[p++] = aux[q++];
    }
    delete[] aux;
}

int maximumProfit(int budget[], int n) {
    sort(budget,0,n-1);
    cout<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<budget[i]<<" ";
    }
    
    int price,ans=0;
    for (int i = 0; i < n; i++)
  {
    int count = (n-i);

    if (ans < count * budget[i])
    {
      price = budget[i];
      ans = count * budget[i];
    }
  }
 
  
  return ans;
}

int main() {
    int n ,*input,i,*cost;
    cin>>n;
    input = new int[n];
    for(i = 0;i < n;i++)
        cin>>input[i];
    
    cout << maximumProfit(input, n) << endl;
    
}
