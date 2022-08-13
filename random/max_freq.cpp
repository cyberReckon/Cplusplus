#include <unordered_map>
#include <iostream>
using namespace std;

int highestFrequency(int *input, int n){
    unordered_map<int, int> map;
    int maxFreq = 0; int max;
    for(int i = 0; i < n; i++){
        if(map.count(input[i]) > 0){
            map[input[i]]++;
            if(map[input[i]] > maxFreq){
                maxFreq = map[input[i]];
            }
        }
        else
        map[input[i]] = 1;
    }
    for(int i = 0; i < n; i++){
        if(map[input[i]] == maxFreq){
            max=input[i];
        }
    }
    return max;
}

int main()
{
    int n;
    cin>> n;

    int *arr = new int[n];

    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    cout<< highestFrequency(arr, n);

    delete[] arr;
}