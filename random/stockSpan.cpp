#include <iostream>
using namespace std;

int *stockSpan(int *price, int size)
{
    int * span= new int[size];
    span[0]=1;
    for(int i=1;i<size;i++)
    {
        if(price[i]>price[i-1])
        span[i]=1+span[i-1];
        
        else
        span[i]=1;
    }

    return span;
}

int main()
{
    int size;
    cin >> size;

    int *input = new int[size];
    for (int i = 0; i < size; i++)
    {
        cin >> input[i];
    }

    int *output = stockSpan(input, size);
    for (int i = 0; i < size; i++)
    {
        cout << output[i] << " ";
    }

    cout << "\n";

    delete[] input;
    delete[] output;
}