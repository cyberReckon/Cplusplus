#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int>n;
    n.assign(9,1);
    cout<<"The contents are : \n";
    for( int i=0;i<n.size();++i)
    {
        cout<<n[i]<<',';
    }
    cout<<endl;

    n.push_back(2);
    n.push_back(2);
    n.pop_back();
    

    int s=n.size();
    cout<<"New :"<<n[s-1]<<endl;

    n.insert(n.begin()+1,5);
    
    for( int i=0;i<n.size();++i)
    {
        cout<<n[i]<<',';
    }

    n.clear();
    cout<<"\nSize ="<<n.size();
    return 0;
}
