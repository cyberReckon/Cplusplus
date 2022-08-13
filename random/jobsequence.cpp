#include<iostream>
using namespace std;
void swap(int *a,int *b)
{ int temp=*a;
   *a=*b;
   *b=temp;
}
int main()
{int num,p[10],d[10],tp=0,jobs[10],mind=0,i,j;
cout<<"Enter no of jobs: ";
cin>>num;
cout<<"Enter profit and deadline of jobs:\n";
for(int i=0;i<num;i++)
{
cin>>p[i]>>d[i];
if(mind<d[i])
mind=d[i];
jobs[i]=i+1;
}
int gc[mind];
for(i=0;i<mind;i++)
gc[i]=1;
for(int i=0;i<num;i++)
for(int j=i+1;j<num;++j)
if(p[i]<p[j])
{ 
swap(&p[i],&p[j]);
swap(&d[i],&d[j]);
swap(&jobs[i],&jobs[j]); 
}
for(i=0;i<num;i++)
{ for(int j=d[i]-1;j>=0;j--)
  {if(gc[j]!=0)
   {tp+=p[i];
    gc[j]=0;
   break;
   }
  } 
}
cout<<"\nTotal profit: "<<tp; 
return 0;
}