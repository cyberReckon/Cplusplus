#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    long int T, N, Q, K;
    cin >> T;
    long int a, b;
    long int temp;
    while (T)
    {
        cin >> N >> K >> Q;

        while (Q)
        {
            cin >> a >> b;
            if (a > b)
            {
                temp = a;
                a = b;
                b = temp;
            }
            if (b - a >= K)
                cout << 1;

            else if (a - 1 >= K || N - b >= K)
            {
                cout << 1;
            }
            else
                cout << 0;
            Q--;
        }

        T--;
    }
    return 0;
}
