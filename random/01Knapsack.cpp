#include <iostream>
using namespace std;
int max(int x, int y) {
   return (x > y) ? x : y;
}
int knapSack(int W, int w[], int v[], int n) {
   int i, wt;
   int K[n + 1][W + 1];
   for (i = 0; i <= n; i++) {
      for (wt = 0; wt <= W; wt++) {
         if (i == 0 || wt == 0)
         K[i][wt] = 0;
         else if (w[i - 1] <= wt)
            K[i][wt] = max(v[i - 1] + K[i - 1][wt - w[i - 1]], K[i - 1][wt]);
         else
        K[i][wt] = K[i - 1][wt];
      }
   }
   return K[n][W];
}
int main() {
   
   int n, W;
  n=4;
   int v[]={85,19,36,50};
   int w[]={3,4,7,6};
   cout <<"Enter the capacity of knapsack\n";
   cin>>W;
   cout<<"Optimal solution of 0/1 knapsack:";
   cout<<knapSack(W, w, v, n);
   return 0;
}