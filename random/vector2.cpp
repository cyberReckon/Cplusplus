#include<iostream>
#include<vector>
using namespace std;

int main()
{
   vector<int>num;
   for(int i=1;i<6;++i)
   {
       num.push_back(i);
   }
   for(auto a=num.begin();a!=num.end();++a)
   {
       cout<<*a<<',';
   }
   cout<<num.capacity();
    return 0;
}
