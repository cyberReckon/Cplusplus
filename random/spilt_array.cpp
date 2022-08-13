#include <iostream>
using namespace std;

bool myfunc(int sum,int half,int *input,int size) {
    if(sum==half)
    return true;
    
    if(size==0 || sum>half)
    return false;
     
     if(input[size-1]%5==0)
     return myfunc(sum+5,half,input,size-1);
     else if(input[size-1]%3==0)
     return myfunc(sum,half,input,size-1);
     else
     return (myfunc(sum,half,input,size-1) || myfunc(sum+input[size-1],half,input,size-1));
  
}

bool splitArray(int *input, int size) {
    int sum=0,half;
    for(int i=0;i<size;++i)
        sum+=input[i];
    if(sum%2!=0)
    return false;

    else {   
    half=sum/2;
    return ( myfunc(0,half,input,size));
    }
}

int main() {

	int size;
	cin>>size;
	int *input=new int[1+size];	
	
	for(int i=0;i<size;i++)
		cin>>input[i];
	
    if(splitArray(input, size)) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }

	
	return 0;

}