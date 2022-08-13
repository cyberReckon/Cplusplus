#include <iostream>
using namespace std;
int main()
{
    int T, N;
    cin >> T;
    long int min = 0;
    while (T)
    {
        cin >> N;
            int * H=new int[N];

        for (int i = 0; i < N; ++i)
            cin >> H[i];

        for (int i = 0; i < N;)
        {
            cin >> H[i];
            if (H[i] <= 0)
            {
                min = min + H[i];
                i++;
            }
            else
            {
                min = min - (H[i] + H[i + 1]);
                i = i + 2;
            }
        }
        T--;
        free(H);
    }
    cout<<min;
    return 0;
}
