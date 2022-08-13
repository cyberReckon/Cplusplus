#include<iostream>
#include<vector>
using namespace std;

int main()
{
   vector<int>v;
    for(int x=1;x<=10;x++)
    {
        v.push_back(x);
    }

    cout<<"Size:"<<v.size()<<endl;

    cout<<"Capacity: "<<v.capacity()<<endl;

    cout<<"Max Size: "<<v.max_size()<<endl;
    
    v.resize(32);
    cout<<"Size:"<<v.size()<<endl;
    return 0;
}
