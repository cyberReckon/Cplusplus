#include <iostream>
using namespace std;

int solve(int students[5][5],int n)
{  
    if(n==0)         // if size 0 return 0
    return 0;
    
    int ans[n][n]={0};      //and matrix with all 0s
    int flag=-1;
    int count=0;
    
    for(int i=0;i<n;++i)     //Checking row wise
    {flag=-1;
     for(int j=0;j<n;++j)
          if(students[i][j]==1)   // Check if student is there
          {if(flag==-1)                //Check if 1 student already present
           flag=j;                         // Mark location of first student

          else if(flag!=-1)
           {                                    // 2 students found
                ans[i][j]=1;                    // mark both of them in ans array
                ans[i][flag]=1;
           }
           }
    }

     for(int j=0;j<n;++j)     //Checking column wise
    { flag=-1; 
     for(int i=0;i<n;++i)
    {     
        if(students[i][j]==1)
          {if(flag==-1)
           flag=i;

           else if(flag!=-1)
           {
                ans[i][j]=1;
                ans[flag][j]=1;
           }
           }
    }
    }
      
    for(int i=0;i<n;++i)   //Counting talking students
    for(int j=0;j<n;++j)
     if(ans[i][j]==1)
      count++;
    
    return count;
}

int main()
{   int students[5][5];
    for(int i=0;i<5;++i)
    for(int j=0;j<5;++j)
    cin>>students[i][j];
    cout<<solve(students,5);
    return 0;
}