#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;

int dp(int i,int j,int k,bool pickedP,bool pickedQ)
{

int mod = pow(10,9) + 7;
char p[100], q[100], r[100] ;
int res;
gets(p);
gets(q);
gets(r);

    if(k == strlen(r))
       { 
        {if (pickedP and pickedQ)
            return 1;
            }
        return 0;
       }
    res = 0;
    if (i < strlen(p))
        {if (p[i] == r[k])
            res += dp(i + 1, j, k + 1, true, pickedQ);
        else
            res += dp(i + 1, j, k, pickedP, pickedQ);
        }
    if (j < strlen(q))
        if (q[j] == r[k])
            res += dp(i, j + 1, k + 1, pickedP, true);
        else
            res += dp(i, j + 1, k, pickedP, pickedQ);
    res %= mod;
    return res;
}
int main()
{
cout<<dp(0, 0, 0, false, false);
return 0;
}